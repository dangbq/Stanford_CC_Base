#pragma once
#include <stdlib.h>     /* srand, rand */
//#include <time.h> 
//#include <string>  
namespace Stanford_WindowsForm_2013 {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblPhepTinh;
	private: System::Windows::Forms::Button^  btnSai;
	private: System::Windows::Forms::Button^  btnDung;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:
		int a = 0, b = 0, c = 0, dem = 0, diemso = 0;
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  lblDiemSo;
	private: System::Windows::Forms::TextBox^  textBox1;

			 bool gameOver = false;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblPhepTinh = (gcnew System::Windows::Forms::Label());
			this->btnSai = (gcnew System::Windows::Forms::Button());
			this->btnDung = (gcnew System::Windows::Forms::Button());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblDiemSo = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			// 
			// lblPhepTinh
			// 
			this->lblPhepTinh->AutoSize = true;
			this->lblPhepTinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhepTinh->Location = System::Drawing::Point(114, 104);
			this->lblPhepTinh->Name = L"lblPhepTinh";
			this->lblPhepTinh->Size = System::Drawing::Size(621, 163);
			this->lblPhepTinh->TabIndex = 1;
			this->lblPhepTinh->Text = L"a + b = c";
			// 
			// btnSai
			// 
			this->btnSai->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSai->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSai->Location = System::Drawing::Point(85, 306);
			this->btnSai->Name = L"btnSai";
			this->btnSai->Size = System::Drawing::Size(187, 70);
			this->btnSai->TabIndex = 2;
			this->btnSai->Text = L"SAI";
			this->btnSai->UseVisualStyleBackColor = false;
			this->btnSai->Click += gcnew System::EventHandler(this, &MyForm::btnSai_Click);
			// 
			// btnDung
			// 
			this->btnDung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnDung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDung->Location = System::Drawing::Point(560, 306);
			this->btnDung->Name = L"btnDung";
			this->btnDung->Size = System::Drawing::Size(187, 70);
			this->btnDung->TabIndex = 2;
			this->btnDung->Text = L"ĐÚNG";
			this->btnDung->UseVisualStyleBackColor = false;
			this->btnDung->Click += gcnew System::EventHandler(this, &MyForm::btnDung_Click);
			// 
			// btnPlay
			// 
			this->btnPlay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlay->Location = System::Drawing::Point(270, 420);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(290, 80);
			this->btnPlay->TabIndex = 3;
			this->btnPlay->Text = L"PLAY";
			this->btnPlay->UseVisualStyleBackColor = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MyForm::btnPlay_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(85, 67);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(662, 23);
			this->progressBar1->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(614, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Điểm số:";
			// 
			// lblDiemSo
			// 
			this->lblDiemSo->AutoSize = true;
			this->lblDiemSo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDiemSo->ForeColor = System::Drawing::Color::Blue;
			this->lblDiemSo->Location = System::Drawing::Point(728, 9);
			this->lblDiemSo->Name = L"lblDiemSo";
			this->lblDiemSo->Size = System::Drawing::Size(32, 32);
			this->lblDiemSo->TabIndex = 6;
			this->lblDiemSo->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(503, 26);
			this->textBox1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 525);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblDiemSo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->btnDung);
			this->Controls->Add(this->btnSai);
			this->Controls->Add(this->lblPhepTinh);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GAME EM VUI HỌC TOÁN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

				 textBox1->Text = L"Xin chào các bạn ! Tôi là Nguyễn Hải Phòng";
	}
	private: System::Void btnSai_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (gameOver)
				 {
					 timer1->Enabled = false;

					 return;
				 }
				 //Nếu người dùng chọn đúng
				 if ((a + b) != c)
				 {
					 diemso++;

					 //Hiển thị điểm
					 lblDiemSo->Text = diemso.ToString();

					 //Sinh biểu thức mới
					 HamSinhBieuThuc();
				 }
				 else
				 {
					 gameOver = true;

					 MessageBox::Show(L"Bạn đã thua cuộc");
				 }
	}
	private: System::Void btnDung_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (gameOver)
				 {
					 timer1->Enabled = false;

					 return;
				 }

				 //Nếu người dùng chọn đúng
				 if ((a + b) == c)
				 {
					 diemso++;

					 //Hiển thị điểm
					 lblDiemSo->Text = diemso.ToString();

					 //Sinh biểu thức mới
					 HamSinhBieuThuc();
				 }
				 else
				 {
					 gameOver = true;

					 MessageBox::Show(L"Bạn đã thua cuộc");
				 }
	}
	private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {

				 timer1->Interval = 100;
				 timer1->Enabled = true;

				 progressBar1->Minimum = 0;
				 progressBar1->Maximum = 100;
				 progressBar1->Value = dem;

				 HamSinhBieuThuc();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

				 if (!gameOver){
					 dem++;

					 if (dem < 100){
						 progressBar1->Value = dem;
					 }
					 else
					 {
						 gameOver = true;
						 MessageBox::Show(L"Bạn đã thua cuộc");
					 }
				 }

	}

	private: System::Void HamSinhBieuThuc()
	{
				 progressBar1->Value = 0;

				 a = rand() % 10;

				 b = rand() % 10;

				 c = rand() % 20;

				 if (c % 2 == 0)
				 {
					 c = a + b;
				 }

				 lblPhepTinh->Text = a + " + " + b + " = " + c;
	}
	};
}
