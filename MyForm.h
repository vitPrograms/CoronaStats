#pragma once
#include "data.h"
#include <string>
#include <windows.h>
#pragma comment(lib, "user32.lib")

namespace COVID {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ casesRes;
	private: System::Windows::Forms::Label^ deathRes;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ testRes;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ recoverRes;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ casesPlus;
	private: System::Windows::Forms::Label^ deathPlus;


	private: System::Windows::Forms::PictureBox^ refresh;
	private: System::Windows::Forms::ComboBox^ city;
	private: System::Windows::Forms::Label^ percentLocal;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;














	protected:

	protected:


	protected:


	protected:

	protected:



	protected:

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
				//In 1600x1200 screen
		int iWidth = GetSystemMetrics(SM_CXSCREEN); // 1600
		int iHeight = GetSystemMetrics(SM_CYSCREEN); // 1200
		int posX = GetSystemMetrics(SM_CXSCREEN) * 0.75; // 1200
		int posY = GetSystemMetrics(SM_CYSCREEN) * 0.0416666666666667; // 50
		int windowWidth = GetSystemMetrics(SM_CXSCREEN) * 0.25; // 400
		int windowHeight = GetSystemMetrics(SM_CYSCREEN) * 0.2083333333333333; // 250
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->casesRes = (gcnew System::Windows::Forms::Label());
			this->deathRes = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->testRes = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->recoverRes = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->casesPlus = (gcnew System::Windows::Forms::Label());
			this->deathPlus = (gcnew System::Windows::Forms::Label());
			this->refresh = (gcnew System::Windows::Forms::PictureBox());
			this->city = (gcnew System::Windows::Forms::ComboBox());
			this->percentLocal = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->CausesValidation = false;
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(185)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(windowWidth * 0.045, windowHeight);
			this->button1->TabIndex = 0;
			this->button1->Text = L">";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(windowWidth * 0.0975, windowHeight * 0.12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(windowWidth * 0.09, windowHeight * 0.144);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(windowWidth * 0.57, windowHeight * 0.12);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(windowWidth * 0.09, windowHeight * 0.144);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, windowHeight * 0.932);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(1);
			this->label1->Size = System::Drawing::Size(windowWidth * 0.32, windowHeight * 0.068);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Кількість захворівших";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(windowWidth * 0.1, windowHeight * 0.396);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(windowWidth * 0.09, windowHeight * 0.144);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox3_MouseEnter);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox3_MouseLeave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(windowWidth * 0.57, windowHeight * 0.68);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(windowWidth * 0.09, windowHeight * 0.144);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox4_MouseEnter);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox4_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(windowWidth * 0.19, windowHeight * 0.196);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(windowWidth * 0.24, windowHeight * 0.068);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Захворівших";
			// 
			// casesRes
			// 
			this->casesRes->AutoSize = true;
			this->casesRes->BackColor = System::Drawing::Color::Transparent;
			this->casesRes->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->casesRes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->casesRes->Location = System::Drawing::Point(windowWidth * 0.1875, windowHeight * 0.12);
			this->casesRes->Margin = System::Windows::Forms::Padding(0);
			this->casesRes->Name = L"casesRes";
			this->casesRes->Size = System::Drawing::Size(windowWidth * 0.0475, windowHeight * 0.076);
			this->casesRes->TabIndex = 7;
			this->casesRes->Text = L"0";
			// 
			// deathRes
			// 
			this->deathRes->AutoSize = true;
			this->deathRes->BackColor = System::Drawing::Color::Transparent;
			this->deathRes->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->deathRes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->deathRes->Location = System::Drawing::Point(windowWidth * 0.6575, windowHeight * 0.12);
			this->deathRes->Margin = System::Windows::Forms::Padding(0);
			this->deathRes->Name = L"deathRes";
			this->deathRes->Size = System::Drawing::Size(windowWidth * 0.0475, windowHeight * 0.076);
			this->deathRes->TabIndex = 9;
			this->deathRes->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(windowWidth * 0.66, windowHeight * 0.196);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(windowWidth * 0.175, windowHeight * 0.068);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Смертей";
			// 
			// testRes
			// 
			this->testRes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->testRes->AutoSize = true;
			this->testRes->BackColor = System::Drawing::Color::Transparent;
			this->testRes->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->testRes->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->testRes->Location = System::Drawing::Point(windowWidth * 0.655, windowHeight * 0.68);
			this->testRes->Margin = System::Windows::Forms::Padding(0);
			this->testRes->Name = L"testRes";
			this->testRes->Size = System::Drawing::Size(windowWidth * 0.0475, windowHeight * 0.076);
			this->testRes->TabIndex = 11;
			this->testRes->Text = L"0";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(windowWidth * 0.66, windowHeight * 0.756);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(windowWidth * 0.33, windowHeight * 0.068);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Відносно України";
			// 
			// recoverRes
			// 
			this->recoverRes->AutoSize = true;
			this->recoverRes->BackColor = System::Drawing::Color::Transparent;
			this->recoverRes->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->recoverRes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->recoverRes->Location = System::Drawing::Point(windowWidth * 0.1875, windowHeight * 0.396);
			this->recoverRes->Margin = System::Windows::Forms::Padding(0);
			this->recoverRes->Name = L"recoverRes";
			this->recoverRes->Size = System::Drawing::Size(windowWidth * 0.0475, windowHeight * 0.076);
			this->recoverRes->TabIndex = 13;
			this->recoverRes->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(windowWidth * 0.19, windowHeight * 0.472);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(windowWidth * 0.2575, windowHeight * 0.068);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Вилікувались";
			// 
			// casesPlus
			// 
			this->casesPlus->AutoSize = true;
			this->casesPlus->BackColor = System::Drawing::Color::Transparent;
			this->casesPlus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->casesPlus->Location = System::Drawing::Point(windowWidth * 0.1975, windowHeight * 0.28);
			this->casesPlus->Name = L"casesPlus";
			this->casesPlus->Size = System::Drawing::Size(windowWidth * 0.055, windowHeight * 0.056);
			this->casesPlus->TabIndex = 14;
			this->casesPlus->Text = L"+0";
			// 
			// deathPlus
			// 
			this->deathPlus->AutoSize = true;
			this->deathPlus->BackColor = System::Drawing::Color::Transparent;
			this->deathPlus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->deathPlus->Location = System::Drawing::Point(windowWidth * 0.66, windowHeight * 0.28);
			this->deathPlus->Name = L"deathPlus";
			this->deathPlus->Size = System::Drawing::Size(windowWidth * 0.055, windowHeight * 0.056);
			this->deathPlus->TabIndex = 15;
			this->deathPlus->Text = L"+0";
			// 
			// refresh
			// 
			this->refresh->BackColor = System::Drawing::Color::Transparent;
			this->refresh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.BackgroundImage")));
			this->refresh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->refresh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->refresh->Location = System::Drawing::Point(windowWidth * 0.8575, windowHeight * 0.012);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(windowWidth * 0.06, windowHeight * 0.096);
			this->refresh->TabIndex = 20;
			this->refresh->TabStop = false;
			this->refresh->WaitOnLoad = true;
			this->refresh->Click += gcnew System::EventHandler(this, &MyForm::refresh_Click);
			// 
			// city
			// 
			this->city->BackColor = System::Drawing::Color::Black;
			this->city->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->city->ForeColor = System::Drawing::Color::Aqua;
			this->city->FormattingEnabled = true;
			this->city->Items->AddRange(gcnew cli::array< System::Object^  >(25) { L"Україна", L"Івано-Франківськ" ,
				L"Київ", L"Львів", L"Дніпропетровськ", L"Волинь", L"Вінниця", L"Донецьк", L"Житомир", L"Закарпаття",
				L"Запоріжжя", L"Кіровоград", L"Луганськ", L"Миколаїв", L"Одеса", L"Полтава", L"Рівне", L"Суми", L"Тернопіль",
				L"Харків", L"Херсон", L"Хмельницьк", L"Черкаси", L"Чернівці", L"Чернігів"
			});
			this->city->Location = System::Drawing::Point(windowWidth * 0.57, windowHeight * 0.452);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(windowWidth * 0.3, windowHeight * 0.088);
			this->city->TabIndex = 21;
			this->city->Text = L"Україна";
			this->city->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::city_SelectedIndexChanged);
			// 
			// percentLocal
			// 
			this->percentLocal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->percentLocal->AutoSize = true;
			this->percentLocal->BackColor = System::Drawing::Color::Transparent;
			this->percentLocal->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->percentLocal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->percentLocal->Location = System::Drawing::Point(windowWidth * 0.1825, windowHeight * 0.68);
			this->percentLocal->Margin = System::Windows::Forms::Padding(0);
			this->percentLocal->Name = L"percentLocal";
			this->percentLocal->Size = System::Drawing::Size(windowWidth * 0.0475, windowHeight * 0.076);
			this->percentLocal->TabIndex = 24;
			this->percentLocal->Text = L"0";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(windowWidth * 0.185, windowHeight * 0.756);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(windowWidth * 0.3725, windowHeight * 0.068);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Відносно населення";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(windowWidth * 0.0975, windowHeight * 0.68);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(windowWidth * 0.09, windowHeight * 0.144);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox5_MouseEnter);
			this->pictureBox5->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox5_MouseLeave);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(windowWidth * 0.93, windowHeight * 0.012);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(windowWidth * 0.06, windowHeight * 0.096);
			this->pictureBox6->TabIndex = 25;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->WaitOnLoad = true;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(windowWidth, windowHeight);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->percentLocal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->city);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->deathPlus);
			this->Controls->Add(this->casesPlus);
			this->Controls->Add(this->recoverRes);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->testRes);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->deathRes);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->casesRes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Location = System::Drawing::Point(posX, posY);
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Opacity = 0.85;
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		bool hidden = false;
		int cityFinal = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int x;
		if (!hidden) {
			x = posX;
			while (Location != System::Drawing::Point(iWidth - button1->Width, posY)) {
				Location = System::Drawing::Point(x, posY);
				x++;
			}
			Opacity = 0.35;
			button1->FlatAppearance->MouseOverBackColor = Color().DarkGray;
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			pictureBox3->Visible = false;
			pictureBox4->Visible = false;
			button1->Text = "<";
			hidden = true;
		}
		else if (hidden) {
			pictureBox1->Visible = true;
			pictureBox2->Visible = true;
			pictureBox3->Visible = true;
			pictureBox4->Visible = true;
			Opacity = 0.85;
			button1->FlatAppearance->MouseOverBackColor = Color().DimGray;
			x = iWidth - button1->Width;
			while (Location != System::Drawing::Point(posX, posY)) {
				Location = System::Drawing::Point(x, posY);
				x--;
			}
			button1->Text = ">";
			hidden = false;
		}
	}
	private: System::Void pictureBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Кількість захворівших";
		label1->Visible = true;
	}
	private: System::Void pictureBox2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Кількість смертей від COVID-19";
		label1->Visible = true;
	}
	private: System::Void pictureBox3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Кількість виздоровівших";
		label1->Visible = true;
	}
	private: System::Void pictureBox4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Відсоток захворівших відносно України";
		label1->Visible = true;
	}
	private: System::Void pictureBox5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Відсоток захворівших відносно населення";
		label1->Visible = true;
	}

	private: System::Void pictureBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
	private: System::Void pictureBox2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
	private: System::Void pictureBox3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
	private: System::Void pictureBox4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
	private: System::Void pictureBox5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		refresh->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		switch (cityFinal) {
		case 0: setData("UA");
			break;
		case 1: setData("IF");
			break;
		case 2: setData("KV");
			break;
		case 3: setData("LV");
			break;
		case 4: setData("DP");
			break;
		case 5: setData("VL");
			break;
		case 6: setData("VN");
			break;
		case 7: setData("DN");
			break;
		case 8: setData("JT");
			break;
		case 9: setData("ZP");
			break;
		case 10: setData("ZR");
			break;
		case 11: setData("KR");
			break;
		case 12: setData("LG");
			break;
		case 13: setData("MK");
			break;
		case 14: setData("OD");
			break;
		case 15: setData("PT");
			break;
		case 16: setData("RN");
			break;
		case 17: setData("SM");
			break;
		case 18: setData("TP");
			break;
		case 19: setData("HR");
			break;
		case 20: setData("HS");
			break;
		case 21: setData("HM");
			break;
		case 22: setData("CH");
			break;
		case 23: setData("CN");
			break;
		case 24: setData("CG");
			break;
		}
		casesRes->Text = gcnew System::String((to_string(getCasses())).c_str());
		casesPlus->Text = "+" + gcnew System::String((to_string(getCassesPlus())).c_str());
		deathRes->Text = gcnew System::String((to_string(getDeath())).c_str());
		deathPlus->Text = "+" + gcnew System::String((to_string(getDeathPlus())).c_str());
		recoverRes->Text = gcnew System::String((to_string(getRecover())).c_str());
		testRes->Text = gcnew System::String((to_string(getPercent())).c_str()) + "%";
		percentLocal->Text = gcnew System::String((to_string(getPercentOfLocal())).c_str()) + "%";
		refresh->Cursor = System::Windows::Forms::Cursors::Hand;
	}
	private: System::Void city_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (city->SelectedIndex) {
		case 0: cityFinal = 0;
			break;
		case 1: cityFinal = 1;
			break;
		case 2: cityFinal = 2;
			break;
		case 3: cityFinal = 3;
			break;
		case 4: cityFinal = 4;
			break;
		case 5: cityFinal = 5;
			break;
		case 6: cityFinal = 6;
			break;
		case 7: cityFinal = 7;
			break;
		case 8: cityFinal = 8;
			break;
		case 9: cityFinal = 9;
			break;
		case 10: cityFinal = 10;
			break;
		case 11: cityFinal = 11;
			break;
		case 12: cityFinal = 12;
			break;
		case 13: cityFinal = 13;
			break;
		case 14: cityFinal = 14;
			break;
		case 15: cityFinal = 15;
			break;
		case 16: cityFinal = 16;
			break;
		case 17: cityFinal = 17;
			break;
		case 18: cityFinal = 18;
			break;
		case 19: cityFinal = 19;
			break;
		case 20: cityFinal = 20;
			break;
		case 21: cityFinal = 21;
			break;
		case 22: cityFinal = 22;
			break;
		case 23: cityFinal = 23;
			break;
		case 24: cityFinal = 24;
			break;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		setData("UA");
		casesRes->Text = gcnew System::String((to_string(getCasses())).c_str());
		casesPlus->Text = "+" + gcnew System::String((to_string(getCassesPlus())).c_str());
		deathRes->Text = gcnew System::String((to_string(getDeath())).c_str());
		deathPlus->Text = "+" + gcnew System::String((to_string(getDeathPlus())).c_str());
		recoverRes->Text = gcnew System::String((to_string(getRecover())).c_str());
		percentLocal->Text = gcnew System::String((to_string(getPercentOfLocal())).c_str()) + "%";
		testRes->Text = gcnew System::String((to_string(getPercent())).c_str()) + "%";
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		int x = posX;
		while (Location != System::Drawing::Point(iWidth, posY)) {
			Location = System::Drawing::Point(x, posY);
			x++;
		}
		Close();
	}
	};
}


