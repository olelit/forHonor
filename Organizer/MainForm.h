#pragma once
#include "AddNoty.h"
#include "UpdateNoty.h"
#include "phoneBook.h"
#include "MySnake.h";
#include "Noty1.h"
//#include "notebook.h"

namespace Organizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		static MainForm^ form;
		MainForm(void)
		{
			InitializeComponent();
			form = this;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  CurDate;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->CurDate = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// CurDate
			// 
			this->CurDate->AutoSize = true;
			this->CurDate->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurDate->Location = System::Drawing::Point(111, 11);
			this->CurDate->Name = L"CurDate";
			this->CurDate->Size = System::Drawing::Size(67, 26);
			this->CurDate->TabIndex = 0;
			this->CurDate->Text = L"label1";
			this->CurDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->CurDate);
			this->panel1->Location = System::Drawing::Point(981, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 100);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"sun.png");
			this->imageList1->Images->SetKeyName(1, L"full_moon_icon-icons.com_62497 (1).png");
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(12, 124);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(952, 538);
			this->panel2->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->AutoSize = true;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(67, 535);
			this->panel4->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(12, 61);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(952, 60);
			this->panel3->TabIndex = 3;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			this->panel3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel3_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Пр.Нед.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сл. Нед";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(981, 133);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 4;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MainForm::monthCalendar1_DateChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 33);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Поиск...";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &MainForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MainForm::textBox1_Leave);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(981, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Телефонная книга";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(981, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 25);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Заметки";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(981, 367);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(164, 25);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 674);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Bitmap^ curTimeImg; // фото загрузки в pictureBox
	array<String^>^ arr = gcnew array<String^>(7);
	array<DateTime>^ date = gcnew array<DateTime>(7);
	SaveInfo^ save = gcnew SaveInfo();
	List<Noty^>^ myNotyList;

	List<Panel^>^ panList = gcnew List<Panel^>();
	List<Label^>^ lbList = gcnew List<Label^>();
	List<Label^>^ NotylbList = gcnew List<Label^>();

	String^ UserLogin = "default";
	int hBlock = 60;
	const int wBlock = 110;
		
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{

		CurDate->Text = DateTime::UtcNow.ToShortTimeString()+"\n"+DateTime::UtcNow.ToShortDateString();
		if (DateTime::UtcNow.Hour >= 20) {
			ChangeCartoon("/Images/moon.png");
		}
		else if(DateTime::UtcNow.Hour > 3){
			ChangeCartoon("/Images/sun.png");
		}
	}

			 String^ GetPath(String^ name) {
				 return Directory::GetCurrentDirectory() + name;
			 }
			 void ChangeCartoon(String^ path)
			 {
				 pictureBox1->Image = Image::FromFile(GetPath(path));
			 }

			 void GetALLNoty()
			 {
				 myNotyList = gcnew List<Noty^>();
				 for each ( Noty^ item in save->notysList)
				 {
					 if (item->Name == UserLogin) {
						 myNotyList->Add(item);
					 }
				 }				 
			 }


	public: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		BuildTable();
	}

			void BuildTable() 
			{
				ClearTb();
				save->Deserialize("noty.sct");
				GetALLNoty();
				arr[0] = "Вс";
				arr[1] = "Пн";
				arr[2] = "Вт";
				arr[3] = "Ср";
				arr[4] = "Чт";
				arr[5] = "Пт";
				arr[6] = "Сб";
				timer1->Start();
				GetDateArray(DateTime::Now);
				GetTimeArray();
				CreateTable();
			}
			 String^ CurrDay(DateTime day) //Перевод дней на русский язык
			 {
				 return arr[Convert::ToInt16(day.DayOfWeek)];
			 } 

			 Label^ CreateLabel(String^ font,float size,String^ text,int height, System::Drawing::Point coord)
			 {
				 Label^ date = gcnew Label();
				 date->Text = text;
				 date->Location = System::Drawing::Point(coord.X, coord.Y);
				 date->Font = (gcnew System::Drawing::Font(font, size, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 date->Height = height;
				 return date;
			 }

			 void CreatePanel(int posY,int posX,int heigth,String^ name,bool NotEmpty,Noty^ noty) 
			 {
				 Panel^ pan = gcnew Panel();
				 pan->Location = System::Drawing::Point(posX, posY);
				 pan->Size = System::Drawing::Size(110, hBlock*heigth);
				 pan->Text = name;
				 pan->BorderStyle = BorderStyle::FixedSingle;
				 pan->Name = "0";
				 panel2->Controls->Add(pan);
				 if (NotEmpty)
				 {
					 String^ text = noty->dateStart.ToShortTimeString() + " - " + noty->dateEnd.ToShortTimeString() + "\n" + noty->Title;;
					 Label^ lb = CreateLabel(L"Microsoft Tai Le", 10.0F, text , 100, System::Drawing::Point(0, 0));
					 //lb->Enabled = false;
					 lb->Size = pan->Size;
					 lb->Name = noty->Id.ToString();
					 pan->Controls->Add(lb);
					 lb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ClickLb);
					 lb->BackColor = Color::Orange;
					 NotylbList->Add(lb);
				 }
				 else {
					 pan->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ClickPan);
				 }
				 panList->Add(pan);
			 }

			 void CreateTable() //Заполнение уведомлениями
			 {

				 array<int>^ massH = gcnew array<int>(7);
				 int x = 0;
				 int y = 0;
				 hBlock = 60;
				 for (int i = 0;i <= 23;i++)
				 {
					 for (int j = 0;j <= 6;j++)
					 {
						 if (massH[j] < 23) {
							 int height = 0;
							 x = (j + 1) * wBlock;
							 y = massH[j] * hBlock;

							 for each (Noty^ var in myNotyList)
							 {
								 if (var->dateEnd.Date == date[j].Date && var->dateStart.Hour == i)
								 {
									 int end = var->dateEnd.Hour;
									 int start = var->dateStart.Hour;
									 height = end - start;
									 massH[j] += height;
									 CreatePanel(y, x, height,j.ToString(),true,var);
									 break;
								 }
							 }
							 if (height == 0)
							 {
								 massH[j]++;
								 CreatePanel(y, x, 1, j.ToString(), false, gcnew Noty());
							 }
						 }		 
					 }
				 }
			 }

			 void ClickLb(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Label^ lb = (Label^)sender;
				 for each (Noty^ var in myNotyList)
				 {
					 if (var->Id == Convert::ToInt16(lb->Name))
					 {
						 UpdateNoty^ upNoty = gcnew UpdateNoty(var, save);

						 upNoty->ShowDialog();
						 BuildTable();
						 break;
					 }
				 }
			 }

			 void ClickPan(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {
				 Panel^ pan = (Panel^)sender;
				 DateTime dateNow = date[Convert::ToInt16(pan->Text)];
				 AddNoty^ noty = gcnew AddNoty(dateNow, save);
				 noty->ShowDialog();
				 BuildTable();
			 }

			 void GetDateArray(DateTime input) {
				 DateTime firstDay = input.AddDays(-(int)input.DayOfWeek);
				 for (int i = 0;i <= 6;i++) 
				 {
					 Label^ lab = CreateLabel(L"Microsoft Tai Le", 13.75F, firstDay.Day.ToString() + "\n" + CurrDay(firstDay), hBlock, System::Drawing::Point((50+((i+1) * wBlock)), 0));
					 panel3->Controls->Add(lab);
					 date[i] = firstDay;
					 firstDay = firstDay.AddDays(1);
					 lbList->Add(lab);
				 }
			 }

			 void GetTimeArray() 
			 {
				 for (int i = 0;i <= 23;i++) {
					String^ time = "";
					time = i < 10 ?"0" + i.ToString()+":00":i.ToString()+":00";
					Label^ lab = CreateLabel(L"Microsoft Tai Le", 10.0F, time, 20, System::Drawing::Point(0,i*60));
					panel4->Controls->Add(lab);

				 }
			 }

			 void ClearTb()
			 {
				 for each (Panel^ vars in panList)
				 {
					 delete vars;
				 }
				 for each ( Label^ var in lbList)
				 {
					 delete var;
				 }
				 lbList->Clear();
				 panList->Clear();
			 }

private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}

		 void ChageCalendar(DateTime date)
		 {
			 ClearTb();
			 GetDateArray(date);
			 CreateTable();
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)  //Прошлая неделя
{
	ChageCalendar(date[0].AddDays(-7));	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //Следующая неделя
{
	ChageCalendar(date[0].AddDays(7));
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	ChageCalendar(e->Start);
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	for each (Label^ item in NotylbList)
	{
		if (item->Text->Contains(textBox1->Text) && !String::IsNullOrWhiteSpace(textBox1->Text)) {
			item->BackColor = Color::Red;
		}
		else {
			item->BackColor = Color::Orange;
		}
	}
	
}
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
}
private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "Поиск...";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	phoneBook^ phone = gcnew phoneBook();
	phone->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	NotyClass^ noty = gcnew NotyClass();
	noty->ShowDialog();
}
};
}
