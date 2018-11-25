#pragma once
#include "Noty.h"
#include "SaveInfo.h"

namespace Organizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	/// <summary>
	/// Сводка для AddNoty
	/// </summary>
	public ref class AddNoty : public System::Windows::Forms::Form
	{
	public:
		DateTime _curDate;
	private: System::Windows::Forms::NumericUpDown^  hourEarl;
	private: System::Windows::Forms::NumericUpDown^  minEarl;
	private: System::Windows::Forms::NumericUpDown^  minAfter;

	private: System::Windows::Forms::NumericUpDown^  hourAfter;
	public:

	public:

			 SaveInfo^ _saveInfo;

		AddNoty(DateTime date, SaveInfo^ save)
		{
			_curDate = date;
			_saveInfo = save;
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	public:




	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddNoty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->hourEarl = (gcnew System::Windows::Forms::NumericUpDown());
			this->minEarl = (gcnew System::Windows::Forms::NumericUpDown());
			this->minAfter = (gcnew System::Windows::Forms::NumericUpDown());
			this->hourAfter = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourEarl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minEarl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minAfter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourAfter))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(7, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 210);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 106);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Тема:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Описание:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"От";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 30);
			this->label4->TabIndex = 6;
			this->label4->Text = L"До";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(106, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 30);
			this->label5->TabIndex = 8;
			this->label5->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(106, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 30);
			this->label6->TabIndex = 11;
			this->label6->Text = L":";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 41);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddNoty::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(162, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 41);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddNoty::button2_Click);
			// 
			// hourEarl
			// 
			this->hourEarl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourEarl->Location = System::Drawing::Point(52, 97);
			this->hourEarl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->hourEarl->Name = L"hourEarl";
			this->hourEarl->Size = System::Drawing::Size(47, 26);
			this->hourEarl->TabIndex = 19;
			this->hourEarl->ValueChanged += gcnew System::EventHandler(this, &AddNoty::hourEarl_ValueChanged);
			// 
			// minEarl
			// 
			this->minEarl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minEarl->Location = System::Drawing::Point(131, 98);
			this->minEarl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->minEarl->Name = L"minEarl";
			this->minEarl->Size = System::Drawing::Size(47, 26);
			this->minEarl->TabIndex = 20;
			this->minEarl->ValueChanged += gcnew System::EventHandler(this, &AddNoty::minEarl_ValueChanged);
			// 
			// minAfter
			// 
			this->minAfter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minAfter->Location = System::Drawing::Point(131, 145);
			this->minAfter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->minAfter->Name = L"minAfter";
			this->minAfter->Size = System::Drawing::Size(47, 26);
			this->minAfter->TabIndex = 22;
			this->minAfter->ValueChanged += gcnew System::EventHandler(this, &AddNoty::minEarl_ValueChanged);
			// 
			// hourAfter
			// 
			this->hourAfter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourAfter->Location = System::Drawing::Point(52, 144);
			this->hourAfter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->hourAfter->Name = L"hourAfter";
			this->hourAfter->Size = System::Drawing::Size(47, 26);
			this->hourAfter->TabIndex = 23;
			this->hourAfter->ValueChanged += gcnew System::EventHandler(this, &AddNoty::hourEarl_ValueChanged);
			// 
			// AddNoty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 375);
			this->Controls->Add(this->hourAfter);
			this->Controls->Add(this->minAfter);
			this->Controls->Add(this->minEarl);
			this->Controls->Add(this->hourEarl);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"AddNoty";
			this->Text = L"AddNoty";
			this->Load += gcnew System::EventHandler(this, &AddNoty::AddNoty_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourEarl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minEarl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minAfter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourAfter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
				{

				}

		private: System::Void AddNoty_Load(System::Object^  sender, System::EventArgs^  e)
		{
			hourAfter->Text = "00";
			hourEarl->Text = "00";
			minEarl->Text = "00";
			minAfter->Text = "00";
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Hide();
		}

				 bool TimeNotEq(int a, int b, int c, int d)
				 {
					 if (a > d || (a == d && c >= b))
					 {
						 return false;
					 }

					 return true;
				 }

				 DateTime ConvertToDate(Decimal hour, Decimal min)
				 {
					 return DateTime(_curDate.Year, _curDate.Month, _curDate.Day, (int)hour, (int)min, 0);
				 }

				 int GetId() 
				 {
					 if (_saveInfo->notysList->Count > 1) {
						 return _saveInfo->notysList[_saveInfo->notysList->Count-1]->Id+1;
					 }
					 return 1;
				 }

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{

			int a = Convert::ToInt16(hourEarl->Value);
			int b = Convert::ToInt16(minEarl->Value);
			int c = Convert::ToInt16(minAfter->Value);
			int d = Convert::ToInt16(hourAfter->Value);

			if (textBox1->Text != "" && textBox2->Text != "" && TimeNotEq(a, b, c, d))
			{
				Noty^ notyItem = gcnew Noty();
				notyItem->Id = GetId();
				notyItem->Name = "default";
				notyItem->Title = textBox1->Text;
				notyItem->Text = textBox2->Text;
				notyItem->dateStart = ConvertToDate(a, b);
				notyItem->dateEnd = ConvertToDate(d, c);
				_saveInfo->notysList->Add(notyItem);
				_saveInfo->Serialize("noty.sct");
				Hide();
			}
		}

	String^ CheckFormat(NumericUpDown^ num,int min,int max) {
		int valNow = Convert::ToInt16(num->Value);
		if (valNow < 10 && valNow > -1) {
			return "0" + valNow;
		}
		if (valNow > max || valNow < min) {
			return "00";
		}
	}

	private: System::Void hourEarl_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int min = 0;
		int max = 23;
		((NumericUpDown^)sender)->Text = CheckFormat((NumericUpDown^)sender,min,max);
		
	}
private: System::Void minEarl_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int min = 0;
	int max = 59;
	((NumericUpDown^)sender)->Text = CheckFormat((NumericUpDown^)sender, min, max);
}
};
}



