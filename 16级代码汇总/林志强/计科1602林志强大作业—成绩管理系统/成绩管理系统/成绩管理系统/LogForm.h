#pragma once
using namespace System::IO;
#include"Student.h"
namespace 成绩管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// LogForm 摘要
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
	private:
		StreamWriter^WriEngFile;
	public:
		LogForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			WriEngFile=gcnew StreamWriter("c:\\成绩管理系统.txt",true);
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^  jsj2;
	private: System::Windows::Forms::TextBox^  jsj3;
	private: System::Windows::Forms::TextBox^  jsj4;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  jsj5;

	private: System::Windows::Forms::TextBox^  jsj1;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^  tm1;
	private: System::Windows::Forms::TextBox^  tm2;
	private: System::Windows::Forms::TextBox^  tm3;
	private: System::Windows::Forms::TextBox^  tm4;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  tm5;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  jr1;
	private: System::Windows::Forms::TextBox^  jr2;
	private: System::Windows::Forms::TextBox^  jr3;
	private: System::Windows::Forms::TextBox^  jr4;




	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  jr5;

	private: System::Windows::Forms::TextBox^  textnumber;
	private: System::Windows::Forms::TextBox^  textname;



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  jsj;
	private: System::Windows::Forms::TabPage^  wl;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::TextBox^  wl1;
	private: System::Windows::Forms::TextBox^  wl2;
	private: System::Windows::Forms::TextBox^  wl3;
	private: System::Windows::Forms::TextBox^  wl4;




	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  wl5;

	private: System::Windows::Forms::TabPage^  rj;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::TextBox^  rj1;
	private: System::Windows::Forms::TextBox^  rj2;
	private: System::Windows::Forms::TextBox^  rj3;
	private: System::Windows::Forms::TextBox^  rj4;




	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  rj5;

	private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tm;
private: System::Windows::Forms::TabPage^  jz;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
private: System::Windows::Forms::TextBox^  jz1;
private: System::Windows::Forms::TextBox^  jz2;
private: System::Windows::Forms::TextBox^  jz3;
private: System::Windows::Forms::TextBox^  jz4;




	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  jz5;

	private: System::Windows::Forms::TabControl^  tabControl4;
