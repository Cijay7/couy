#include "MyForm.h"
#include <Windows.h>
#include <mmsystem.h>

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SchedulReminder::MyForm form;
	Application::Run(% form);
}

#include <iostream>

void sayHello() {
	std::cout << "Hello, World!" << std::endl;
	return ;
}

