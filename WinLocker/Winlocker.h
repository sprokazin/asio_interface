#pragma once
#include <vector>
#include <string>
#include <boost/asio/serial_port.hpp>
#include <boost/asio/io_service.hpp>

std::vector<float> degrees(7);
std::vector<std::string> str{ "0.000000;","0.000000;","0.000000;","0.000000;","0.000000;","0.000000;","0.000000;" };

namespace WinLocker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Winlocker
	/// </summary>
	public ref class Winlocker : public System::Windows::Forms::Form
	{
	public:
		Winlocker(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Winlocker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(50, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сервопривод 1\r\n";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(368, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Winlocker::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(412, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Winlocker::button2_Click);
			//
			// button3
			//
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(368, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 37);
			this->button3->TabIndex = 4;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Winlocker::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(412, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 36);
			this->button4->TabIndex = 5;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Winlocker::button4_Click);
			// 

			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoEllipsis = true;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(50, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Сервопривод 2";
			//
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(368, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(38, 37);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Winlocker::button5_Click); 
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(412, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(38, 36);
			this->button6->TabIndex = 8;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Winlocker::button6_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoEllipsis = true;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(50, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Сервопривод 3";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(412, 200);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(38, 36);
			this->button8->TabIndex = 11;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Winlocker::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(368, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(38, 37);
			this->button7->TabIndex = 10;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Winlocker::button7_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoEllipsis = true;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(50, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(251, 38);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Сервопривод 4";
		 //   this->label4->Click += gcnew System::EventHandler(this, &Winlocker::label4_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(412, 250);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(38, 36);
			this->button10->TabIndex = 14;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Winlocker::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(368, 250);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(38, 37);
			this->button9->TabIndex = 13;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Winlocker::button9_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoEllipsis = true;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(50, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(251, 38);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Сервопривод 5";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(412, 300);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(38, 36);
			this->button12->TabIndex = 17;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Winlocker::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(368, 300);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 37);
			this->button11->TabIndex = 16;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Winlocker::button11_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoEllipsis = true;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(50, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(251, 38);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Сервопривод 6";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(412, 350);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(38, 36);
			this->button14->TabIndex = 20;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Winlocker::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(368, 350);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(38, 36);
			this->button13->TabIndex = 19;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Winlocker::button13_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoEllipsis = true;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(50, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(251, 38);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Сервопривод 7";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(483, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 20);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(483, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(483, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 20);
			this->textBox3->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(483, 209);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(483, 259);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 20);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(483, 309);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(112, 20);
			this->textBox6->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(483, 359);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(112, 20);
			this->textBox7->TabIndex = 27;
			// 
			// Winlocker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(667, 450);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"Winlocker";
			this->Text = L"Winlocker";
			this->Load += gcnew System::EventHandler(this, &Winlocker::Winlocker_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool ProtectDigit(System::Windows::Forms::TextBox^ textBox) {
			if (textBox->Text == "") { return false; }
			for (int i = 0; i < textBox->Text->Length; i++) {
				if ((textBox->Text[i] >= '0') && (textBox->Text[i] <= '9') || (textBox->Text[i] == ',')) {}
				else { return false; }
			}
			return true;
		}

		void cumPortPushBek() {
			boost::asio::io_context ioservice;
			boost::asio::serial_port serPort(ioservice, "COM1");
			serPort.set_option(boost::asio::serial_port_base::baud_rate(115200));
			std::string s;
			for (const auto& piece : str) s += piece;
			serPort.write_some(boost::asio::buffer(s));
		}

	private: System::Void Winlocker_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox1)) {
			double a = System::Convert::ToDouble(textBox1->Text);
			degrees[0] += static_cast<float>(a);
			if (degrees[0] >= 270) {
				degrees[0] = 270;
			}
			str[0] = std::to_string(degrees[0]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox1->Text = L"";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox1)) {
			double a = System::Convert::ToDouble(textBox1->Text);
			degrees[0] -= static_cast<float>(a);
			if (degrees[0] < 0) {
				degrees[0] = 0 ;
			}
			str[0] = std::to_string(degrees[0]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox1->Text = L"";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox2)) {
			double a = System::Convert::ToDouble(textBox2->Text);
			degrees[1] += static_cast<float>(a);
			if (degrees[1] >= 270) {
				degrees[1] = 270;
			}
			str[1] = std::to_string(degrees[1]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox2->Text = L"";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox2)) {
			double a = System::Convert::ToDouble(textBox2->Text);
			degrees[1] -= static_cast<float>(a);
			if (degrees[1] < 0) {
				degrees[1] = 0;
			}
			str[1] = std::to_string(degrees[1]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox2->Text = L"";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox3)) {
			double a = System::Convert::ToDouble(textBox3->Text);
			degrees[2] += static_cast<float>(a);
			if (degrees[2] >= 270) {
				degrees[2] = 270;
			}
			str[2] = std::to_string(degrees[2]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox3->Text = L"";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox3)) {
			double a = System::Convert::ToDouble(textBox3->Text);
			degrees[2] -= static_cast<float>(a);
			if (degrees[2] < 0) {
				degrees[2] = 0;
			}
			str[2] = std::to_string(degrees[2]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox3->Text = L"";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox4)) {
			double a = System::Convert::ToDouble(textBox4->Text);
			degrees[3] += static_cast<float>(a);
			if (degrees[3] >= 270) {
				degrees[3] = 270;
			}
			str[3] = std::to_string(degrees[3]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox4->Text = L"";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox4)) {
			double a = System::Convert::ToDouble(textBox4->Text);
			degrees[3] -= static_cast<float>(a);
			if (degrees[3] < 0) {
				degrees[3] = 0;
			}
			str[3] = std::to_string(degrees[3]) + ';';
			cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox4->Text = L"";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox5)) {
		double a = System::Convert::ToDouble(textBox5->Text);
		degrees[4] += static_cast<float>(a);
		if (degrees[4] >= 270) {
			degrees[4] = 270;
		}
		str[4] = std::to_string(degrees[4]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox5->Text = L"";
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox5)) {
		double a = System::Convert::ToDouble(textBox5->Text);
		degrees[4] -= static_cast<float>(a);
		if (degrees[4] < 0) {
			degrees[4] = 0;
		}
		str[4] = std::to_string(degrees[4]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox5->Text = L"";
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox6)) {
		double a = System::Convert::ToDouble(textBox6->Text);
		degrees[5] += static_cast<float>(a);
		if (degrees[5] >= 270) {
			degrees[5] = 270;
		}
		str[5] = std::to_string(degrees[5]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox6->Text = L"";
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox6)) {
		double a = System::Convert::ToDouble(textBox6->Text);
		degrees[5] -= static_cast<float>(a);
		if (degrees[5] < 0) {
			degrees[5] = 0;
		}
		str[5] = std::to_string(degrees[5]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox6->Text = L"";
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox7)) {
			double a = System::Convert::ToDouble(textBox7->Text);
			degrees[6] += static_cast<float>(a);
		if (degrees[6] >= 270) {
			degrees[6] = 270;
		}
		str[6] = std::to_string(degrees[6]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox7->Text = L"";
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProtectDigit(textBox7)) {
			double a = System::Convert::ToDouble(textBox7->Text);
			degrees[6] -= static_cast<float>(a);
		if (degrees[6] < 0) {
			degrees[6] = 0;
		}
		str[6] = std::to_string(degrees[6]) + ';';
		cumPortPushBek();
		}
		else {
			MessageBox::Show("Ошибка ввода");
			textBox7->Text = L"";
		}
	}
};
}
