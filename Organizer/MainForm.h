#pragma once
#include "AddNoty.h"

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
		MainForm(void)
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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
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
			this->panel3->Location = System::Drawing::Point(12, 61);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(952, 60);
			this->panel3->TabIndex = 3;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			this->panel3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel3_MouseClick);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(1046, 133);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 4;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 674);
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
			this->ResumeLayout(false);

		}
#pragma endregion

	Bitmap^ curTimeImg; // фото загрузки в pictureBox
	array<String^>^ arr = gcnew array<String^>(7);
	array<DateTime>^ date = gcnew array<DateTime>(7);
	SaveInfo^ save = gcnew SaveInfo();
	List<Noty^>^ myNotyList;
	String^ UserLogin = "default";
		
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
				 for each ( Noty^ item in save->notysList)
				 {
					 if (item->Name == UserLogin) {
						 myNotyList->Add(item);
					 }
				 }				 
			 }


	public: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		save->Deserialize();
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
			 String^ CurrDay(DateTime day)
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

			 void CreatePanel(int posY,int posX,int heigth) 
			 {
				 Panel^ pan = gcnew Panel();
				 pan->Location = System::Drawing::Point(x, y);
				 pan->Size = System::Drawing::Size(110, 60);
				 pan->Text = j.ToString();
				 pan->BorderStyle = BorderStyle::FixedSingle;
				 pan->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::ClickPan);
				 panel2->Controls->Add(pan);
			 }

			 void CreateTable() //Заполнение уведомлениями
			 {
				 array<int>^ massH = gcnew array<int>(7);
				 int x = 0;
				 int y = 0;
				 for (int i = 0;i <= 23;i++)
				 {
					 y = i * 60;
					 for (int j = 0;j <= 6;j++)
					 {
						 int height = 0;
						 for each (Noty^ var in myNotyList)
						 {
							 if (var->dateEnd.Date == date[j].Date)
							 {
								 int end = var->dateEnd.Hour;
								 int start = var->dateStart.Hour;
								 height = end - start;
								 CreatePanel(mass[j],height);
								 massH[j] = height;
								 break;
							 }
						 }
						 if (height == 0) 
						 {
							 massH[j]++;
							 CreatePanel(mass[j], 0);
						 }
					 }
				 }
			 }

			 void ClickPan(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {
				 Panel^ pan = (Panel^)sender;
				 DateTime dateNow = date[Convert::ToInt16(pan->Text)];
				 AddNoty^ noty = gcnew AddNoty(dateNow,save);
				 noty->ShowDialog();
			 }

			 void GetDateArray(DateTime input) {
				 DateTime firstDay = DateTime::Now.AddDays(-(int)DateTime::Now.DayOfWeek);
				 for (int i = 0;i <= 6;i++) 
				 {
					 Label^ lab = CreateLabel(L"Microsoft Tai Le", 13.75F, firstDay.Day.ToString() + "\n" + CurrDay(firstDay), 50, System::Drawing::Point((50+((i+1) * 100)), 0));
					 panel3->Controls->Add(lab);
					 date[i] = firstDay;
					 firstDay = firstDay.AddDays(1);
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

private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
};
}