private: System::Windows::Forms::TabPage^  jr;
private: System::Windows::Forms::TabPage^  kj;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
private: System::Windows::Forms::TextBox^  kj1;
private: System::Windows::Forms::TextBox^  kj2;
private: System::Windows::Forms::TextBox^  kj3;
private: System::Windows::Forms::TextBox^  kj4;




	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  kj5;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->jsj = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->jsj2 = (gcnew System::Windows::Forms::TextBox());
			this->jsj3 = (gcnew System::Windows::Forms::TextBox());
			this->jsj4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->jsj5 = (gcnew System::Windows::Forms::Label());
			this->jsj1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->wl = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->wl1 = (gcnew System::Windows::Forms::TextBox());
			this->wl2 = (gcnew System::Windows::Forms::TextBox());
			this->wl3 = (gcnew System::Windows::Forms::TextBox());
			this->wl4 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->wl5 = (gcnew System::Windows::Forms::Label());
			this->rj = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->rj1 = (gcnew System::Windows::Forms::TextBox());
			this->rj2 = (gcnew System::Windows::Forms::TextBox());
			this->rj3 = (gcnew System::Windows::Forms::TextBox());
			this->rj4 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->rj5 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tm = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tm1 = (gcnew System::Windows::Forms::TextBox());
			this->tm2 = (gcnew System::Windows::Forms::TextBox());
			this->tm3 = (gcnew System::Windows::Forms::TextBox());
			this->tm4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tm5 = (gcnew System::Windows::Forms::Label());
			this->jz = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->jz1 = (gcnew System::Windows::Forms::TextBox());
			this->jz2 = (gcnew System::Windows::Forms::TextBox());
			this->jz3 = (gcnew System::Windows::Forms::TextBox());
			this->jz4 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->jz5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->jr = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->jr1 = (gcnew System::Windows::Forms::TextBox());
			this->jr2 = (gcnew System::Windows::Forms::TextBox());
			this->jr3 = (gcnew System::Windows::Forms::TextBox());
			this->jr4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->jr5 = (gcnew System::Windows::Forms::Label());
			this->kj = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->kj1 = (gcnew System::Windows::Forms::TextBox());
			this->kj2 = (gcnew System::Windows::Forms::TextBox());
			this->kj3 = (gcnew System::Windows::Forms::TextBox());
			this->kj4 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->kj5 = (gcnew System::Windows::Forms::Label());
			this->textnumber = (gcnew System::Windows::Forms::TextBox());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->jsj->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->wl->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->rj->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tm->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->jz->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->jr->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->kj->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(59, 125);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(314, 219);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(306, 193);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"计算机与通信工程学院";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->jsj);
			this->tabControl2->Controls->Add(this->wl);
			this->tabControl2->Controls->Add(this->rj);
			this->tabControl2->Location = System::Drawing::Point(5, 12);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(300, 181);
			this->tabControl2->TabIndex = 0;
			// 
			// jsj
			// 
			this->jsj->Controls->Add(this->tableLayoutPanel1);
			this->jsj->Location = System::Drawing::Point(4, 22);
			this->jsj->Name = L"jsj";
			this->jsj->Padding = System::Windows::Forms::Padding(3);
			this->jsj->Size = System::Drawing::Size(292, 155);
			this->jsj->TabIndex = 0;
			this->jsj->Text = L"计算机与科学技术";
			this->jsj->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->Controls->Add(this->jsj2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->jsj3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->jsj4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->jsj5, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->jsj1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(289, 152);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// jsj2
			// 
			this->jsj2->Location = System::Drawing::Point(147, 41);
			this->jsj2->Name = L"jsj2";
			this->jsj2->Size = System::Drawing::Size(139, 21);
			this->jsj2->TabIndex = 1;
			// 
			// jsj3
			// 
			this->jsj3->Location = System::Drawing::Point(147, 79);
			this->jsj3->Name = L"jsj3";
			this->jsj3->Size = System::Drawing::Size(139, 21);
			this->jsj3->TabIndex = 2;
			// 
			// jsj4
			// 
			this->jsj4->Location = System::Drawing::Point(147, 117);
			this->jsj4->Name = L"jsj4";
			this->jsj4->Size = System::Drawing::Size(139, 21);
			this->jsj4->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(3, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"英语成绩";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(3, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"物理成绩";
			// 
			// jsj5
			// 
			this->jsj5->AutoSize = true;
			this->jsj5->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->jsj5->Location = System::Drawing::Point(3, 114);
			this->jsj5->Name = L"jsj5";
			this->jsj5->Size = System::Drawing::Size(90, 21);
			this->jsj5->TabIndex = 7;
			this->jsj5->Text = L"C++成绩";
			// 
			// jsj1
			// 
			this->jsj1->Location = System::Drawing::Point(147, 3);
			this->jsj1->Name = L"jsj1";
			this->jsj1->Size = System::Drawing::Size(139, 21);
			this->jsj1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"高等数学成绩";
			// 
			// wl
			// 
			this->wl->Controls->Add(this->tableLayoutPanel4);
			this->wl->Location = System::Drawing::Point(4, 22);
			this->wl->Name = L"wl";
			this->wl->Padding = System::Windows::Forms::Padding(3);
			this->wl->Size = System::Drawing::Size(292, 155);
			this->wl->TabIndex = 3;
			this->wl->Text = L"网络工程";
			this->wl->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				49.12892F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50.87108F)));
			this->tableLayoutPanel4->Controls->Add(this->wl1, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->wl2, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->wl3, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->wl4, 1, 3);
			this->tableLayoutPanel4->Controls->Add(this->label16, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label17, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label18, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->wl5, 0, 3);
			this->tableLayoutPanel4->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 4;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(287, 151);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// wl1
			// 
			this->wl1->Location = System::Drawing::Point(144, 3);
			this->wl1->Name = L"wl1";
			this->wl1->Size = System::Drawing::Size(140, 21);
			this->wl1->TabIndex = 0;
			// 
			// wl2
			// 
			this->wl2->Location = System::Drawing::Point(144, 40);
			this->wl2->Name = L"wl2";
			this->wl2->Size = System::Drawing::Size(137, 21);
			this->wl2->TabIndex = 1;
			// 
			// wl3
			// 
			this->wl3->Location = System::Drawing::Point(144, 77);
			this->wl3->Name = L"wl3";
			this->wl3->Size = System::Drawing::Size(137, 21);
			this->wl3->TabIndex = 2;
			// 
			// wl4
			// 
			this->wl4->Location = System::Drawing::Point(144, 114);
			this->wl4->Name = L"wl4";
			this->wl4->Size = System::Drawing::Size(140, 21);
			this->wl4->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(3, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 19);
			this->label16->TabIndex = 4;
			this->label16->Text = L"高等数学成绩";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(3, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(89, 19);
			this->label17->TabIndex = 5;
			this->label17->Text = L"英语成绩";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(3, 74);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 19);
			this->label18->TabIndex = 6;
			this->label18->Text = L"物理成绩";
			// 
			// wl5
			// 
			this->wl5->AutoSize = true;
			this->wl5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->wl5->Location = System::Drawing::Point(3, 111);
			this->wl5->Name = L"wl5";
			this->wl5->Size = System::Drawing::Size(129, 38);
			this->wl5->TabIndex = 7;
			this->wl5->Text = L"网络工程设计成绩";
			// 
			// rj
			// 
			this->rj->Controls->Add(this->tableLayoutPanel5);
			this->rj->Location = System::Drawing::Point(4, 22);
			this->rj->Name = L"rj";
			this->rj->Padding = System::Windows::Forms::Padding(3);
			this->rj->Size = System::Drawing::Size(292, 155);
			this->rj->TabIndex = 2;
			this->rj->Text = L"软件工程";
			this->rj->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel5->Controls->Add(this->rj1, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->rj2, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->rj3, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->rj4, 1, 3);
			this->tableLayoutPanel5->Controls->Add(this->label20, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label21, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label22, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->rj5, 0, 3);
			this->tableLayoutPanel5->Location = System::Drawing::Point(2, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(289, 152);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// rj1
			// 
			this->rj1->Location = System::Drawing::Point(147, 3);
			this->rj1->Name = L"rj1";
			this->rj1->Size = System::Drawing::Size(139, 21);
			this->rj1->TabIndex = 0;
			// 
			// rj2
			// 
			this->rj2->Location = System::Drawing::Point(147, 41);
			this->rj2->Name = L"rj2";
			this->rj2->Size = System::Drawing::Size(139, 21);
			this->rj2->TabIndex = 1;
			// 
			// rj3
			// 
			this->rj3->Location = System::Drawing::Point(147, 79);
			this->rj3->Name = L"rj3";
			this->rj3->Size = System::Drawing::Size(139, 21);
			this->rj3->TabIndex = 2;
			// 
			// rj4
			// 
			this->rj4->Location = System::Drawing::Point(147, 117);
			this->rj4->Name = L"rj4";
			this->rj4->Size = System::Drawing::Size(139, 21);
			this->rj4->TabIndex = 3;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(3, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(129, 19);
			this->label20->TabIndex = 4;
			this->label20->Text = L"高等数学成绩";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(3, 38);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 19);
			this->label21->TabIndex = 5;
			this->label21->Text = L"英语成绩";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(3, 76);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 19);
			this->label22->TabIndex = 6;
			this->label22->Text = L"物理成绩";
			// 
			// rj5
			// 
			this->rj5->AutoSize = true;
			this->rj5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->rj5->Location = System::Drawing::Point(3, 114);
			this->rj5->Name = L"rj5";
			this->rj5->Size = System::Drawing::Size(129, 19);
			this->rj5->TabIndex = 7;
			this->rj5->Text = L"软件工程成绩";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(306, 193);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"土木与建筑学院";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tm);
			this->tabControl3->Controls->Add(this->jz);
			this->tabControl3->Location = System::Drawing::Point(2, 6);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(303, 183);
			this->tabControl3->TabIndex = 0;
			// 
			// tm
			// 
			this->tm->Controls->Add(this->tableLayoutPanel2);
			this->tm->Location = System::Drawing::Point(4, 22);
			this->tm->Name = L"tm";
			this->tm->Padding = System::Windows::Forms::Padding(3);
			this->tm->Size = System::Drawing::Size(295, 157);
			this->tm->TabIndex = 0;
			this->tm->Text = L"土木工程";
			this->tm->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tm1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->tm2, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->tm3, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->tm4, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->tm5, 0, 3);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(289, 152);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tm1
			// 
			this->tm1->Location = System::Drawing::Point(147, 3);
			this->tm1->Name = L"tm1";
			this->tm1->Size = System::Drawing::Size(139, 21);
			this->tm1->TabIndex = 0;
			// 
			// tm2
			// 
			this->tm2->Location = System::Drawing::Point(147, 41);
			this->tm2->Name = L"tm2";
			this->tm2->Size = System::Drawing::Size(139, 21);
			this->tm2->TabIndex = 1;
			// 
			// tm3
			// 
			this->tm3->Location = System::Drawing::Point(147, 79);
			this->tm3->Name = L"tm3";
			this->tm3->Size = System::Drawing::Size(139, 21);
			this->tm3->TabIndex = 2;
			// 
			// tm4
			// 
			this->tm4->Location = System::Drawing::Point(147, 117);
			this->tm4->Name = L"tm4";
			this->tm4->Size = System::Drawing::Size(139, 21);
			this->tm4->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 19);
			this->label7->TabIndex = 4;
			this->label7->Text = L"高等数学成绩";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(3, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 19);
			this->label8->TabIndex = 5;
			this->label8->Text = L"英语成绩";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(3, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 19);
			this->label9->TabIndex = 6;
			this->label9->Text = L"物理成绩";
			// 
			// tm5
			// 
			this->tm5->AutoSize = true;
			this->tm5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tm5->Location = System::Drawing::Point(3, 114);
			this->tm5->Name = L"tm5";
			this->tm5->Size = System::Drawing::Size(129, 19);
			this->tm5->TabIndex = 7;
			this->tm5->Text = L"工程力学成绩";
			// 
			// jz
			// 
			this->jz->Controls->Add(this->tableLayoutPanel6);
			this->jz->Location = System::Drawing::Point(4, 22);
			this->jz->Name = L"jz";
			this->jz->Padding = System::Windows::Forms::Padding(3);
			this->jz->Size = System::Drawing::Size(295, 143);
			this->jz->TabIndex = 1;
			this->jz->Text = L"建筑学";
			this->jz->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel6->Controls->Add(this->jz1, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->jz2, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->jz3, 1, 2);
			this->tableLayoutPanel6->Controls->Add(this->jz4, 1, 3);
			this->tableLayoutPanel6->Controls->Add(this->label24, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label25, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label26, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->jz5, 0, 3);
			this->tableLayoutPanel6->Location = System::Drawing::Point(4, 3);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 4;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(290, 154);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// jz1
			// 
			this->jz1->Location = System::Drawing::Point(148, 3);
			this->jz1->Name = L"jz1";
			this->jz1->Size = System::Drawing::Size(139, 21);
			this->jz1->TabIndex = 0;
			// 
			// jz2
			// 
			this->jz2->Location = System::Drawing::Point(148, 41);
			this->jz2->Name = L"jz2";
			this->jz2->Size = System::Drawing::Size(139, 21);
			this->jz2->TabIndex = 1;
			// 
			// jz3
			// 
			this->jz3->Location = System::Drawing::Point(148, 79);
			this->jz3->Name = L"jz3";
			this->jz3->Size = System::Drawing::Size(138, 21);
			this->jz3->TabIndex = 2;
			// 
			// jz4
			// 
			this->jz4->Location = System::Drawing::Point(148, 117);
			this->jz4->Name = L"jz4";
			this->jz4->Size = System::Drawing::Size(139, 21);
			this->jz4->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(3, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 19);
			this->label24->TabIndex = 4;
			this->label24->Text = L"高等数学成绩";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(3, 38);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(89, 19);
			this->label25->TabIndex = 5;
			this->label25->Text = L"英语成绩";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(3, 76);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(89, 19);
			this->label26->TabIndex = 6;
			this->label26->Text = L"物理成绩";
			// 
			// jz5
			// 
			this->jz5->AutoSize = true;
			this->jz5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->jz5->Location = System::Drawing::Point(3, 114);
			this->jz5->Name = L"jz5";
			this->jz5->Size = System::Drawing::Size(129, 19);
			this->jz5->TabIndex = 7;
			this->jz5->Text = L"工程测量成绩";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(306, 193);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"经济与管理学院";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->jr);
			this->tabControl4->Controls->Add(this->kj);
			this->tabControl4->Location = System::Drawing::Point(4, 6);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(301, 182);
			this->tabControl4->TabIndex = 0;
			// 
			// jr
			// 
			this->jr->Controls->Add(this->tableLayoutPanel3);
			this->jr->Location = System::Drawing::Point(4, 22);
			this->jr->Name = L"jr";
			this->jr->Padding = System::Windows::Forms::Padding(3);
			this->jr->Size = System::Drawing::Size(293, 156);
			this->jr->TabIndex = 0;
			this->jr->Text = L"金融学";
			this->jr->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel3->Controls->Add(this->jr1, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->jr2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->jr3, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->jr4, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->jr5, 0, 3);
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(287, 161);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// jr1
			// 
			this->jr1->Location = System::Drawing::Point(146, 3);
			this->jr1->Name = L"jr1";
			this->jr1->Size = System::Drawing::Size(138, 21);
			this->jr1->TabIndex = 0;
			// 
			// jr2
			// 
			this->jr2->Location = System::Drawing::Point(146, 43);
			this->jr2->Name = L"jr2";
			this->jr2->Size = System::Drawing::Size(138, 21);
			this->jr2->TabIndex = 1;
			// 
			// jr3
			// 
			this->jr3->Location = System::Drawing::Point(146, 83);
			this->jr3->Name = L"jr3";
			this->jr3->Size = System::Drawing::Size(138, 21);
			this->jr3->TabIndex = 2;
			// 
			// jr4
			// 
			this->jr4->Location = System::Drawing::Point(146, 123);
			this->jr4->Name = L"jr4";
			this->jr4->Size = System::Drawing::Size(138, 21);
			this->jr4->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 19);
			this->label11->TabIndex = 4;
			this->label11->Text = L"高等数学成绩";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(3, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 19);
			this->label12->TabIndex = 5;
			this->label12->Text = L"英语成绩";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(3, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 19);
			this->label13->TabIndex = 6;
			this->label13->Text = L"物理成绩";
			// 
			// jr5
			// 
			this->jr5->AutoSize = true;
			this->jr5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->jr5->Location = System::Drawing::Point(3, 120);
			this->jr5->Name = L"jr5";
			this->jr5->Size = System::Drawing::Size(127, 16);
			this->jr5->TabIndex = 7;
			this->jr5->Text = L"金融学原理成绩";
			// 
			// kj
			// 
			this->kj->Controls->Add(this->tableLayoutPanel7);
			this->kj->Location = System::Drawing::Point(4, 22);
			this->kj->Name = L"kj";
			this->kj->Padding = System::Windows::Forms::Padding(3);
			this->kj->Size = System::Drawing::Size(293, 140);
			this->kj->TabIndex = 1;
			this->kj->Text = L"会计学";
			this->kj->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel7->Controls->Add(this->kj1, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->kj2, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->kj3, 1, 2);
			this->tableLayoutPanel7->Controls->Add(this->kj4, 1, 3);
			this->tableLayoutPanel7->Controls->Add(this->label28, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->label29, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->label30, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->kj5, 0, 3);
			this->tableLayoutPanel7->Location = System::Drawing::Point(1, 5);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 4;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(291, 155);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// kj1
			// 
			this->kj1->Location = System::Drawing::Point(148, 3);
			this->kj1->Name = L"kj1";
			this->kj1->Size = System::Drawing::Size(140, 21);
			this->kj1->TabIndex = 0;
			// 
			// kj2
			// 
			this->kj2->Location = System::Drawing::Point(148, 41);
			this->kj2->Name = L"kj2";
			this->kj2->Size = System::Drawing::Size(140, 21);
			this->kj2->TabIndex = 1;
			// 
			// kj3
			// 
			this->kj3->Location = System::Drawing::Point(148, 79);
			this->kj3->Name = L"kj3";
			this->kj3->Size = System::Drawing::Size(140, 21);
			this->kj3->TabIndex = 2;
			// 
			// kj4
			// 
			this->kj4->Location = System::Drawing::Point(148, 117);
			this->kj4->Name = L"kj4";
			this->kj4->Size = System::Drawing::Size(140, 21);
			this->kj4->TabIndex = 3;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(3, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(129, 19);
			this->label28->TabIndex = 4;
			this->label28->Text = L"高等数学成绩";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(3, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(89, 19);
			this->label29->TabIndex = 5;
			this->label29->Text = L"英语成绩";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(3, 76);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(89, 19);
			this->label30->TabIndex = 6;
			this->label30->Text = L"物理成绩";
			// 
			// kj5
			// 
			this->kj5->AutoSize = true;
			this->kj5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->kj5->Location = System::Drawing::Point(3, 114);
			this->kj5->Name = L"kj5";
			this->kj5->Size = System::Drawing::Size(127, 16);
			this->kj5->TabIndex = 7;
			this->kj5->Text = L"会计学原理成绩";
			// 
			// textnumber
			// 
			this->textnumber->Location = System::Drawing::Point(90, 65);
			this->textnumber->Name = L"textnumber";
			this->textnumber->Size = System::Drawing::Size(111, 21);
			this->textnumber->TabIndex = 1;
			// 
			// textname
			// 
			this->textname->Location = System::Drawing::Point(276, 65);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(97, 21);
			this->textname->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(385, 65);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(105, 70);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"性别";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(20, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(35, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"女";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(20, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"男";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(44, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"学号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(228, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"姓名";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(89, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"录入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LogForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(305, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LogForm::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(170, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(135, 20);
			this->label15->TabIndex = 8;
			this->label15->Text = L"成绩录入系统";
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 402);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textname);
			this->Controls->Add(this->textnumber);
			this->Controls->Add(this->tabControl1);
			this->Name = L"LogForm";
			this->Text = L"录入";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->jsj->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->wl->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->rj->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tm->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->jz->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->jr->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->kj->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				String^record=gcnew String("");
				 Student^stu=gcnew Student;
				 if(this->tabControl1->SelectedTab==tabPage1)
				 { record="";
					 if(this->tabControl2->SelectedIndex==0)
				 {stu->Number=this->textnumber->Text;
				 stu->Name=this->textname->Text;
				if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
				 stu->Xy=tabPage1->Text;
				 stu->Zy=jsj->Text;
				 if(jsj1->Text->Trim()==""||jsj2->Text->Trim()==""||jsj3->Text->Trim()==""||jsj4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto one;}
				 stu->Math=Convert::ToDouble(jsj1->Text);
					 stu->English=Convert::ToDouble(jsj2->Text);
					 stu->Wuli=Convert::ToDouble(jsj3->Text);
					 stu->Obj=jsj5->Text;
					 stu->Other=Convert::ToDouble(jsj4->Text);
					 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto one;}
					 if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto one;}
					 if(stu->Name==""){MessageBox::Show("姓名不能为空");goto one;}
					 if(stu->Number==""){MessageBox::Show("学号不能为空");goto one;}
					 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+jsj1->Text+","+jsj2->Text+","+jsj3->Text+","+stu->Obj+","+jsj4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");}
					 else if(this->tabControl2->SelectedIndex==1)
					 {
					 stu->Number=this->textnumber->Text;
					 stu->Name=this->textname->Text;
					if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
					 stu->Xy=tabPage1->Text;
					 stu->Zy=wl->Text;
					 if(wl1->Text->Trim()==""||wl2->Text->Trim()==""||wl3->Text->Trim()==""||wl4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto one;}
					 stu->Math=Convert::ToDouble(wl1->Text);
					 stu->English=Convert::ToDouble(wl2->Text);
					 stu->Wuli=Convert::ToDouble(wl3->Text);
					 stu->Obj=wl5->Text;
					 stu->Other=Convert::ToDouble(wl4->Text);
					 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto one;}
					 if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto one;}
					 if(stu->Name==""){MessageBox::Show("姓名不能为空");goto one;}
					 if(stu->Number==""){MessageBox::Show("学号不能为空");goto one;}
					 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+wl1->Text+","+wl2->Text+","+wl3->Text+","+stu->Obj+","+wl4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
					 }
					 else if(this->tabControl2->SelectedIndex==2)
					 {
					 stu->Number=this->textnumber->Text;
					 stu->Name=this->textname->Text;
					 if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
					 stu->Xy=tabPage1->Text;
					 stu->Zy=rj->Text;
					 if(rj1->Text->Trim()==""||rj2->Text->Trim()==""||rj3->Text->Trim()==""||rj4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto one;}
					 stu->Math=Convert::ToDouble(rj1->Text);
					 stu->English=Convert::ToDouble(rj2->Text);
					 stu->Wuli=Convert::ToDouble(rj3->Text);
					 stu->Obj=rj5->Text;
					 stu->Other=Convert::ToDouble(rj4->Text);
					 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto one;}
					 if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto one;}
					 if(stu->Name==""){MessageBox::Show("姓名不能为空");goto one;}
					 if(stu->Number==""){MessageBox::Show("学号不能为空");goto one;}
					 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+rj1->Text+","+rj2->Text+","+rj3->Text+","+stu->Obj+","+rj4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
					 }
one:textname->Text="";
textnumber->Text="";
jsj1->Text="";
jsj2->Text="";
jsj3->Text="";
jsj4->Text="";
wl1->Text="";
wl2->Text="";
wl3->Text="";
wl4->Text="";
rj1->Text="";
rj2->Text="";
rj3->Text="";
rj4->Text="";
				 }
				 else if(this->tabControl1->SelectedTab==tabPage2)
				 {
				 record="";
				 if(this->tabControl3->SelectedIndex==0)
				 {stu->Number=this->textnumber->Text;
				 stu->Name=this->textname->Text;
				if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
				 stu->Xy=tabPage2->Text;
				 stu->Zy=tm->Text;
				 if(tm1->Text->Trim()==""||tm2->Text->Trim()==""||tm3->Text->Trim()==""||tm4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto two;}
				 stu->Math=Convert::ToDouble(tm1->Text);
				 stu->English=Convert::ToDouble(tm2->Text);
				 stu->Wuli=Convert::ToDouble(tm3->Text);
				 stu->Obj=tm5->Text;
				 stu->Other=Convert::ToDouble(tm4->Text);
				 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto two;}
				if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto two;}
				if(stu->Name==""){MessageBox::Show("姓名不能为空");goto two;}
				if(stu->Number==""){MessageBox::Show("学号不能为空");goto two;}
				 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+tm1->Text+","+tm2->Text+","+tm3->Text+","+stu->Obj+","+tm4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
				 }
				 else if(this->tabControl3->SelectedIndex==1)
				 {stu->Number=this->textnumber->Text;
				 stu->Name=this->textname->Text;
				if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
				 stu->Xy=tabPage2->Text;
				 stu->Zy=jz->Text;
				 if(jz1->Text->Trim()==""||jz2->Text->Trim()==""||jz3->Text->Trim()==""||jz4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto two;}
				 stu->Math=Convert::ToDouble(jz1->Text);
				 stu->English=Convert::ToDouble(jz2->Text);
				 stu->Wuli=Convert::ToDouble(jz3->Text);
				 stu->Obj=jz5->Text;
				 stu->Other=Convert::ToDouble(jz4->Text);
				 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto two;}
				if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto two;}
				if(stu->Name==""){MessageBox::Show("姓名不能为空");goto two;}
				if(stu->Number==""){MessageBox::Show("学号不能为空");goto two;}
				 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+jz1->Text+","+jz2->Text+","+jz3->Text+","+stu->Obj+","+jz4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
				 }
				 two:textname->Text="";
