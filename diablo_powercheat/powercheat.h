#pragma once
#include "powerapi.h"

INT iNumber;

namespace diablo_powercheat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class powercheat : public System::Windows::Forms::Form
	{
	public:
		powercheat(void)
		{
			InitializeComponent();
		}

	protected:
		~powercheat()
		{
			if (components)
			{
				delete components;
			}
		}

	System::Windows::Forms::Button^  button1;
	System::Windows::Forms::Button^  button2;
	System::Windows::Forms::Button^  button3;
	System::Windows::Forms::TextBox^  textBox1;
	System::Windows::Forms::TextBox^  textBox2;
	System::Windows::Forms::TextBox^  textBox3;
	System::Windows::Forms::TextBox^  textBox4;
	System::Windows::Forms::Button^  button4;
	System::Windows::Forms::TextBox^  textBox5;
	System::Windows::Forms::Button^  button5;
	System::Windows::Forms::TextBox^  textBox6;
	System::Windows::Forms::Button^  button6;
	System::Windows::Forms::TextBox^  textBox7;
	System::Windows::Forms::Button^  button7;
	System::Windows::Forms::TextBox^  textBox8;
	System::Windows::Forms::Button^  button8;
	System::Windows::Forms::TextBox^  textBox9;
	System::Windows::Forms::Button^  button9;
	System::Windows::Forms::TextBox^  textBox10;
	System::Windows::Forms::Button^  button10;
	System::Windows::Forms::TextBox^  textBox11;
	System::Windows::Forms::Button^  button11;
	System::Windows::Forms::PictureBox^  pictureBox1;
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(powercheat::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Set mana";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &powercheat::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Set health";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &powercheat::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Find Diablo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &powercheat::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"DIABLO";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"100";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"100";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(179, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"500";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Set money";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &powercheat::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"10000";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Set exp";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &powercheat::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(93, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(179, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"100";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Set strength";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &powercheat::button6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(93, 168);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(179, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"100";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 166);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Set magic";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &powercheat::button7_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(93, 194);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(179, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->Text = L"100";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Set dexterity";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &powercheat::button8_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(93, 220);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(179, 20);
			this->textBox9->TabIndex = 17;
			this->textBox9->Text = L"100";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Set vitality";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &powercheat::button9_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(93, 246);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(179, 20);
			this->textBox10->TabIndex = 19;
			this->textBox10->Text = L"50";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Set bd. armr.";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &powercheat::button10_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(93, 272);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(179, 20);
			this->textBox11->TabIndex = 21;
			this->textBox11->Text = L"100";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Set armr. dur";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &powercheat::button11_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 298);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 64);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &powercheat::pictureBox1_Click);
			// 
			// powercheat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 367);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = "powercheat";
			this->Text = "Diablo Powercheat";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void button3_Click( Object^ sender, EventArgs^ e ) {
				 if( PowerApi::FindDiablo( "DIABLO" ) )
					 MessageBoxA( NULL, "Diablo found!", "Powercheat", MB_ICONINFORMATION );
				 else
					 MessageBoxA( NULL, "Can't find Diablo!\n\tMake sure you're using the valid window title", "Powercheat", MB_ICONERROR );
		}

	void button1_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox2->Text, iNumber) || iNumber < 0 || iNumber > 1000 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-1000", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( PowerApi::WriteMemory( 0x006865F4, (iNumber*44)+80 ) )
						 MessageBoxA( NULL, "Mana is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865F4!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button2_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox3->Text, iNumber) || iNumber < 0 || iNumber > 1000 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-1000", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( PowerApi::WriteMemory( 0x006865E0, (iNumber*19)+20 ) )
						 MessageBoxA( NULL, "Health is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865E0!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button4_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox4->Text, iNumber) || iNumber < 0 || iNumber > 5000 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-5000", "Powercheat", MB_ICONERROR );
				 } //diablo max money amount is 5000
				 else{
					 if( PowerApi::WriteMemory( 0x00687298, iNumber ) )
						 MessageBoxA( NULL, "Money is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x00687298!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button5_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox5->Text, iNumber) || iNumber < 0 || iNumber > INT_MAX ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-2147483647", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( PowerApi::WriteMemory( 0x00686604, iNumber ) )
						 MessageBoxA( NULL, "Experience is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x00686604!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button6_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox6->Text, iNumber) || iNumber < 0 || iNumber > 750 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-750", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( ( PowerApi::WriteMemory(0x006865AC, iNumber) && PowerApi::WriteMemory(0x006865B0, iNumber) ) )
						 MessageBoxA( NULL, "Strength is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865AC & 0x006865B0!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button7_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox7->Text, iNumber) || iNumber < 0 || iNumber > 750 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-750", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( ( PowerApi::WriteMemory(0x006865B4, iNumber) && PowerApi::WriteMemory(0x006865B8, iNumber) ) )
						 MessageBoxA( NULL, "Strength is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865B4 & 0x006865B8!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button8_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox8->Text, iNumber) || iNumber < 0 || iNumber > 750 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-750", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( ( PowerApi::WriteMemory(0x006865BC, iNumber) && PowerApi::WriteMemory(0x006865C0, iNumber) ) )
						 MessageBoxA( NULL, "Strength is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865BC & 0x006865C0!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button9_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox9->Text, iNumber) || iNumber < 0 || iNumber > 750 ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-750", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( ( PowerApi::WriteMemory(0x006865C4, iNumber) && PowerApi::WriteMemory(0x006865C8, iNumber) ) )
						 MessageBoxA( NULL, "Strength is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x006865C4 & 0x006865C8!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button10_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox10->Text, iNumber) || iNumber < 0 || iNumber > INT_MAX ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-2147483647", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( PowerApi::WriteMemory( 0x00687138, iNumber ) )
						 MessageBoxA( NULL, "Body armor is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x00687138!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void button11_Click( Object^ sender, EventArgs^ e ) {
				 if( !INT::TryParse(textBox11->Text, iNumber) || iNumber < 0 || iNumber > INT_MAX ) {
					 MessageBoxA( NULL, "The number you entered is either too big or too small!\n\tThe number should be in range 0-2147483647", "Powercheat", MB_ICONERROR );
				 }
				 else{
					 if( PowerApi::WriteMemory( 0x00687150, iNumber ) )
						 MessageBoxA( NULL, "Body armor durability is set to the specified value!", "Powercheat", MB_ICONINFORMATION );
					 else
						 MessageBoxA( NULL, "Can't access/write 0x00687150!\n\tMake sure you're using the proper Diablo version!", "Powercheat", MB_ICONERROR );
				 }
		}
	void pictureBox1_Click( Object^ sender, EventArgs^ e ) {
				MessageBoxA( NULL, "A trainer for Diablo 1:\n\tDiablo Powercheat\nWritten in C++ By RezWaki\nVKontakte: vk.com/glow_05\nSteam: steamcommunity.com/id/rezwaki\nDiscord: rezzy#3435", "Powercheat", MB_ICONINFORMATION );
		}
};
}