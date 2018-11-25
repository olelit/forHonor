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

	/// <summary>
	/// Сводка для UpdateNoty
	/// </summary>
	public ref class UpdateNoty : public System::Windows::Forms::Form
	{
	public:
		Noty^ _noty;
	private: System::Windows::Forms::NumericUpDown^  minAfter;
	private: System::Windows::Forms::NumericUpDown^  minEarl;
	private: System::Windows::Forms::NumericUpDown^  hourEarl;
	private: System::Windows::Forms::NumericUpDown^  hourAfter;
	public:

			 SaveInfo^ saveList;
		UpdateNoty(Noty^ noty, SaveInfo^ save)
		{
			_noty = noty;
			saveList = save;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UpdateNoty()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->hourAfter = (gcnew System::Windows::Forms::NumericUpDown());
			this->minAfter = (gcnew System::Windows::Forms::NumericUpDown());
			this->minEarl = (gcnew System::Windows::Forms::NumericUpDown());
			this->hourEarl = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourAfter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minAfter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minEarl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourEarl))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(234, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 41);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateNoty::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 41);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateNoty::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(111, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 30);
			this->label6->TabIndex = 26;
			this->label6->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(111, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 30);
			this->label5->TabIndex = 25;
			this->label5->Text = L":";
			this->label5->Click += gcnew System::EventHandler(this, &UpdateNoty::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(17, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 30);
			this->label4->TabIndex = 24;
			this->label4->Text = L"До";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(17, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 30);
			this->label3->TabIndex = 23;
			this->label3->Text = L"От";
			this->label3->Click += gcnew System::EventHandler(this, &UpdateNoty::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 30);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Описание:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 30);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Тема:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(17, 201);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(322, 106);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 26);
			this->textBox1->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(123, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 41);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UpdateNoty::button3_Click);
			// 
			// hourAfter
			// 
			this->hourAfter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourAfter->Location = System::Drawing::Point(58, 130);
			this->hourAfter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->hourAfter->Name = L"hourAfter";
			this->hourAfter->Size = System::Drawing::Size(47, 26);
			this->hourAfter->TabIndex = 37;
			// 
			// minAfter
			// 
			this->minAfter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minAfter->Location = System::Drawing::Point(137, 131);
			this->minAfter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->minAfter->Name = L"minAfter";
			this->minAfter->Size = System::Drawing::Size(47, 26);
			this->minAfter->TabIndex = 36;
			// 
			// minEarl
			// 
			this->minEarl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minEarl->Location = System::Drawing::Point(137, 84);
			this->minEarl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->minEarl->Name = L"minEarl";
			this->minEarl->Size = System::Drawing::Size(47, 26);
			this->minEarl->TabIndex = 35;
			// 
			// hourEarl
			// 
			this->hourEarl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourEarl->Location = System::Drawing::Point(58, 83);
			this->hourEarl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->hourEarl->Name = L"hourEarl";
			this->hourEarl->Size = System::Drawing::Size(47, 26);
			this->hourEarl->TabIndex = 34;
			// 
			// UpdateNoty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 366);
			this->Controls->Add(this->hourAfter);
			this->Controls->Add(this->minAfter);
			this->Controls->Add(this->minEarl);
			this->Controls->Add(this->hourEarl);
			this->Controls->Add(this->button3);
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
			this->Name = L"UpdateNoty";
			this->Text = L"UpdateNoty";
			this->Load += gcnew System::EventHandler(this, &UpdateNoty::UpdateNoty_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourAfter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minAfter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minEarl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourEarl))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void hourEarl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void minEarl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			int ind = saveList->notysList->IndexOf(_noty);
			saveList->notysList->RemoveAt(ind);
			saveList->Serialize("noty.sct");
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

		 DateTime ConvertToDate(Decimal hour, Decimal min,Noty^ nt)
		 {
			 return DateTime(nt->dateStart.Year, nt->dateStart.Month, nt->dateStart.Day, (int)hour, (int)min, 0);
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = Convert::ToInt16(hourEarl->Value);
	int b = Convert::ToInt16(minEarl->Value);
	int c = Convert::ToInt16(minAfter->Value);
	int d = Convert::ToInt16(hourAfter->Value);
	for each (Noty^ var in saveList->notysList)
	{
		if (var->Id == _noty->Id && TimeNotEq(a,b,c,d))
		{
			var->Title = textBox1->Text;
			var->dateStart = ConvertToDate(Convert::ToDecimal(hourEarl->Text), Convert::ToDecimal(minEarl->Text),var);
			var->dateEnd = ConvertToDate(Convert::ToDecimal(hourAfter->Text), Convert::ToDecimal(minAfter->Text), var);
			var->Text = textBox2->Text;
			saveList->Serialize("noty.sct");
			//_form->CreateTable();
			Hide();
			break;
		}
	}
}
private: System::Void UpdateNoty_Load(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = _noty->Title;
	hourEarl->Value = _noty->dateStart.Hour;
	hourAfter->Value = _noty->dateEnd.Hour;
	minEarl->Value = _noty->dateStart.Minute;
	minAfter->Value = _noty->dateEnd.Minute;
	textBox2->Text = _noty->Text;
	
}
};
}
