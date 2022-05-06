#pragma once
#include "CustomerModel.h"

namespace carbuytest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Customer
	/// </summary>
	public ref class Customer : public System::Windows::Forms::Form
	{
	public:
		Customer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customer()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbDL;
	private: System::Windows::Forms::TextBox^ tbAdr;
	private: System::Windows::Forms::TextBox^ tbPN;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbOption;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbDL = (gcnew System::Windows::Forms::TextBox());
			this->tbAdr = (gcnew System::Windows::Forms::TextBox());
			this->tbPN = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbOption = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(298, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CUSTOMER DETAILS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NAME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(131, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DRIVER LICENSE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(131, 328);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ADDRESS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(131, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"PHONE NO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(131, 449);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"PRICE PAID";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 559);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customer::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 559);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(352, 196);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 20);
			this->tbName->TabIndex = 8;
			// 
			// tbDL
			// 
			this->tbDL->Location = System::Drawing::Point(352, 266);
			this->tbDL->Name = L"tbDL";
			this->tbDL->Size = System::Drawing::Size(100, 20);
			this->tbDL->TabIndex = 9;
			// 
			// tbAdr
			// 
			this->tbAdr->Location = System::Drawing::Point(352, 321);
			this->tbAdr->Name = L"tbAdr";
			this->tbAdr->Size = System::Drawing::Size(100, 20);
			this->tbAdr->TabIndex = 10;
			// 
			// tbPN
			// 
			this->tbPN->Location = System::Drawing::Point(352, 380);
			this->tbPN->Name = L"tbPN";
			this->tbPN->Size = System::Drawing::Size(100, 20);
			this->tbPN->TabIndex = 11;
			// 
			// tbPrice
			// 
			this->tbPrice->Location = System::Drawing::Point(352, 442);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(100, 20);
			this->tbPrice->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(131, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"OPTION";
			// 
			// tbOption
			// 
			this->tbOption->Location = System::Drawing::Point(352, 128);
			this->tbOption->Name = L"tbOption";
			this->tbOption->Size = System::Drawing::Size(100, 20);
			this->tbOption->TabIndex = 14;
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->tbOption);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbPN);
			this->Controls->Add(this->tbAdr);
			this->Controls->Add(this->tbDL);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Customer";
			this->Text = L"Customer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: CustomerModel^ customer = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ option = this->tbOption->Text;
		String^ name = this->tbName->Text;
		String^ dl = this->tbDL->Text;
		String^ adr = this->tbAdr->Text;
		String^ pn = this->tbPN->Text;
		String^ price = this->tbPrice->Text;

		String^ connString = L"datasource=localhost;port=3306;database=test;username=root;password=kurama";
		MySqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO CUSTOMER " +
			"(opt, name, dl, address, pn, price) VALUES" +
			"(@opt, @name, @dl, @adr, @pn, @price);";

		MySqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@opt", option);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@dl", dl);
		command.Parameters->AddWithValue("@adr", adr);
		command.Parameters->AddWithValue("@pn", pn);
		command.Parameters->AddWithValue("@price", price);
		command.ExecuteNonQuery();

		customer = gcnew CustomerModel;
		customer->opt = option;
		customer->name = name;
		customer->dl = dl;
		customer->adr = adr;
		customer->pn = pn;
		customer->price = price;

		this->Close();

		if (option == "buy") {
			MessageBox::Show("SUCCESSFULLY BOUGHT THE CAR", "CONGRATUALTIONS", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("SUCCESSFULLY RENTED THE CAR", "CONGRATULATION", MessageBoxButtons::OK);
		}
	}
};
}