textnumber->Text="";
tm1->Text="";
tm2->Text="";
tm3->Text="";
tm4->Text="";
jz1->Text="";
jz2->Text="";
jz3->Text="";
jz4->Text="";
 }
				 else if(this->tabControl1->SelectedTab==tabPage3)
				 {
				 record="";
				 if(this->tabControl4->SelectedIndex==0)
				 {stu->Number=this->textnumber->Text;
				 stu->Name=this->textname->Text;
				if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
				 stu->Xy=tabPage3->Text;
				 stu->Zy=jr->Text;
				 if(jr1->Text->Trim()==""||jr2->Text->Trim()==""||jr3->Text->Trim()==""||jr4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto three;}
				 stu->Math=Convert::ToDouble(jr1->Text);
				 stu->English=Convert::ToDouble(jr2->Text);
				 stu->Wuli=Convert::ToDouble(jr3->Text);
				 stu->Obj=jr5->Text;
				 stu->Other=Convert::ToDouble(jr4->Text);
				 if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto three;}
				if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto three;}
				if(stu->Name==""){MessageBox::Show("姓名不能为空");goto three;}
				if(stu->Number==""){MessageBox::Show("学号不能为空");goto three;}
				 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+jr1->Text+","+jr2->Text+","+jr3->Text+","+stu->Obj+","+jr4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
				 }
				 else if(this->tabControl4->SelectedIndex==1)
				 {stu->Number=this->textnumber->Text;
				 stu->Name=this->textname->Text;
				if(radioButton1->Checked)stu->Sex=radioButton1->Text;
				if(radioButton2->Checked)stu->Sex=radioButton2->Text;
				 stu->Xy=tabPage3->Text;
				 stu->Zy=kj->Text;
				 if(kj1->Text->Trim()==""||kj2->Text->Trim()==""||kj3->Text->Trim()==""||kj4->Text->Trim()==""){MessageBox::Show("成绩不能为空");goto three;}
				 stu->Math=Convert::ToDouble(kj1->Text);
				 stu->English=Convert::ToDouble(kj2->Text);
				 stu->Wuli=Convert::ToDouble(kj3->Text);
				 stu->Obj=kj5->Text;
				 stu->Other=Convert::ToDouble(kj4->Text);
				  if(stu->Math<0||stu->Math>100||stu->English<0||stu->English>100||stu->Wuli<0||stu->Wuli>100||stu->Other<0||stu->Other>100){MessageBox::Show("输入错误，成绩格式为百分制");goto three;}
				if(stu->Sex==""){MessageBox::Show("忘记选择性别");goto three;}
				if(stu->Name==""){MessageBox::Show("姓名不能为空");goto three;}
				if(stu->Number==""){MessageBox::Show("学号不能为空");goto three;}
				 record+=stu->Number+","+stu->Name+","+stu->Sex+","+stu->Xy+","+stu->Zy+","+kj1->Text+","+kj2->Text+","+kj3->Text+","+stu->Obj+","+kj4->Text;
					 WriEngFile->WriteLine(record);
					 WriEngFile->Flush();
					 MessageBox::Show("保存成功");
				 }
				 three:textname->Text="";
textnumber->Text="";
jr1->Text="";
jr2->Text="";
jr3->Text="";
jr4->Text="";
kj1->Text="";
kj2->Text="";
kj3->Text="";
kj4->Text="";
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 WriEngFile->Close();
			 this->Close();
		 }
};
}
