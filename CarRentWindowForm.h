#pragma once
#include "Customer.h"

namespace carbuytest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CarRentWindowForm
	/// </summary>
	public ref class CarRentWindowForm : public System::Windows::Forms::Form
	{
	public:
		CarRentWindowForm(void)
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
		~CarRentWindowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LoadACars;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Button^ EXIT;
	private: System::Windows::Forms::Button^ OK;

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
			this->LoadACars = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->EXIT = (gcnew System::Windows::Forms::Button());
			this->OK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// LoadACars
			// 
			this->LoadACars->Location = System::Drawing::Point(392, 12);
			this->LoadACars->Name = L"LoadACars";
			this->LoadACars->Size = System::Drawing::Size(139, 23);
			this->LoadACars->TabIndex = 0;
			this->LoadACars->Text = L"LoadAvailableCars";
			this->LoadACars->UseVisualStyleBackColor = true;
			this->LoadACars->Click += gcnew System::EventHandler(this, &CarRentWindowForm::LoadACars_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(61, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(877, 385);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(310, 464);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 34);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Have you decided \?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(312, 534);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Enter ID to RENT car";
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(550, 534);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(100, 20);
			this->tbID->TabIndex = 9;
			// 
			// EXIT
			// 
			this->EXIT->Location = System::Drawing::Point(521, 627);
			this->EXIT->Name = L"EXIT";
			this->EXIT->Size = System::Drawing::Size(75, 23);
			this->EXIT->TabIndex = 10;
			this->EXIT->Text = L"EXIT";
			this->EXIT->UseVisualStyleBackColor = true;
			this->EXIT->Click += gcnew System::EventHandler(this, &CarRentWindowForm::EXIT_Click);
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(392, 627);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(75, 23);
			this->OK->TabIndex = 11;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &CarRentWindowForm::OK_Click);
			// 
			// CarRentWindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->EXIT);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->LoadACars);
			this->Name = L"CarRentWindowForm";
			this->Text = L"CarRentWindowForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoadACars_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = L"datasource=localhost;port=3306;database=test;username=root;password=kurama";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(connString);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM CAR_RENT", conDataBase);
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = this->tbID->Text;
	carbuytest::Customer cust;
	cust.ShowDialog();

}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
	carbuytest::Customer cust;
	cust.ShowDialog();
}
};
}
