#pragma once

namespace Totalcontrol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ êîðèñòóâà÷³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñêóï÷åííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBoxUsers;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridViewUsers;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAddUser;
	private: System::Windows::Forms::ComboBox^ comboBoxIDPlaces;


	private: System::Windows::Forms::TextBox^ textBoxEndTimeMin;

	private: System::Windows::Forms::TextBox^ textBoxEndTimeH;
	private: System::Windows::Forms::TextBox^ textBoxStartTimeMin;





	private: System::Windows::Forms::TextBox^ textBoxStartTimeH;
	private: System::Windows::Forms::TextBox^ textBoxDateMonth;
	private: System::Windows::Forms::TextBox^ textBoxDateYear;



	private: System::Windows::Forms::TextBox^ textBoxDateDay;




	private: System::Windows::Forms::NumericUpDown^ numericUpDownIDUser;

	private: System::Windows::Forms::ToolStripMenuItem^ çàâàíòàæèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåðåãòèToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::GroupBox^ groupBoxClusters;






	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::DataGridView^ dataGridViewUsers1;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::ComboBox^ comboBoxIDPlaces1;





	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonCalculate;

	private: System::Windows::Forms::TextBox^ textBoxMin;

	private: System::Windows::Forms::TextBox^ textBoxMax;



	private: System::Windows::Forms::TextBox^ textBoxEndTimeH1;





	private: System::Windows::Forms::TextBox^ textBoxStartTimeH1;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::NumericUpDown^ numericUpDownIDUserForDel;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ buttonDeleteUser;
private: System::Windows::Forms::TextBox^ textBoxDateMonth1;
private: System::Windows::Forms::TextBox^ textBoxDateYaer1;


private: System::Windows::Forms::TextBox^ textBoxDateDay1;

