#pragma once
#include "User.h"
namespace carbuytest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::Button^ btnSignUp;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llSignin;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llSignin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(960, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 472);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(244, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 416);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 348);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Gender";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 229);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 32);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Phone Number";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Email ID";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(264, 466);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(683, 38);
			this->tbConfirmPassword->TabIndex = 8;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(264, 109);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(683, 38);
			this->tbName->TabIndex = 9;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(264, 167);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(683, 38);
			this->tbEmail->TabIndex = 10;
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(264, 238);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(683, 38);
			this->tbPhone->TabIndex = 11;
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(264, 289);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(683, 38);
			this->tbAddress->TabIndex = 12;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(264, 410);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(683, 38);
			this->tbPassword->TabIndex = 14;
			// 
			// cbGender
			// 
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"No Preference" });
			this->cbGender->Location = System::Drawing::Point(264, 348);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(340, 39);
			this->cbGender->TabIndex = 15;
			// 
			// btnSignUp
			// 
			this->btnSignUp->Location = System::Drawing::Point(264, 544);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(250, 59);
			this->btnSignUp->TabIndex = 16;
			this->btnSignUp->Text = L"Sign UP";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &RegisterForm::btnSignUp_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(610, 544);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(250, 59);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llSignin
			// 
			this->llSignin->AutoSize = true;
			this->llSignin->Location = System::Drawing::Point(827, 611);
			this->llSignin->Name = L"llSignin";
			this->llSignin->Size = System::Drawing::Size(102, 32);
			this->llSignin->TabIndex = 18;
			this->llSignin->TabStop = true;
			this->llSignin->Text = L"Sign In";
			this->llSignin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llSignin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 652);
			this->Controls->Add(this->llSignin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void llSignin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ gender = cbGender->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0 ||
			address->Length == 0 || gender->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter all details",
				"Empty Detail(s)", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password is incorrect",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = L"datasource=localhost;port=3306;database=test;username=root;password=kurama";
			MySqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, gender, password) VALUES" +
				"(@name, @email, @phone, @address, @gender, @password);";

			MySqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@gender", gender);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->gender = gender;
			user->password = password;

			this->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("failed to register new user",
				"Register failed", MessageBoxButtons::OK);
			return;
		}
	}
	};
}