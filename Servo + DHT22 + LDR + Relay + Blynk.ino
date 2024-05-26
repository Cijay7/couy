#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL67H05vuh1"
#define BLYNK_TEMPLATE_NAME "jir"
#define BLYNK_AUTH_TOKEN "zf4w9bRq4b2nbqyAS1d-IVOFMAFWJO9w"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "DHTesp.h"
#include <ESP32Servo.h>

//Blynk
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";
BlynkTimer timer;

//DHT22
const int DHT_PIN = 12;
DHTesp dhtSensor;

//LDR
const float GAMMA = 0.7;
const float RL10 = 50;

//Relay
#define Relay 13
int SW_State=0;

//Servo
Servo servoku;
int Posisi = 0;

void sendSensor()
{
  int analogValue = analogRead(33);
  float voltage = analogValue * 5/4095.0;
  float resistance = 2000 * voltage / (1 - voltage / 5);
  float lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resistance, (1 / GAMMA));
  Serial.print("Lux: ");
  Serial.println(lux);
  
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();
  Serial.println("Temp: " + String(data.temperature, 2) + "°C");
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");
  Serial.println("---");


  Blynk.virtualWrite(V0, data.temperature); 
  Blynk.virtualWrite(V1, data.humidity);
  Blynk.virtualWrite(V2, lux);
}

  
BLYNK_WRITE (V3)
}
 // Logika untuk mengontrol pompa berdasarkan kelembaban
  if (data.humidity < 60)
  {
    digitalWrite(Relay, HIGH);
    Serial.println("Pompa HIDUP (kelembaban di bawah 60%)");
    Blynk.virtualWrite(V4, "HIDUP");
  }
  else if (data.humidity > 80)
  {
    digitalWrite(Relay, LOW);
    Serial.println("Pompa MATI (kelembaban di atas 80%)");
    Blynk.virtualWrite(V4, "MATI");
  }
}

BLYNK_WRITE (V5)
{
  Posisi = param.asInt();
  servoku.write(Posisi);
  Blynk.virtualWrite(V5, Posisi);
}

void setup()
{
  pinMode(Relay, OUTPUT);
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