private: System::Windows::Forms::Label^ label13;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->êîðèñòóâà÷³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàâàíòàæèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåðåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñêóï÷åííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxUsers = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownIDUserForDel = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonDeleteUser = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddUser = (gcnew System::Windows::Forms::Button());
			this->comboBoxIDPlaces = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxEndTimeMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEndTimeH = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStartTimeMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStartTimeH = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateDay = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownIDUser = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewUsers = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBoxClusters = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDateMonth1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateYaer1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateDay1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBoxIDPlaces1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->textBoxMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEndTimeH1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStartTimeH1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewUsers1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->groupBoxUsers->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIDUserForDel))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIDUser))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers))->BeginInit();
			this->groupBoxClusters->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers1))->BeginInit();
			this->SuspendLayout();
			
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êîðèñòóâà÷³ToolStripMenuItem,
					this->ñêóï÷åííÿToolStripMenuItem, this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1646, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			
			this->êîðèñòóâà÷³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çàâàíòàæèòèToolStripMenuItem,
					this->çáåðåãòèToolStripMenuItem
			});
			this->êîðèñòóâà÷³ToolStripMenuItem->Name = L"êîðèñòóâà÷³ToolStripMenuItem";
			this->êîðèñòóâà÷³ToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->êîðèñòóâà÷³ToolStripMenuItem->Text = L"Êîðèñòóâà÷³";
			this->êîðèñòóâà÷³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîðèñòóâà÷³ToolStripMenuItem_Click);
			 
			this->çàâàíòàæèòèToolStripMenuItem->Name = L"çàâàíòàæèòèToolStripMenuItem";
			this->çàâàíòàæèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çàâàíòàæèòèToolStripMenuItem->Text = L"Çàâàíòàæèòè";
			this->çàâàíòàæèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàâàíòàæèòèToolStripMenuItem_Click);
			
			this->çáåðåãòèToolStripMenuItem->Name = L"çáåðåãòèToolStripMenuItem";
			this->çáåðåãòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çáåðåãòèToolStripMenuItem->Text = L"Çáåðåãòè";
			this->çáåðåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåðåãòèToolStripMenuItem_Click);
			
			this->ñêóï÷åííÿToolStripMenuItem->Name = L"ñêóï÷åííÿToolStripMenuItem";
			this->ñêóï÷åííÿToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			this->ñêóï÷åííÿToolStripMenuItem->Text = L"Ñêóï÷åííÿ";
			this->ñêóï÷åííÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñêóï÷åííÿToolStripMenuItem_Click);
			
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
			
			this->groupBoxUsers->Controls->Add(this->groupBox8);
			this->groupBoxUsers->Controls->Add(this->groupBox2);
			this->groupBoxUsers->Controls->Add(this->groupBox1);
			this->groupBoxUsers->Location = System::Drawing::Point(1640, 31);
			this->groupBoxUsers->Name = L"groupBoxUsers";
			this->groupBoxUsers->Size = System::Drawing::Size(1621, 526);
			this->groupBoxUsers->TabIndex = 1;
			this->groupBoxUsers->TabStop = false;
			this->groupBoxUsers->Text = L"Êîðèñòóâà÷³";
			 
			this->groupBox8->Controls->Add(this->numericUpDownIDUserForDel);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->buttonDeleteUser);
			this->groupBox8->Location = System::Drawing::Point(1011, 371);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(592, 142);
			this->groupBox8->TabIndex = 5;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Âèäàëåííÿ";
			
			this->numericUpDownIDUserForDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownIDUserForDel->Location = System::Drawing::Point(248, 34);
			this->numericUpDownIDUserForDel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownIDUserForDel->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIDUserForDel->Name = L"numericUpDownIDUserForDel";
			this->numericUpDownIDUserForDel->Size = System::Drawing::Size(120, 30);
			this->numericUpDownIDUserForDel->TabIndex = 16;
			this->numericUpDownIDUserForDel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(234, 29);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Êîä êîðèñòóâà÷à:";
			
			this->buttonDeleteUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDeleteUser->Location = System::Drawing::Point(222, 81);
			this->buttonDeleteUser->Name = L"buttonDeleteUser";
			this->buttonDeleteUser->Size = System::Drawing::Size(181, 49);
			this->buttonDeleteUser->TabIndex = 14;
			this->buttonDeleteUser->Text = L"Âèäàëèòè";
			this->buttonDeleteUser->UseVisualStyleBackColor = true;
			this->buttonDeleteUser->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteUser_Click);
			 
			this->groupBox2->Controls->Add(this->buttonAddUser);
			this->groupBox2->Controls->Add(this->comboBoxIDPlaces);
			this->groupBox2->Controls->Add(this->textBoxEndTimeMin);
			this->groupBox2->Controls->Add(this->textBoxEndTimeH);
			this->groupBox2->Controls->Add(this->textBoxStartTimeMin);
			this->groupBox2->Controls->Add(this->textBoxStartTimeH);
			this->groupBox2->Controls->Add(this->textBoxDateMonth);
			this->groupBox2->Controls->Add(this->textBoxDateYear);
			this->groupBox2->Controls->Add(this->textBoxDateDay);
			this->groupBox2->Controls->Add(this->numericUpDownIDUser);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(1011, 33);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(597, 297);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Äîäàòè";
			
			this->buttonAddUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddUser->Location = System::Drawing::Point(212, 229);
			this->buttonAddUser->Name = L"buttonAddUser";
			this->buttonAddUser->Size = System::Drawing::Size(181, 49);
			this->buttonAddUser->TabIndex = 13;
			this->buttonAddUser->Text = L"Äîäàòè";
			this->buttonAddUser->UseVisualStyleBackColor = true;
			this->buttonAddUser->Click += gcnew System::EventHandler(this, &MyForm::buttonAddUser_Click);
			
			this->comboBoxIDPlaces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxIDPlaces->FormattingEnabled = true;
			this->comboBoxIDPlaces->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Ì³ñöå ïåðøå", L"Ì³ñöå äðóãå", L"Ì³ñöå òðåòº",
					L"Ì³ñöå ÷åòâåðòå", L"Ì³ñöå ï'ÿòå"
			});
			this->comboBoxIDPlaces->Location = System::Drawing::Point(109, 172);
			this->comboBoxIDPlaces->Name = L"comboBoxIDPlaces";
			this->comboBoxIDPlaces->Size = System::Drawing::Size(469, 33);
			this->comboBoxIDPlaces->TabIndex = 12;
			
			this->textBoxEndTimeMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxEndTimeMin->Location = System::Drawing::Point(437, 136);
			this->textBoxEndTimeMin->Name = L"textBoxEndTimeMin";
			this->textBoxEndTimeMin->Size = System::Drawing::Size(100, 30);
			this->textBoxEndTimeMin->TabIndex = 11;
			
			this->textBoxEndTimeH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxEndTimeH->Location = System::Drawing::Point(331, 137);
			this->textBoxEndTimeH->Name = L"textBoxEndTimeH";
			this->textBoxEndTimeH->Size = System::Drawing::Size(100, 30);
			this->textBoxEndTimeH->TabIndex = 10;
			
			this->textBoxStartTimeMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxStartTimeMin->Location = System::Drawing::Point(437, 100);
			this->textBoxStartTimeMin->Name = L"textBoxStartTimeMin";
			this->textBoxStartTimeMin->Size = System::Drawing::Size(100, 30);
			this->textBoxStartTimeMin->TabIndex = 9;
			
			this->textBoxStartTimeH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxStartTimeH->Location = System::Drawing::Point(331, 101);
			this->textBoxStartTimeH->Name = L"textBoxStartTimeH";
			this->textBoxStartTimeH->Size = System::Drawing::Size(100, 30);
			this->textBoxStartTimeH->TabIndex = 8;
			
			this->textBoxDateMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateMonth->Location = System::Drawing::Point(372, 65);
			this->textBoxDateMonth->Name = L"textBoxDateMonth";
			this->textBoxDateMonth->Size = System::Drawing::Size(100, 30);
			this->textBoxDateMonth->TabIndex = 7;
			 
			this->textBoxDateYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateYear->Location = System::Drawing::Point(478, 64);
			this->textBoxDateYear->Name = L"textBoxDateYear";
			this->textBoxDateYear->Size = System::Drawing::Size(100, 30);
			this->textBoxDateYear->TabIndex = 7;
			
			this->textBoxDateDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateDay->Location = System::Drawing::Point(266, 65);
			this->textBoxDateDay->Name = L"textBoxDateDay";
			this->textBoxDateDay->Size = System::Drawing::Size(100, 30);
			this->textBoxDateDay->TabIndex = 6;
			
			this->numericUpDownIDUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownIDUser->Location = System::Drawing::Point(246, 29);
			this->numericUpDownIDUser->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownIDUser->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIDUser->Name = L"numericUpDownIDUser";
			this->numericUpDownIDUser->Size = System::Drawing::Size(120, 30);
			this->numericUpDownIDUser->TabIndex = 5;
			this->numericUpDownIDUser->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ì³ñöå: ";
			
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"×àñ â³äïðàâëåííÿ (ÃÃ ÕÕ):";
			 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(319, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"×àñ ïðèáóòòÿ (ÃÃ ÕÕ):";
			
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Äàòà (ÄÄ ÌÌ ÐÐÐÐ):";
			
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Êîä êîðèñòóâà÷à:";
			 
			this->groupBox1->Controls->Add(this->dataGridViewUsers);
			this->groupBox1->Location = System::Drawing::Point(6, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(982, 483);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Âñ³ êîðèñòóâà÷³";
			 
			this->dataGridViewUsers->AllowUserToAddRows = false;
			this->dataGridViewUsers->AllowUserToDeleteRows = false;
			this->dataGridViewUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridViewUsers->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewUsers->Location = System::Drawing::Point(3, 18);
			this->dataGridViewUsers->Name = L"dataGridViewUsers";
			this->dataGridViewUsers->ReadOnly = true;
			this->dataGridViewUsers->RowHeadersWidth = 51;
			this->dataGridViewUsers->RowTemplate->Height = 24;
			this->dataGridViewUsers->Size = System::Drawing::Size(976, 462);
			this->dataGridViewUsers->TabIndex = 0;
			
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			 
			this->Column2->HeaderText = L"Äàòà";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->ToolTipText = L"Ôîðìàò: ÄÄ ÌÌ ÐÐÐÐ";
			this->Column2->Width = 125;
			 
			this->Column3->HeaderText = L"×àñ ïðèáóòòÿ";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->ToolTipText = L"Ôîðìàò: ÃÃ ÕÕ";
			this->Column3->Width = 150;
			
			this->Column4->HeaderText = L"×àñ â³äïðàâëåííÿ";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->ToolTipText = L"Ôîðìàò: ÃÃ ÕÕ";
			this->Column4->Width = 150;
			
			this->Column5->HeaderText = L"Ì³ñöå";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
		
			this->groupBoxClusters->Controls->Add(this->groupBox3);
			this->groupBoxClusters->Controls->Add(this->groupBox7);
			this->groupBoxClusters->Controls->Add(this->groupBox6);
			this->groupBoxClusters->Controls->Add(this->groupBox5);
			this->groupBoxClusters->Location = System::Drawing::Point(12, 31);
			this->groupBoxClusters->Name = L"groupBoxClusters";
			this->groupBoxClusters->Size = System::Drawing::Size(1622, 526);
			this->groupBoxClusters->TabIndex = 2;
			this->groupBoxClusters->TabStop = false;
			this->groupBoxClusters->Text = L"Ñêóï÷åííÿ";
			
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Location = System::Drawing::Point(1009, 442);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(607, 74);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Îá÷èñëåí³ äàí³";
			
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(361, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(222, 30);
			this->textBox1->TabIndex = 10;
			
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(11, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(344, 29);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Ñåðåäíÿ ê³ëüê³ñòü ëþäåé:";
			
			this->groupBox7->Controls->Add(this->textBoxDateMonth1);
			this->groupBox7->Controls->Add(this->textBoxDateYaer1);
			this->groupBox7->Controls->Add(this->textBoxDateDay1);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->comboBoxIDPlaces1);
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->buttonCalculate);
			this->groupBox7->Controls->Add(this->textBoxMin);
			this->groupBox7->Controls->Add(this->textBoxMax);
			this->groupBox7->Controls->Add(this->textBoxEndTimeH1);
			this->groupBox7->Controls->Add(this->textBoxStartTimeH1);
			this->groupBox7->Controls->Add(this->label10);
			this->groupBox7->Controls->Add(this->label9);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Location = System::Drawing::Point(1010, 33);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(606, 370);
			this->groupBox7->TabIndex = 4;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Ïàðàìåòðè ñêóï÷åííÿ";
			
			this->textBoxDateMonth1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateMonth1->Location = System::Drawing::Point(377, 36);
			this->textBoxDateMonth1->Name = L"textBoxDateMonth1";
			this->textBoxDateMonth1->Size = System::Drawing::Size(100, 30);
			this->textBoxDateMonth1->TabIndex = 17;
			
			this->textBoxDateYaer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateYaer1->Location = System::Drawing::Point(483, 35);
			this->textBoxDateYaer1->Name = L"textBoxDateYaer1";
			this->textBoxDateYaer1->Size = System::Drawing::Size(100, 30);
			this->textBoxDateYaer1->TabIndex = 18;
			 
			this->textBoxDateDay1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDateDay1->Location = System::Drawing::Point(271, 36);
			this->textBoxDateDay1->Name = L"textBoxDateDay1";
			this->textBoxDateDay1->Size = System::Drawing::Size(100, 30);
			this->textBoxDateDay1->TabIndex = 16;
			
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(10, 36);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(235, 29);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Äàòà (ÄÄ ÌÌ ÐÐÐÐ):";
			
			this->comboBoxIDPlaces1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxIDPlaces1->FormattingEnabled = true;
			this->comboBoxIDPlaces1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Ì³ñöå ïåðøå", L"Ì³ñöå äðóãå", L"Ì³ñöå òðåòº",
					L"Ì³ñöå ÷åòâåðòå", L"Ì³ñöå ï'ÿòåñ"
			});
			this->comboBoxIDPlaces1->Location = System::Drawing::Point(113, 245);
			this->comboBoxIDPlaces1->Name = L"comboBoxIDPlaces1";
			this->comboBoxIDPlaces1->Size = System::Drawing::Size(469, 33);
			this->comboBoxIDPlaces1->TabIndex = 14;
			
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(10, 245);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 29);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Ì³ñöå: ";
			
			this->buttonCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalculate->Location = System::Drawing::Point(246, 301);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(175, 42);
			this->buttonCalculate->TabIndex = 10;
			this->buttonCalculate->Text = L"Îá÷èñëèòè";
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			
			this->textBoxMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMin->Location = System::Drawing::Point(346, 202);
			this->textBoxMin->Name = L"textBoxMin";
			this->textBoxMin->Size = System::Drawing::Size(100, 30);
			this->textBoxMin->TabIndex = 9;
			
			this->textBoxMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMax->Location = System::Drawing::Point(346, 161);
			this->textBoxMax->Name = L"textBoxMax";
			this->textBoxMax->Size = System::Drawing::Size(100, 30);
			this->textBoxMax->TabIndex = 8;
			
			this->textBoxEndTimeH1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxEndTimeH1->Location = System::Drawing::Point(346, 122);
			this->textBoxEndTimeH1->Name = L"textBoxEndTimeH1";
			this->textBoxEndTimeH1->Size = System::Drawing::Size(100, 30);
			this->textBoxEndTimeH1->TabIndex = 6;
			
			this->textBoxStartTimeH1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxStartTimeH1->Location = System::Drawing::Point(346, 82);
			this->textBoxStartTimeH1->Name = L"textBoxStartTimeH1";
			this->textBoxStartTimeH1->Size = System::Drawing::Size(100, 30);
			this->textBoxStartTimeH1->TabIndex = 4;
			
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 202);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(327, 29);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Ì³í³ìàëüíà ê³ëüê³ñòü:";
			
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(334, 29);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Ìàêñèìàëüíà ê³ëüê³ñòü:";
			
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(255, 29);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Ê³íåöü (ÃÃ):";
			
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(273, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ïî÷àòîê (ÃÃ):";
			
			this->groupBox6->Location = System::Drawing::Point(1123, 48);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(8, 8);
			this->groupBox6->TabIndex = 3;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			
			this->groupBox5->Controls->Add(this->dataGridViewUsers1);
			this->groupBox5->Location = System::Drawing::Point(6, 33);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(982, 483);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Êîðèñòóâà÷³ ñêóï÷åííÿ";
			
			this->dataGridViewUsers1->AllowUserToAddRows = false;
			this->dataGridViewUsers1->AllowUserToDeleteRows = false;
			this->dataGridViewUsers1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewUsers1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridViewUsers1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewUsers1->Location = System::Drawing::Point(3, 18);
			this->dataGridViewUsers1->Name = L"dataGridViewUsers1";
			this->dataGridViewUsers1->ReadOnly = true;
			this->dataGridViewUsers1->RowHeadersWidth = 51;
			this->dataGridViewUsers1->RowTemplate->Height = 24;
			this->dataGridViewUsers1->Size = System::Drawing::Size(976, 462);
			this->dataGridViewUsers1->TabIndex = 0;
			this->dataGridViewUsers1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridViewUsers1_CellContentClick);
			
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 125;
			
			this->dataGridViewTextBoxColumn2->HeaderText = L"Äàòà";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->ToolTipText = L"Ôîðìàò: ÄÄ ÌÌ ÐÐÐÐ";
			this->dataGridViewTextBoxColumn2->Width = 125;
			 
			this->dataGridViewTextBoxColumn3->HeaderText = L"×àñ ïðèáóòòÿ";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->ToolTipText = L"Ôîðìàò: ÃÃ ÕÕ";
			this->dataGridViewTextBoxColumn3->Width = 150;
			
			this->dataGridViewTextBoxColumn4->HeaderText = L"×àñ â³äïðàâëåííÿ";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->ToolTipText = L"Ôîðìàò: ÃÃ ÕÕ";
			this->dataGridViewTextBoxColumn4->Width = 150;
			
			this->dataGridViewTextBoxColumn5->HeaderText = L"Ì³ñöå";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1646, 563);
			this->Controls->Add(this->groupBoxUsers);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBoxClusters);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Êîíòðîëü ñêóï÷åííÿ ëþäåé";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxUsers->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIDUserForDel))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIDUser))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers))->EndInit();
			this->groupBoxClusters->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: void LoadPlaces();

private: System::Void êîðèñòóâà÷³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çàâàíòàæèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çáåðåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAddUser_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDeleteUser_Click(System::Object^ sender, System::EventArgs^ e);
private: void PrintUsers();
private: void InputUsers();
private: int IDPlace(String^ s);

private: System::Void ñêóï÷åííÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridViewUsers1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
