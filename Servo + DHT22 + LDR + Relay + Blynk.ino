#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL67H05vuh1"
#define BLYNK_TEMPLATE_NAME "jir"
#define BLYNK_AUTH_TOKEN "zf4w9bRq4b2nbqyAS1d-IVOFMAFWJO9w"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "DHTesp.h"
#include <ESP32Servo.h>

// Blynk
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";
BlynkTimer timer;

// DHT22
const int DHT_PIN = 12;
DHTesp dhtSensor;

// LDR
const float GAMMA = 0.7;
const float RL10 = 50;

// Relay
#define Relay 13

// Servo
Servo servoku;
int Posisi = 0;

void sendSensor()
{
  int analogValue = analogRead(33);
  float voltage = analogValue * 5 / 4095.0;
  float resistance = 2000 * voltage / (1 - voltage / 5);
  float lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));
  Serial.print("Lux: ");
  Serial.println(lux);

  TempAndHumidity data = dhtSensor.getTempAndHumidity();
  Serial.println("Temp: " + String(data.temperature, 2) + "°C");
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");
  Serial.println("---");
//0 tertutup
//90 terbuka
  Blynk.virtualWrite(V0, data.temperature);
  Blynk.virtualWrite(V1, data.humidity);
  Blynk.virtualWrite(V2, lux);
  if (data.temperature < 35) {
    if (data.humidity > 60) {
      if (lux > 300) {
        servoku.write(0); // Posisi 180 derajat
        Serial.println("Suhu < 35C, Kelembapan > 60%, Lux > 300: Servo ke posisi 0 derajat.");
      } else {
        servoku.write(90); // Posisi 135 derajat
        Serial.println("Suhu < 35C, Kelembapan > 60%, Lux <= 300: Servo ke posisi 90 derajat.");
      }
    } else {
      if (lux < 300) {
        servoku.write(90); // Posisi 90 derajat
        Serial.println("Suhu < 35C, Kelembapan < 60%, Lux < 300: Servo ke posisi 90 derajat.");
      } else {
        servoku.write(0); // Posisi 45 derajat
        Serial.println("Suhu < 35C, Kelembapan < 60%, Lux >= 300: Servo ke posisi 0 derajat.");
      }
    }
  } else {
    if (data.temperature > 35) {
      if (lux > 300) {
        servoku.write(0); // Posisi 135 derajat
        Serial.println("Suhu > 35C, Kelembapan > 60%, Lux > 300: Servo ke posisi 90 derajat.");
      } else {
        servoku.write(90); // Posisi 90 derajat
        Serial.println("Suhu > 35C, Kelembapan > 60%, Lux <= 300: Servo ke posisi 0 derajat.");
      }
    }
  }
  // Logika untuk mengontrol pompa berdasarkan kelembaban
  if (data.humidity <= 60)
  {
    digitalWrite(Relay, HIGH);
    Serial.println("Pompa HIDUP (kelembaban di bawah 60%)");
    Blynk.virtualWrite(V4, 1);
  }
  else if (data.humidity >= 80)
  {
    digitalWrite(Relay, LOW);
    Serial.println("Pompa MATI (kelembaban di atas 80%)");
    Blynk.virtualWrite(V4, 0);
  }
}

BLYNK_WRITE(V5)
{
  Posisi = param.asInt();
  servoku.write(Posisi);
  Blynk.virtualWrite(V5, Posisi);
 
}

void setup()
{
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, LOW); // Memastikan relay dimulai dalam keadaan mati
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servoku.attach(2);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
