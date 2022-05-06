#include "CarWindowForm.h"
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "CarRentWindowForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	while (true) {
		carbuytest::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			carbuytest::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		carbuytest::MainForm mainForm(user);
		Application::Run(% mainForm);
		//MessageBox::Show("Authentication Successful",
			//"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
	
	carbuytest::CarWindowForm cwf;
	cwf.ShowDialog();

	carbuytest::CarRentWindowForm crwf;
	crwf.ShowDialog();
}