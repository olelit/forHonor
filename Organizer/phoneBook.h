#pragma once
#include "SaveInfo.h";
namespace Organizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для phoneBook
	/// </summary>
	public ref class phoneBook : public System::Windows::Forms::Form
	{
		SaveInfo^ save = gcnew SaveInfo();
		System::Collections::Generic::List<phoneInfo^>^ phone;
	public:
		phoneBook(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~phoneBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column3,
					this->Column1, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(35, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView1->Size = System::Drawing::Size(433, 291);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Id";
			this->Column3->Name = L"Column3";
			this->Column3->Visible = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Имя";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Номер телефона";
			this->Column2->Name = L"Column2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 322);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 306);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(253, 306);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Телефон";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &phoneBook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(35, 377);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &phoneBook::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(116, 377);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &phoneBook::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(256, 323);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(212, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// phoneBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 425);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"phoneBook";
			this->Text = L"phoneBook";
			this->Load += gcnew System::EventHandler(this, &phoneBook::phoneBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: 
		int CreateId()
		{
			int i = 1;
			for each (phoneInfo^ item in phone)
			{
				if(i == item->Id)
					i++;
			}
			return i;
		}
		
		System::Void phoneBook_Load(System::Object^  sender, System::EventArgs^  e) {

		save->Deserialize("phone.sct");
		phone = save->phoneList;
		int i = 0;
		for each (phoneInfo^ item in phone)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = item->Id;
			dataGridView1->Rows[i]->Cells[1]->Value = item->Name;
			dataGridView1->Rows[i]->Cells[2]->Value = item->Number;
			i++;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name = textBox1->Text;
	int number = (int)numericUpDown1->Value;
	if (name != "" && number > 0) {
		phoneInfo^ phInfo = gcnew phoneInfo();
		phInfo->Id = CreateId();
		phInfo->Name = name;
		phInfo->Number = number;
		dataGridView1->Rows->Add();
		int last = dataGridView1->RowCount - 1;
		dataGridView1->Rows[last]->Cells[0]->Value = phInfo->Id;
		dataGridView1->Rows[last]->Cells[1]->Value = phInfo->Name;
		dataGridView1->Rows[last]->Cells[2]->Value = phInfo->Number;
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	bool flag = true;
	phone->Clear();
	for (int i = 0; i < dataGridView1->RowCount; i++) {

		phoneInfo^ item = gcnew phoneInfo();
		item->Id = (int)dataGridView1->Rows[i]->Cells[0]->Value;
		item->Name = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
		item->Number = Convert::ToInt64(dataGridView1->Rows[i]->Cells[2]->Value);
		if (item->Id == 0 || item->Name == "" || item->Number == 0) {
			flag = false;
		}
		phone->Add(item);
	}
	save->phoneList = phone;
	if(flag)
		save->Serialize("phone.sct");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
}
};
}
