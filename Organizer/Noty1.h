#pragma once
#include "SaveInfo.h"

namespace Organizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Noty
	/// </summary>
	public ref class NotyClass : public System::Windows::Forms::Form
	{
	public:
		SaveInfo^ save = gcnew SaveInfo();
		System::Collections::Generic::List<notebook^>^ noteBook;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	public:
		System::Collections::Generic::List<int>^ indexs;
		NotyClass(void)
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
		~NotyClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(199, 444);
			this->listBox1->TabIndex = 0;
			this->listBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &NotyClass::listBox1_MouseClick);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &NotyClass::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(217, 58);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(562, 400);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(785, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NotyClass::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(217, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(562, 40);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(785, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NotyClass::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(785, 435);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NotyClass::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(785, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NotyClass::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(785, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Изменить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &NotyClass::button5_Click);
			// 
			// NotyClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 476);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"NotyClass";
			this->Text = L"Noty";
			this->Load += gcnew System::EventHandler(this, &NotyClass::NotyClass_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NotyClass_Load(System::Object^  sender, System::EventArgs^  e) {
		indexs = gcnew System::Collections::Generic::List<int>();
		save->Deserialize("notebook.sct");
		noteBook = save->notebookList;
		for each (notebook^ var in noteBook)
		{
			listBox1->Items->Add(var->Title);
			indexs->Add(var->Id);			
		}
		if (noteBook->Count > 0) {
			textBox2->Text = noteBook[0]->Title;
			textBox1->Text = noteBook[0]->Text;
			index = 0;
		}
		listBox1->Items->Add("Добавить...");
	}
private: 
	
	bool notEmpty() {
		if (textBox1->Text == "" || textBox2->Text == "") {
			return false;
		}
		return true;
	}

	int index = -1;

	System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (listBox1->Items->Count <= 1) {
			button4->Enabled = false;
		}

}
private: 
	int CreateId()
	{
		int i = 1;
		for each (notebook^ item in noteBook)
		{
			if (i == item->Id)
				i++;
		}
		return i;
	}
	
	
	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (notEmpty()) {
		notebook^ elem = gcnew notebook();
		elem->Id = CreateId();
		elem->Title = textBox2->Text;
		elem->Text = textBox1->Text;
		noteBook->Add(elem);
		listBox1->Items->RemoveAt(index);
		listBox1->Items->Add(textBox2->Text);
		indexs->Add(elem->Id);
		listBox1->Items->Add("Добавить...");
		MessageBox::Show("Данные изменены. Сохранитесь для применения изменений");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	save->notebookList = noteBook;
	save->Serialize("notebook.sct");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
}
private: System::Void listBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	String^ listBoxTitle = listBox1->SelectedItem->ToString();
	index = listBox1->SelectedIndex;
	if (listBoxTitle == "Добавить...") {
		textBox2->Text = "";
		textBox1->Text = "";
		button1->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else {
		button1->Enabled = false;
		button4->Enabled = true;
		button5->Enabled = true;
		textBox2->Text = noteBook[index]->Title;
		textBox1->Text = noteBook[index]->Text;
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->RemoveAt(index);
	noteBook->RemoveAt(index);
	indexs->RemoveAt(index);
	if (listBox1->Items->Count > 1) {
		listBox1->SelectedIndex = 0;
		index = 0;
		textBox2->Text = noteBook[index]->Title;
		textBox1->Text = noteBook[index]->Text;
	}
	else {
		textBox2->Text = "";
		textBox1->Text = "";
	}
	MessageBox::Show("Данные изменены. Сохранитесь для применения изменений");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (notEmpty()) {
		listBox1->Items[index] = textBox2->Text;
		noteBook[index]->Text = textBox1->Text;
		noteBook[index]->Title = textBox2->Text;
		MessageBox::Show("Данные изменены. Сохранитесь для применения изменений");
	}
}
};
}
