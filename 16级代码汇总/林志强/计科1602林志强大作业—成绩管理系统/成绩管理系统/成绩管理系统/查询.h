#pragma once

namespace 成绩管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 查询 摘要
	/// </summary>
	public ref class 查询 : public System::Windows::Forms::Form
	{
	public:
		查询(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~查询()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  number;
	private: System::Windows::Forms::TextBox^  textnumber;
	protected: 


	private: System::Windows::Forms::TabPage^  name;
	private: System::Windows::Forms::TextBox^  textname;


	private: System::Windows::Forms::TabPage^  sex;
	private: System::Windows::Forms::RadioButton^  radiogirl;


	private: System::Windows::Forms::RadioButton^  radioboy;

	private: System::Windows::Forms::TabPage^  xy;
	private: System::Windows::Forms::TabPage^  zy;
	private: System::Windows::Forms::TabPage^  math;
	private: System::Windows::Forms::TabPage^  english;
	private: System::Windows::Forms::TabPage^  wuli;
	private: System::Windows::Forms::TabPage^  jsj;
	private: System::Windows::Forms::TabPage^  wl;
	private: System::Windows::Forms::TabPage^  rj;
	private: System::Windows::Forms::ListBox^  listnumber;









	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radio3;

	private: System::Windows::Forms::RadioButton^  radio2;

	private: System::Windows::Forms::RadioButton^  radio1;
	private: System::Windows::Forms::RadioButton^  radiokj;



	private: System::Windows::Forms::RadioButton^  radiojr;

	private: System::Windows::Forms::RadioButton^  radiojz;

	private: System::Windows::Forms::RadioButton^  radiotm;

	private: System::Windows::Forms::RadioButton^  radiorj;

	private: System::Windows::Forms::RadioButton^  radiowl;

	private: System::Windows::Forms::RadioButton^  radiojsj;
	private: System::Windows::Forms::TextBox^  textmath;
	private: System::Windows::Forms::TextBox^  textenglish;
	private: System::Windows::Forms::TextBox^  textwuli;
	private: System::Windows::Forms::TextBox^  textjsj;
	private: System::Windows::Forms::TextBox^  textwl;
	private: System::Windows::Forms::TextBox^  textrj;







	private: System::Windows::Forms::TabPage^  tm;
	private: System::Windows::Forms::TextBox^  texttm;


	private: System::Windows::Forms::TabPage^  jz;
	private: System::Windows::Forms::TextBox^  textjz;


	private: System::Windows::Forms::TabPage^  jr;
	private: System::Windows::Forms::TextBox^  textjr;


	private: System::Windows::Forms::TabPage^  kj;
private: System::Windows::Forms::TextBox^  textkj;


	private: System::Windows::Forms::ListBox^  listname;
	private: System::Windows::Forms::ListBox^  listsex;
	private: System::Windows::Forms::ListBox^  listxy;
	private: System::Windows::Forms::ListBox^  listzy;
	private: System::Windows::Forms::ListBox^  listmath;
	private: System::Windows::Forms::ListBox^  listenglish;
	private: System::Windows::Forms::ListBox^  listwuli;
	private: System::Windows::Forms::ListBox^  listother;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  删除ToolStripMenuItem;
private: System::ComponentModel::IContainer^  components;









	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->number = (gcnew System::Windows::Forms::TabPage());
			this->textnumber = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TabPage());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->sex = (gcnew System::Windows::Forms::TabPage());
			this->radiogirl = (gcnew System::Windows::Forms::RadioButton());
			this->radioboy = (gcnew System::Windows::Forms::RadioButton());
			this->xy = (gcnew System::Windows::Forms::TabPage());
			this->radio3 = (gcnew System::Windows::Forms::RadioButton());
			this->radio2 = (gcnew System::Windows::Forms::RadioButton());
			this->radio1 = (gcnew System::Windows::Forms::RadioButton());
			this->zy = (gcnew System::Windows::Forms::TabPage());
			this->radiokj = (gcnew System::Windows::Forms::RadioButton());
			this->radiojr = (gcnew System::Windows::Forms::RadioButton());
			this->radiojz = (gcnew System::Windows::Forms::RadioButton());
			this->radiotm = (gcnew System::Windows::Forms::RadioButton());
			this->radiorj = (gcnew System::Windows::Forms::RadioButton());
			this->radiowl = (gcnew System::Windows::Forms::RadioButton());
			this->radiojsj = (gcnew System::Windows::Forms::RadioButton());
			this->math = (gcnew System::Windows::Forms::TabPage());
			this->textmath = (gcnew System::Windows::Forms::TextBox());
			this->english = (gcnew System::Windows::Forms::TabPage());
			this->textenglish = (gcnew System::Windows::Forms::TextBox());
			this->wuli = (gcnew System::Windows::Forms::TabPage());
			this->textwuli = (gcnew System::Windows::Forms::TextBox());
			this->jsj = (gcnew System::Windows::Forms::TabPage());
			this->textjsj = (gcnew System::Windows::Forms::TextBox());
			this->wl = (gcnew System::Windows::Forms::TabPage());
			this->textwl = (gcnew System::Windows::Forms::TextBox());
			this->rj = (gcnew System::Windows::Forms::TabPage());
			this->textrj = (gcnew System::Windows::Forms::TextBox());
			this->tm = (gcnew System::Windows::Forms::TabPage());
			this->texttm = (gcnew System::Windows::Forms::TextBox());
			this->jz = (gcnew System::Windows::Forms::TabPage());
			this->textjz = (gcnew System::Windows::Forms::TextBox());
			this->jr = (gcnew System::Windows::Forms::TabPage());
			this->textjr = (gcnew System::Windows::Forms::TextBox());
			this->kj = (gcnew System::Windows::Forms::TabPage());
			this->textkj = (gcnew System::Windows::Forms::TextBox());
			this->listnumber = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listname = (gcnew System::Windows::Forms::ListBox());
			this->listsex = (gcnew System::Windows::Forms::ListBox());
			this->listxy = (gcnew System::Windows::Forms::ListBox());
			this->listzy = (gcnew System::Windows::Forms::ListBox());
			this->listmath = (gcnew System::Windows::Forms::ListBox());
			this->listenglish = (gcnew System::Windows::Forms::ListBox());
			this->listwuli = (gcnew System::Windows::Forms::ListBox());
			this->listother = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->删除ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->number->SuspendLayout();
			this->name->SuspendLayout();
			this->sex->SuspendLayout();
			this->xy->SuspendLayout();
			this->zy->SuspendLayout();
			this->math->SuspendLayout();
			this->english->SuspendLayout();
			this->wuli->SuspendLayout();
			this->jsj->SuspendLayout();
			this->wl->SuspendLayout();
			this->rj->SuspendLayout();
			this->tm->SuspendLayout();
			this->jz->SuspendLayout();
			this->jr->SuspendLayout();
			this->kj->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->number);
			this->tabControl1->Controls->Add(this->name);
			this->tabControl1->Controls->Add(this->sex);
			this->tabControl1->Controls->Add(this->xy);
			this->tabControl1->Controls->Add(this->zy);
			this->tabControl1->Controls->Add(this->math);
			this->tabControl1->Controls->Add(this->english);
			this->tabControl1->Controls->Add(this->wuli);
			this->tabControl1->Controls->Add(this->jsj);
			this->tabControl1->Controls->Add(this->wl);
			this->tabControl1->Controls->Add(this->rj);
			this->tabControl1->Controls->Add(this->tm);
			this->tabControl1->Controls->Add(this->jz);
			this->tabControl1->Controls->Add(this->jr);
			this->tabControl1->Controls->Add(this->kj);
			this->tabControl1->Location = System::Drawing::Point(112, 45);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(423, 103);
			this->tabControl1->TabIndex = 0;
			// 
			// number
			// 
			this->number->Controls->Add(this->textnumber);
			this->number->Location = System::Drawing::Point(4, 22);
			this->number->Name = L"number";
			this->number->Padding = System::Windows::Forms::Padding(3);
			this->number->Size = System::Drawing::Size(415, 77);
			this->number->TabIndex = 0;
			this->number->Text = L"学号";
			this->number->UseVisualStyleBackColor = true;
			// 
			// textnumber
			// 
			this->textnumber->Location = System::Drawing::Point(26, 23);
			this->textnumber->Name = L"textnumber";
			this->textnumber->Size = System::Drawing::Size(363, 21);
			this->textnumber->TabIndex = 0;
			// 
			// name
			// 
			this->name->Controls->Add(this->textname);
			this->name->Location = System::Drawing::Point(4, 22);
			this->name->Name = L"name";
			this->name->Padding = System::Windows::Forms::Padding(3);
			this->name->Size = System::Drawing::Size(415, 77);
			this->name->TabIndex = 1;
			this->name->Text = L"姓名";
			this->name->UseVisualStyleBackColor = true;
			// 
			// textname
			// 
			this->textname->Location = System::Drawing::Point(30, 22);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(356, 21);
			this->textname->TabIndex = 0;
			// 
			// sex
			// 
			this->sex->Controls->Add(this->radiogirl);
			this->sex->Controls->Add(this->radioboy);
			this->sex->Location = System::Drawing::Point(4, 22);
			this->sex->Name = L"sex";
			this->sex->Padding = System::Windows::Forms::Padding(3);
			this->sex->Size = System::Drawing::Size(415, 77);
			this->sex->TabIndex = 2;
			this->sex->Text = L"性别";
			this->sex->UseVisualStyleBackColor = true;
			// 
			// radiogirl
			// 
			this->radiogirl->AutoSize = true;
			this->radiogirl->Location = System::Drawing::Point(240, 30);
			this->radiogirl->Name = L"radiogirl";
			this->radiogirl->Size = System::Drawing::Size(35, 16);
			this->radiogirl->TabIndex = 1;
			this->radiogirl->TabStop = true;
			this->radiogirl->Text = L"女";
			this->radiogirl->UseVisualStyleBackColor = true;
			// 
			// radioboy
			// 
			this->radioboy->AutoSize = true;
			this->radioboy->Location = System::Drawing::Point(107, 30);
			this->radioboy->Name = L"radioboy";
			this->radioboy->Size = System::Drawing::Size(35, 16);
			this->radioboy->TabIndex = 0;
			this->radioboy->TabStop = true;
			this->radioboy->Text = L"男";
			this->radioboy->UseVisualStyleBackColor = true;
			// 
			// xy
			// 
			this->xy->Controls->Add(this->radio3);
			this->xy->Controls->Add(this->radio2);
			this->xy->Controls->Add(this->radio1);
			this->xy->Location = System::Drawing::Point(4, 22);
			this->xy->Name = L"xy";
			this->xy->Padding = System::Windows::Forms::Padding(3);
			this->xy->Size = System::Drawing::Size(415, 77);
			this->xy->TabIndex = 3;
			this->xy->Text = L"学院";
			this->xy->UseVisualStyleBackColor = true;
			// 
			// radio3
			// 
			this->radio3->AutoSize = true;
			this->radio3->Location = System::Drawing::Point(147, 50);
			this->radio3->Name = L"radio3";
			this->radio3->Size = System::Drawing::Size(107, 16);
			this->radio3->TabIndex = 2;
			this->radio3->TabStop = true;
			this->radio3->Text = L"经济与管理学院";
			this->radio3->UseVisualStyleBackColor = true;
			// 
			// radio2
			// 
			this->radio2->AutoSize = true;
			this->radio2->Location = System::Drawing::Point(147, 28);
			this->radio2->Name = L"radio2";
			this->radio2->Size = System::Drawing::Size(107, 16);
			this->radio2->TabIndex = 1;
			this->radio2->TabStop = true;
			this->radio2->Text = L"土木与建筑学院";
			this->radio2->UseVisualStyleBackColor = true;
			// 
			// radio1
			// 
			this->radio1->AutoSize = true;
			this->radio1->Location = System::Drawing::Point(147, 6);
			this->radio1->Name = L"radio1";
			this->radio1->Size = System::Drawing::Size(143, 16);
			this->radio1->TabIndex = 0;
			this->radio1->TabStop = true;
			this->radio1->Text = L"计算机与通信工程学院";
			this->radio1->UseVisualStyleBackColor = true;
			// 
			// zy
			// 
			this->zy->Controls->Add(this->radiokj);
			this->zy->Controls->Add(this->radiojr);
			this->zy->Controls->Add(this->radiojz);
			this->zy->Controls->Add(this->radiotm);
			this->zy->Controls->Add(this->radiorj);
			this->zy->Controls->Add(this->radiowl);
			this->zy->Controls->Add(this->radiojsj);
			this->zy->Location = System::Drawing::Point(4, 22);
			this->zy->Name = L"zy";
			this->zy->Size = System::Drawing::Size(415, 77);
			this->zy->TabIndex = 4;
			this->zy->Text = L"专业";
			this->zy->UseVisualStyleBackColor = true;
			// 
			// radiokj
			// 
			this->radiokj->AutoSize = true;
			this->radiokj->Location = System::Drawing::Point(237, 55);
			this->radiokj->Name = L"radiokj";
			this->radiokj->Size = System::Drawing::Size(59, 16);
			this->radiokj->TabIndex = 6;
			this->radiokj->TabStop = true;
			this->radiokj->Text = L"会计学";
			this->radiokj->UseVisualStyleBackColor = true;
			// 
			// radiojr
			// 
			this->radiojr->AutoSize = true;
			this->radiojr->Location = System::Drawing::Point(104, 55);
			this->radiojr->Name = L"radiojr";
			this->radiojr->Size = System::Drawing::Size(59, 16);
			this->radiojr->TabIndex = 5;
			this->radiojr->TabStop = true;
			this->radiojr->Text = L"金融学";
			this->radiojr->UseVisualStyleBackColor = true;
			// 
			// radiojz
			// 
			this->radiojz->AutoSize = true;
			this->radiojz->Location = System::Drawing::Point(237, 33);
			this->radiojz->Name = L"radiojz";
			this->radiojz->Size = System::Drawing::Size(59, 16);
			this->radiojz->TabIndex = 4;
			this->radiojz->TabStop = true;
			this->radiojz->Text = L"建筑学";
			this->radiojz->UseVisualStyleBackColor = true;
			// 
			// radiotm
			// 
			this->radiotm->AutoSize = true;
			this->radiotm->Location = System::Drawing::Point(104, 33);
			this->radiotm->Name = L"radiotm";
			this->radiotm->Size = System::Drawing::Size(71, 16);
			this->radiotm->TabIndex = 3;
			this->radiotm->TabStop = true;
			this->radiotm->Text = L"土木工程";
			this->radiotm->UseVisualStyleBackColor = true;
			// 
			// radiorj
			// 
			this->radiorj->AutoSize = true;
			this->radiorj->Location = System::Drawing::Point(303, 11);
			this->radiorj->Name = L"radiorj";
			this->radiorj->Size = System::Drawing::Size(71, 16);
			this->radiorj->TabIndex = 2;
			this->radiorj->TabStop = true;
			this->radiorj->Text = L"软件工程";
			this->radiorj->UseVisualStyleBackColor = true;
			// 
			// radiowl
			// 
			this->radiowl->AutoSize = true;
			this->radiowl->Location = System::Drawing::Point(169, 11);
			this->radiowl->Name = L"radiowl";
			this->radiowl->Size = System::Drawing::Size(71, 16);
			this->radiowl->TabIndex = 1;
			this->radiowl->TabStop = true;
			this->radiowl->Text = L"网络工程";
			this->radiowl->UseVisualStyleBackColor = true;
			// 
			// radiojsj
			// 
			this->radiojsj->AutoSize = true;
			this->radiojsj->Location = System::Drawing::Point(3, 11);
			this->radiojsj->Name = L"radiojsj";
			this->radiojsj->Size = System::Drawing::Size(119, 16);
			this->radiojsj->TabIndex = 0;
			this->radiojsj->TabStop = true;
			this->radiojsj->Text = L"计算机与科学技术";
			this->radiojsj->UseVisualStyleBackColor = true;
			// 
			// math
			// 
			this->math->Controls->Add(this->textmath);
			this->math->Location = System::Drawing::Point(4, 22);
			this->math->Name = L"math";
			this->math->Size = System::Drawing::Size(415, 77);
			this->math->TabIndex = 5;
			this->math->Text = L"高等数学成绩";
			this->math->UseVisualStyleBackColor = true;
			// 
			// textmath
			// 
			this->textmath->Location = System::Drawing::Point(30, 28);
			this->textmath->Name = L"textmath";
			this->textmath->Size = System::Drawing::Size(347, 21);
			this->textmath->TabIndex = 0;
			// 
			// english
			// 
			this->english->Controls->Add(this->textenglish);
			this->english->Location = System::Drawing::Point(4, 22);
			this->english->Name = L"english";
			this->english->Size = System::Drawing::Size(415, 77);
			this->english->TabIndex = 6;
			this->english->Text = L"英语成绩";
			this->english->UseVisualStyleBackColor = true;
			// 
			// textenglish
			// 
			this->textenglish->Location = System::Drawing::Point(16, 23);
			this->textenglish->Name = L"textenglish";
			this->textenglish->Size = System::Drawing::Size(372, 21);
			this->textenglish->TabIndex = 0;
			// 
			// wuli
			// 
			this->wuli->Controls->Add(this->textwuli);
			this->wuli->Location = System::Drawing::Point(4, 22);
			this->wuli->Name = L"wuli";
			this->wuli->Size = System::Drawing::Size(415, 77);
			this->wuli->TabIndex = 7;
			this->wuli->Text = L"物理成绩";
			this->wuli->UseVisualStyleBackColor = true;
			// 
			// textwuli
			// 
			this->textwuli->Location = System::Drawing::Point(33, 27);
			this->textwuli->Name = L"textwuli";
			this->textwuli->Size = System::Drawing::Size(338, 21);
			this->textwuli->TabIndex = 0;
			// 
			// jsj
			// 
			this->jsj->Controls->Add(this->textjsj);
			this->jsj->Location = System::Drawing::Point(4, 22);
			this->jsj->Name = L"jsj";
			this->jsj->Size = System::Drawing::Size(415, 77);
			this->jsj->TabIndex = 8;
			this->jsj->Text = L"C++成绩";
			this->jsj->UseVisualStyleBackColor = true;
			// 
			// textjsj
			// 
			this->textjsj->Location = System::Drawing::Point(22, 25);
			this->textjsj->Name = L"textjsj";
			this->textjsj->Size = System::Drawing::Size(369, 21);
			this->textjsj->TabIndex = 0;
			// 
			// wl
			// 
			this->wl->Controls->Add(this->textwl);
			this->wl->Location = System::Drawing::Point(4, 22);
			this->wl->Name = L"wl";
			this->wl->Size = System::Drawing::Size(415, 77);
			this->wl->TabIndex = 9;
			this->wl->Text = L"网络工程设计成绩";
			this->wl->UseVisualStyleBackColor = true;
			// 
			// textwl
			// 
			this->textwl->Location = System::Drawing::Point(18, 28);
			this->textwl->Name = L"textwl";
			this->textwl->Size = System::Drawing::Size(378, 21);
			this->textwl->TabIndex = 0;
			// 
			// rj
			// 
			this->rj->Controls->Add(this->textrj);
			this->rj->Location = System::Drawing::Point(4, 22);
			this->rj->Name = L"rj";
			this->rj->Size = System::Drawing::Size(415, 77);
			this->rj->TabIndex = 10;
			this->rj->Text = L"软件工程成绩";
			this->rj->UseVisualStyleBackColor = true;
			// 
			// textrj
			// 
			this->textrj->Location = System::Drawing::Point(19, 27);
			this->textrj->Name = L"textrj";
			this->textrj->Size = System::Drawing::Size(373, 21);
			this->textrj->TabIndex = 0;
			// 
			// tm
			// 
			this->tm->Controls->Add(this->texttm);
			this->tm->Location = System::Drawing::Point(4, 22);
			this->tm->Name = L"tm";
			this->tm->Size = System::Drawing::Size(415, 77);
			this->tm->TabIndex = 11;
			this->tm->Text = L"工程力学成绩";
			this->tm->UseVisualStyleBackColor = true;
			// 
			// texttm
			// 
			this->texttm->Location = System::Drawing::Point(23, 28);
			this->texttm->Name = L"texttm";
			this->texttm->Size = System::Drawing::Size(363, 21);
			this->texttm->TabIndex = 0;
			// 
			// jz
			// 
			this->jz->Controls->Add(this->textjz);
			this->jz->Location = System::Drawing::Point(4, 22);
			this->jz->Name = L"jz";
			this->jz->Size = System::Drawing::Size(415, 77);
			this->jz->TabIndex = 12;
			this->jz->Text = L"工程测量成绩";
			this->jz->UseVisualStyleBackColor = true;
			// 
			// textjz
			// 
			this->textjz->Location = System::Drawing::Point(21, 31);
			this->textjz->Name = L"textjz";
			this->textjz->Size = System::Drawing::Size(364, 21);
			this->textjz->TabIndex = 0;
			// 
			// jr
			// 
			this->jr->Controls->Add(this->textjr);
			this->jr->Location = System::Drawing::Point(4, 22);
			this->jr->Name = L"jr";
			this->jr->Size = System::Drawing::Size(415, 77);
			this->jr->TabIndex = 13;
			this->jr->Text = L"金融学原理成绩";
			this->jr->UseVisualStyleBackColor = true;
			// 
			// textjr
			// 
			this->textjr->Location = System::Drawing::Point(19, 28);
			this->textjr->Name = L"textjr";
			this->textjr->Size = System::Drawing::Size(373, 21);
			this->textjr->TabIndex = 0;
			// 
			// kj
			// 
			this->kj->Controls->Add(this->textkj);
			this->kj->Location = System::Drawing::Point(4, 22);
			this->kj->Name = L"kj";
			this->kj->Size = System::Drawing::Size(415, 77);
			this->kj->TabIndex = 14;
			this->kj->Text = L"会计学原理成绩";
			this->kj->UseVisualStyleBackColor = true;
			// 
			// textkj
			// 
			this->textkj->Location = System::Drawing::Point(20, 30);
			this->textkj->Name = L"textkj";
			this->textkj->Size = System::Drawing::Size(373, 21);
			this->textkj->TabIndex = 0;
			// 
			// listnumber
			// 
			this->listnumber->ContextMenuStrip = this->contextMenuStrip1;
			this->listnumber->FormattingEnabled = true;
			this->listnumber->ItemHeight = 12;
			this->listnumber->Location = System::Drawing::Point(12, 183);
			this->listnumber->Name = L"listnumber";
			this->listnumber->Size = System::Drawing::Size(94, 160);
			this->listnumber->TabIndex = 1;
			this->listnumber->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listnumber_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(594, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &查询::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(473, 391);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &查询::button2_Click);
			// 
			// listname
			// 
			this->listname->ContextMenuStrip = this->contextMenuStrip1;
			this->listname->FormattingEnabled = true;
			this->listname->ItemHeight = 12;
			this->listname->Location = System::Drawing::Point(112, 183);
			this->listname->Name = L"listname";
			this->listname->Size = System::Drawing::Size(84, 160);
			this->listname->TabIndex = 4;
			this->listname->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listname_SelectedIndexChanged);
			// 
			// listsex
			// 
			this->listsex->ContextMenuStrip = this->contextMenuStrip1;
			this->listsex->FormattingEnabled = true;
			this->listsex->ItemHeight = 12;
			this->listsex->Location = System::Drawing::Point(202, 183);
			this->listsex->Name = L"listsex";
			this->listsex->Size = System::Drawing::Size(20, 160);
			this->listsex->TabIndex = 5;
			this->listsex->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listsex_SelectedIndexChanged);
			// 
			// listxy
			// 
			this->listxy->ContextMenuStrip = this->contextMenuStrip1;
			this->listxy->FormattingEnabled = true;
			this->listxy->ItemHeight = 12;
			this->listxy->Location = System::Drawing::Point(228, 183);
			this->listxy->Name = L"listxy";
			this->listxy->Size = System::Drawing::Size(129, 160);
			this->listxy->TabIndex = 6;
			this->listxy->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listxy_SelectedIndexChanged);
			// 
			// listzy
			// 
			this->listzy->ContextMenuStrip = this->contextMenuStrip1;
			this->listzy->FormattingEnabled = true;
			this->listzy->ItemHeight = 12;
			this->listzy->Location = System::Drawing::Point(365, 183);
			this->listzy->Name = L"listzy";
			this->listzy->Size = System::Drawing::Size(113, 160);
			this->listzy->TabIndex = 7;
			this->listzy->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listzy_SelectedIndexChanged);
			// 
			// listmath
			// 
			this->listmath->ContextMenuStrip = this->contextMenuStrip1;
			this->listmath->FormattingEnabled = true;
			this->listmath->ItemHeight = 12;
			this->listmath->Location = System::Drawing::Point(484, 183);
			this->listmath->Name = L"listmath";
			this->listmath->Size = System::Drawing::Size(48, 160);
			this->listmath->TabIndex = 8;
			this->listmath->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listmath_SelectedIndexChanged);
			// 
			// listenglish
			// 
			this->listenglish->ContextMenuStrip = this->contextMenuStrip1;
			this->listenglish->FormattingEnabled = true;
			this->listenglish->ItemHeight = 12;
			this->listenglish->Location = System::Drawing::Point(538, 183);
			this->listenglish->Name = L"listenglish";
			this->listenglish->Size = System::Drawing::Size(50, 160);
			this->listenglish->TabIndex = 9;
			this->listenglish->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listenglish_SelectedIndexChanged);
			// 
			// listwuli
			// 
			this->listwuli->ContextMenuStrip = this->contextMenuStrip1;
			this->listwuli->FormattingEnabled = true;
			this->listwuli->ItemHeight = 12;
			this->listwuli->Location = System::Drawing::Point(594, 183);
			this->listwuli->Name = L"listwuli";
			this->listwuli->Size = System::Drawing::Size(49, 160);
			this->listwuli->TabIndex = 10;
			this->listwuli->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listwuli_SelectedIndexChanged);
			// 
			// listother
			// 
			this->listother->ContextMenuStrip = this->contextMenuStrip1;
			this->listother->FormattingEnabled = true;
			this->listother->ItemHeight = 12;
			this->listother->Location = System::Drawing::Point(649, 183);
			this->listother->Name = L"listother";
			this->listother->Size = System::Drawing::Size(119, 160);
			this->listother->TabIndex = 11;
			this->listother->SelectedIndexChanged += gcnew System::EventHandler(this, &查询::listother_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(322, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 21);
			this->label1->TabIndex = 12;
			this->label1->Text = L"查询系统";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"学号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(109, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"姓名";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(186, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"性别";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(225, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"学院";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(362, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"专业";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(484, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"高数";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(535, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"英语";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(591, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"物理";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(211, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 39);
			this->button3->TabIndex = 21;
			this->button3->Text = L"删除";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &查询::button3_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->删除ToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 26);
			// 
			// 删除ToolStripMenuItem
			// 
			this->删除ToolStripMenuItem->Name = L"删除ToolStripMenuItem";
			this->删除ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->删除ToolStripMenuItem->Text = L"删除";
			this->删除ToolStripMenuItem->Click += gcnew System::EventHandler(this, &查询::删除ToolStripMenuItem_Click);
			// 
			// 查询
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 444);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listother);
			this->Controls->Add(this->listwuli);
			this->Controls->Add(this->listenglish);
			this->Controls->Add(this->listmath);
			this->Controls->Add(this->listzy);
			this->Controls->Add(this->listxy);
			this->Controls->Add(this->listsex);
			this->Controls->Add(this->listname);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listnumber);
			this->Controls->Add(this->tabControl1);
			this->Name = L"查询";
			this->Text = L"查询";
			this->tabControl1->ResumeLayout(false);
			this->number->ResumeLayout(false);
			this->number->PerformLayout();
			this->name->ResumeLayout(false);
			this->name->PerformLayout();
			this->sex->ResumeLayout(false);
			this->sex->PerformLayout();
			this->xy->ResumeLayout(false);
			this->xy->PerformLayout();
			this->zy->ResumeLayout(false);
			this->zy->PerformLayout();
			this->math->ResumeLayout(false);
			this->math->PerformLayout();
			this->english->ResumeLayout(false);
			this->english->PerformLayout();
			this->wuli->ResumeLayout(false);
			this->wuli->PerformLayout();
			this->jsj->ResumeLayout(false);
			this->jsj->PerformLayout();
			this->wl->ResumeLayout(false);
			this->wl->PerformLayout();
			this->rj->ResumeLayout(false);
			this->rj->PerformLayout();
			this->tm->ResumeLayout(false);
			this->tm->PerformLayout();
			this->jz->ResumeLayout(false);
			this->jz->PerformLayout();
			this->jr->ResumeLayout(false);
			this->jr->PerformLayout();
			this->kj->ResumeLayout(false);
			this->kj->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^readEng=gcnew StreamReader("c:\\成绩管理系统.txt");
			 String^EngData=gcnew String("");
			 int sum=0;
			 array<String^>^record;
			 listnumber->Items->Clear();
			 listname->Items->Clear();
			 listsex->Items->Clear();
			 listxy->Items->Clear();
			 listzy->Items->Clear();
			 listmath->Items->Clear();
			 listenglish->Items->Clear();
			 listwuli->Items->Clear();
			 listother->Items->Clear();
			 if(tabControl1->SelectedIndex==0)
			 { if(textnumber->Text->Trim()==""){MessageBox::Show("学号不能为空");goto begin;}
				 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[0]==textnumber->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();

			 }
			 else if(tabControl1->SelectedIndex==1)
			 { if(textname->Text->Trim()==""){MessageBox::Show("姓名不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[1]==textname->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==2)
			 {	String^SEX=gcnew String("");
			 if(radioboy->Checked)SEX="男";
			 else if(radiogirl->Checked)SEX="女";
			 else {MessageBox::Show("未选择性别");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[2]==SEX){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==3)
			 { String^XY=gcnew String("");
			 if(radio1->Checked)XY=radio1->Text;
			 else if(radio2->Checked)XY=radio2->Text;
			 else if(radio3->Checked)XY=radio3->Text;
			 else {MessageBox::Show("未选择学院");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[3]==XY){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==4)
			 {String^ZY=gcnew String("");
			 if(radiojsj->Checked)ZY=radiojsj->Text;
			 else if(radiowl->Checked)ZY=radiowl->Text;
			 else if(radiorj->Checked)ZY=radiorj->Text;
			 else if(radiotm->Checked)ZY=radiotm->Text;
			 else if(radiojz->Checked)ZY=radiojz->Text;
			 else if(radiojr->Checked)ZY=radiojr->Text;
			 else if(radiokj->Checked)ZY=radiokj->Text;
			 else {MessageBox::Show("未选择专业");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[4]==ZY){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==5)
			 { if(textmath->Text->Trim()==""){MessageBox::Show("高数成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[5]==textmath->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==6)
			 {if(textenglish->Text->Trim()==""){MessageBox::Show("英语成绩不能未空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[6]==textenglish->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==7)
			 {if(textwuli->Text->Trim()==""){MessageBox::Show("物理成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[7]==textwuli->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==8)
			 {if(textjsj->Text->Trim()==""){MessageBox::Show("C++成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="C++成绩"&&record[9]==textjsj->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==9)
			 {if(textwl->Text->Trim()==""){MessageBox::Show("网络工程设计成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="网络工程设计成绩"&&record[9]==textwl->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==10)
			 {if(textrj->Text->Trim()==""){MessageBox::Show("软件工程成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="软件工程成绩"&&record[9]==textrj->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==11)
			 {if(texttm->Text->Trim()==""){MessageBox::Show("工程力学成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="工程力学成绩"&&record[9]==texttm->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==12)
			 {if(textjz->Text->Trim()==""){MessageBox::Show("工程测量成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="工程测量成绩"&&record[9]==textjz->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==13)
			 {if(textjr->Text->Trim()==""){MessageBox::Show("金融学原理成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="金融学原理成绩"&&record[9]==textjr->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
			 else if(tabControl1->SelectedIndex==14)
			 {if(textkj->Text->Trim()==""){MessageBox::Show("会计学成绩不能为空");goto begin;}
			 	 while(readEng->Peek()>=0){
				 EngData=readEng->ReadLine();
				 record=EngData->Split(',');
				 if(record[8]=="会计学原理成绩"&&record[9]==textkj->Text){listnumber->Items->Add(record[0]);listname->Items->Add(record[1]);listsex->Items->Add(record[2]);listxy->Items->Add(record[3]);listzy->Items->Add(record[4]);listmath->Items->Add(record[5]);listenglish->Items->Add(record[6]);listwuli->Items->Add(record[7]);listother->Items->Add(record[8]+":"+record[9]);sum++;}
				 }
				 if(sum==0)MessageBox::Show("查无此人");
				 readEng->Close();
			 }
begin:textnumber->Text="";
			 textname->Text="";
			 textmath->Text="";
			 textenglish->Text="";
			 textwuli->Text="";
			 textjsj->Text="";
			 textwl->Text="";
			 textrj->Text="";
			 texttm->Text="";
			 textjz->Text="";
			 textjr->Text="";
			 textkj->Text="";
		 }
private: System::Void listnumber_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listname->SelectedIndex=listnumber->SelectedIndex;
				 listsex->SelectedIndex=listnumber->SelectedIndex;
				 listxy->SelectedIndex=listnumber->SelectedIndex;
				 listzy->SelectedIndex=listnumber->SelectedIndex;
				 listmath->SelectedIndex=listnumber->SelectedIndex;
				 listenglish->SelectedIndex=listnumber->SelectedIndex;
				 listwuli->SelectedIndex=listnumber->SelectedIndex;
				 listother->SelectedIndex=listnumber->SelectedIndex;
		 }
private: System::Void listname_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 	listnumber->SelectedIndex=listname->SelectedIndex;
				 listsex->SelectedIndex=listname->SelectedIndex;
				 listxy->SelectedIndex=listname->SelectedIndex;
				 listzy->SelectedIndex=listname->SelectedIndex;
				 listmath->SelectedIndex=listname->SelectedIndex;
				 listenglish->SelectedIndex=listname->SelectedIndex;
				 listwuli->SelectedIndex=listname->SelectedIndex;
				 listother->SelectedIndex=listname->SelectedIndex;
		 }
private: System::Void listsex_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listnumber->SelectedIndex=listsex->SelectedIndex;
				 listname->SelectedIndex=listsex->SelectedIndex;
				 listxy->SelectedIndex=listsex->SelectedIndex;
				 listzy->SelectedIndex=listsex->SelectedIndex;
				 listmath->SelectedIndex=listsex->SelectedIndex;
				 listenglish->SelectedIndex=listsex->SelectedIndex;
				 listwuli->SelectedIndex=listsex->SelectedIndex;
				 listother->SelectedIndex=listsex->SelectedIndex;
		 }
private: System::Void listxy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 	 listname->SelectedIndex=listxy->SelectedIndex;
				 listsex->SelectedIndex=listxy->SelectedIndex;
				 listnumber->SelectedIndex=listxy->SelectedIndex;
				 listzy->SelectedIndex=listxy->SelectedIndex;
				 listmath->SelectedIndex=listxy->SelectedIndex;
				 listenglish->SelectedIndex=listxy->SelectedIndex;
				 listwuli->SelectedIndex=listxy->SelectedIndex;
				 listother->SelectedIndex=listxy->SelectedIndex;
		 }
private: System::Void listzy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  listname->SelectedIndex=listzy->SelectedIndex;
				 listsex->SelectedIndex=listzy->SelectedIndex;
				 listxy->SelectedIndex=listzy->SelectedIndex;
				 listnumber->SelectedIndex=listzy->SelectedIndex;
				 listmath->SelectedIndex=listzy->SelectedIndex;
				 listenglish->SelectedIndex=listzy->SelectedIndex;
				 listwuli->SelectedIndex=listzy->SelectedIndex;
				 listother->SelectedIndex=listzy->SelectedIndex;
		 }
private: System::Void listmath_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  listname->SelectedIndex=listmath->SelectedIndex;
				 listsex->SelectedIndex=listmath->SelectedIndex;
				 listxy->SelectedIndex=listmath->SelectedIndex;
				 listzy->SelectedIndex=listmath->SelectedIndex;
				 listnumber->SelectedIndex=listmath->SelectedIndex;
				 listenglish->SelectedIndex=listmath->SelectedIndex;
				 listwuli->SelectedIndex=listmath->SelectedIndex;
				 listother->SelectedIndex=listmath->SelectedIndex;
		 }
private: System::Void listenglish_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  listname->SelectedIndex=listenglish->SelectedIndex;
				 listsex->SelectedIndex=listenglish->SelectedIndex;
				 listxy->SelectedIndex=listenglish->SelectedIndex;
				 listzy->SelectedIndex=listenglish->SelectedIndex;
				 listmath->SelectedIndex=listenglish->SelectedIndex;
				 listnumber->SelectedIndex=listenglish->SelectedIndex;
				 listwuli->SelectedIndex=listenglish->SelectedIndex;
				 listother->SelectedIndex=listenglish->SelectedIndex;
		 }
private: System::Void listwuli_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 	 listname->SelectedIndex=listwuli->SelectedIndex;
				 listsex->SelectedIndex=listwuli->SelectedIndex;
				 listxy->SelectedIndex=listwuli->SelectedIndex;
				 listzy->SelectedIndex=listwuli->SelectedIndex;
				 listmath->SelectedIndex=listwuli->SelectedIndex;
				 listenglish->SelectedIndex=listwuli->SelectedIndex;
				 listnumber->SelectedIndex=listwuli->SelectedIndex;
				 listother->SelectedIndex=listwuli->SelectedIndex;
		 }
private: System::Void listother_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  listname->SelectedIndex=listother->SelectedIndex;
				 listsex->SelectedIndex=listother->SelectedIndex;
				 listxy->SelectedIndex=listother->SelectedIndex;
				 listzy->SelectedIndex=listother->SelectedIndex;
				 listmath->SelectedIndex=listother->SelectedIndex;
				 listenglish->SelectedIndex=listother->SelectedIndex;
				 listwuli->SelectedIndex=listother->SelectedIndex;
				 listnumber->SelectedIndex=listother->SelectedIndex;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listname->SelectedIndex!=-1){
			 if(MessageBox::Show("确定是否删除该信息?","删除提示",MessageBoxButtons::OKCancel,MessageBoxIcon::Warning)==System::Windows::Forms::DialogResult::OK){
			int i=listnumber->SelectedIndex;
			String^expnumber=gcnew String(listnumber->GetItemText(listnumber->SelectedItem));
			String^expname=gcnew String(listname->GetItemText(listname->SelectedItem));
			String^expsex=gcnew String(listsex->GetItemText(listsex->SelectedItem));
			String^expxy=gcnew String(listxy->GetItemText(listxy->SelectedItem));
			String^expzy=gcnew String(listzy->GetItemText(listzy->SelectedItem));
			String^expmath=gcnew String(listmath->GetItemText(listmath->SelectedItem));
			String^expenglish=gcnew String(listenglish->GetItemText(listenglish->SelectedItem));
			String^expwuli=gcnew String(listwuli->GetItemText(listwuli->SelectedItem));
			String^expother=gcnew String(listother->GetItemText(listother->SelectedItem));
			array<String^>^expOther;
			expOther=expother->Split(':');
			StreamReader^readEng=gcnew StreamReader("c:\\成绩管理系统.txt");
			StreamWriter^writeEng=gcnew StreamWriter("c:\\成绩管理系统改.txt");
			String^DataEng=gcnew String("");
			array<String^>^record;
			while(readEng->Peek()>=0){
			DataEng=readEng->ReadLine();
			record=DataEng->Split(',');
			if(expnumber==record[0]&&expname==record[1]&&expsex==record[2]&&expxy==record[3]&&expzy==record[4]&&expmath==record[5]&&expenglish==record[6]&&expwuli==record[7]&&expOther[0]==record[8]&&expOther[1]==record[9]){}
			else {
				String^log=gcnew String("");
			log+=record[0]+","+record[1]+","+record[2]+","+record[3]+","+record[4]+","+record[5]+","+record[6]+","+record[7]+","+record[8]+","+record[9];
			writeEng->WriteLine(log);
			writeEng->Flush();
			}
			}
			writeEng->Close();
			readEng->Close();
			File::Replace("c:\\成绩管理系统改.txt","c:\\成绩管理系统.txt","c:\\备份信息.txt");
			if(File::Exists("c:\\备份信息.txt"))
				File::Delete("c:\\备份信息.txt");
			 listnumber->Items->RemoveAt(i);
			 listname->Items->RemoveAt(i);
			 listsex->Items->RemoveAt(i);
			 listxy->Items->RemoveAt(i);
			 listzy->Items->RemoveAt(i);
			 listmath->Items->RemoveAt(i);
			 listenglish->Items->RemoveAt(i);
			 listwuli->Items->RemoveAt(i);
			 listother->Items->RemoveAt(i);}
			 }
			 
			 else MessageBox::Show("未选择要删除的信息");
			 }
		
private: System::Void 删除ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listname->SelectedIndex!=-1){
			 if(MessageBox::Show("确定是否删除该信息?","删除提示",MessageBoxButtons::OKCancel,MessageBoxIcon::Warning)==System::Windows::Forms::DialogResult::OK){
			int i=listnumber->SelectedIndex;
			String^expnumber=gcnew String(listnumber->GetItemText(listnumber->SelectedItem));
			String^expname=gcnew String(listname->GetItemText(listname->SelectedItem));
			String^expsex=gcnew String(listsex->GetItemText(listsex->SelectedItem));
			String^expxy=gcnew String(listxy->GetItemText(listxy->SelectedItem));
			String^expzy=gcnew String(listzy->GetItemText(listzy->SelectedItem));
			String^expmath=gcnew String(listmath->GetItemText(listmath->SelectedItem));
			String^expenglish=gcnew String(listenglish->GetItemText(listenglish->SelectedItem));
			String^expwuli=gcnew String(listwuli->GetItemText(listwuli->SelectedItem));
			String^expother=gcnew String(listother->GetItemText(listother->SelectedItem));
			array<String^>^expOther;
			expOther=expother->Split(':');
			StreamReader^readEng=gcnew StreamReader("c:\\成绩管理系统.txt");
			StreamWriter^writeEng=gcnew StreamWriter("c:\\成绩管理系统改.txt");
			String^DataEng=gcnew String("");
			array<String^>^record;
			while(readEng->Peek()>=0){
			DataEng=readEng->ReadLine();
			record=DataEng->Split(',');
			if(expnumber==record[0]&&expname==record[1]&&expsex==record[2]&&expxy==record[3]&&expzy==record[4]&&expmath==record[5]&&expenglish==record[6]&&expwuli==record[7]&&expOther[0]==record[8]&&expOther[1]==record[9]){}
			else {
				String^log=gcnew String("");
			log+=record[0]+","+record[1]+","+record[2]+","+record[3]+","+record[4]+","+record[5]+","+record[6]+","+record[7]+","+record[8]+","+record[9];
			writeEng->WriteLine(log);
			writeEng->Flush();
			}
			}
			writeEng->Close();
			readEng->Close();
			File::Replace("c:\\成绩管理系统改.txt","c:\\成绩管理系统.txt","c:\\备份信息.txt");
			if(File::Exists("c:\\备份信息.txt"))
				File::Delete("c:\\备份信息.txt");
			 listnumber->Items->RemoveAt(i);
			 listname->Items->RemoveAt(i);
			 listsex->Items->RemoveAt(i);
			 listxy->Items->RemoveAt(i);
			 listzy->Items->RemoveAt(i);
			 listmath->Items->RemoveAt(i);
			 listenglish->Items->RemoveAt(i);
			 listwuli->Items->RemoveAt(i);
			 listother->Items->RemoveAt(i);}
			 }
			 
			 else MessageBox::Show("未选择要删除的信息");
		 }
};
}
