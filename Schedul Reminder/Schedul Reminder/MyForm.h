#pragma once

namespace SchedulReminder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::DateTimePicker^ timeset;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txtmk;
	private: System::Windows::Forms::ComboBox^ cmbsks;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ cmbdays;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer2;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timeset = (gcnew System::Windows::Forms::DateTimePicker());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtmk = (gcnew System::Windows::Forms::TextBox());
			this->cmbsks = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->cmbdays = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timeset
			// 
			this->timeset->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->timeset->Location = System::Drawing::Point(474, 231);
			this->timeset->Margin = System::Windows::Forms::Padding(4);
			this->timeset->Name = L"timeset";
			this->timeset->Size = System::Drawing::Size(138, 29);
			this->timeset->TabIndex = 9;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 27;
			this->listBox1->Location = System::Drawing::Point(45, 453);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1181, 409);
			this->listBox1->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 924);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 50);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Add Item";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtmk
			// 
			this->txtmk->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtmk->Location = System::Drawing::Point(45, 231);
			this->txtmk->Margin = System::Windows::Forms::Padding(4);
			this->txtmk->Name = L"txtmk";
			this->txtmk->Size = System::Drawing::Size(273, 29);
			this->txtmk->TabIndex = 12;
			// 
			// cmbsks
			// 
			this->cmbsks->FormattingEnabled = true;
			this->cmbsks->Location = System::Drawing::Point(45, 363);
			this->cmbsks->Margin = System::Windows::Forms::Padding(4);
			this->cmbsks->Name = L"cmbsks";
			this->cmbsks->Size = System::Drawing::Size(149, 32);
			this->cmbsks->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 297);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"SKS";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 924);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 160);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 24);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Mata Kuliah";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(468, 160);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 24);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Start Jam";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(538, 924);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 50);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1026, 924);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 50);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1026, 195);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 65);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Set Alarm";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// cmbdays
			// 
			this->cmbdays->FormattingEnabled = true;
			this->cmbdays->Location = System::Drawing::Point(474, 361);
			this->cmbdays->Margin = System::Windows::Forms::Padding(4);
			this->cmbdays->Name = L"cmbdays";
			this->cmbdays->Size = System::Drawing::Size(147, 32);
			this->cmbdays->TabIndex = 26;
			this->cmbdays->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label5->Location = System::Drawing::Point(474, 297);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Hari";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(789, 924);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 50);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Stop";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Navy;
			this->label7->Location = System::Drawing::Point(15, 11);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 31);
			this->label7->TabIndex = 30;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(823, 236);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 24);
			this->label8->TabIndex = 32;
			this->label8->Text = L"n/a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(823, 195);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 24);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Set Alarm Ke Jam:";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1281, 1024);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbdays);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbsks);
			this->Controls->Add(this->txtmk);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->timeset);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Schedule Reminder";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	   String^ stdDetails= "| {0,-15}| {1,-15}| {2,-15}| {3,-15}| {4}";
	   String^ datails = "| {0,-20}| {1,-15}| {2,-13}| {3,-10}";
	   String^ alarmtime;
	   String^ alarmdays;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Add(String::Format(stdDetails, "Mata Kuliah","SKS","Hari","Waktu",""));
	cmbsks->Items->Add("1 Sks");
	cmbsks->Items->Add("2 Sks");
	cmbsks->Items->Add("3 Sks");
	cmbsks->Items->Add("4 Sks");
	cmbsks->Items->Add("Praktikum");
	cmbdays->Items->Add("Senin");
	cmbdays->Items->Add("Selasa");
	cmbdays->Items->Add("Rabu");
	cmbdays->Items->Add("Kamis");
	cmbdays->Items->Add("Jumat");
	cmbdays->Items->Add("Sabtu");
	cmbdays->Items->Add("Minggu");
	timer1->Enabled = false;
	timer1->Interval = 1000;
	timer2->Enabled;
	timer2->Interval = 100;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Mk;
	String^ Sks;
	String^ Waktu;
	String^ Hari;
	String^ Alarm;
	Mk = txtmk->Text;
	Sks = cmbsks->Text;
	Waktu = timeset->Text;
	Hari = cmbdays->Text;
	listBox1->Items->Add(String::Format(datails, Mk, Sks, Hari, Waktu, Alarm));
	if (cmbsks->Text == "")
	{	MessageBox::Show("Harap Isi", "SKS Masih Kosong", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (listBox1->Items->Count > 1) {
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);
		}
	}
	else if (txtmk->Text=="")
	{	MessageBox::Show("Harap isi", "Matkul Masih Kosong", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (listBox1->Items->Count > 1) {
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);
		}
	}
	else if (cmbdays->Text=="")
	{	MessageBox::Show("Harap isi", "Hari Masih Kosong", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (listBox1->Items->Count > 1) {
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);
	}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ sound = gcnew SoundPlayer;
	sound->SoundLocation = "C:\\Users\\ASUS\\source\\repos\\Schedul Reminder\\Schedul Reminder\\Zeta.wav";
	sound->Load();
	sound->PlayLooping();
	 MessageBox::Show("1 Jam Lagi Akan Kelas", "Reminder"), MessageBoxButtons::OK, MessageBoxIcon::Question;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	txtmk->Text = "";
	cmbsks->Text = "";
	cmbdays->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int itemCount = listBox1->Items->Count;
	if (listBox1->Items->Count > 1) {
		listBox1->Items->RemoveAt(listBox1->Items->Count - 1);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = true;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	DateTime now = DateTime::Now;
	DateTime Waktutime;
	String^ currentTime = now.ToString("HH:mm:ss");
	if (listBox1->SelectedIndex != -1) {
		String^ selectedItem = listBox1->SelectedItem->ToString();
		// Memisahkan string berdasarkan delimiter (misalnya ";")
		array<String^>^ columns = selectedItem->Split('|');
		if (columns->Length >= 5) {
			String^ Waktu = columns[4];
			label8->Text = Waktu;
			DateTime::TryParse(Waktu, Waktutime);
			Waktu = Waktutime.ToString("HH:mm:ss");
			if (Waktu == currentTime )//&&!messageBoxShown)
			{
				SoundPlayer^ sound = gcnew SoundPlayer;
				sound->SoundLocation = "C:\\Users\\ASUS\\source\\repos\\Schedul Reminder\\Schedul Reminder\\Zeta.wav";
				sound->Load();
				sound->PlayLooping();
				MessageBox::Show("1 Jam Lagi Akan Kelas", "Reminder"), MessageBoxButtons::OK, MessageBoxIcon::Question;
				//messageBoxShown = true;
			}
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ sound = gcnew SoundPlayer;
	sound->Stop();
}
	//Modul 8 GUI
	//Modul 7 Stack                    
	//Modul 6 Getter
	//Modul 5 Constructor akan berjalan ketika runing
	//Modul 4 Method dan Function    
	//Modul 2 if else                  
	//Modul 1 Struktur Data            
	//Modul 3 Perulangan               PlayLooping
	//
	//
	//
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = System::Convert::ToString(DateTime::Now)->Remove(0, 10);
}
};
}
