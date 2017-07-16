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
	/// 浏览 摘要
	/// </summary>
	public ref class 浏览 : public System::Windows::Forms::Form
	{
	public:
		浏览(void)
		{
			InitializeComponent();
			 StreamReader^readEng=gcnew StreamReader("c:\\成绩管理系统.txt");
			 String^EngData=gcnew String("");
			 String^student=gcnew String("");
			 if(readEng->Peek()<0)MessageBox::Show("无信息");
			 array<String^>^record;
			 while(readEng->Peek()>=0){
			 EngData=readEng->ReadLine();
			 record=EngData->Split(',');
			 listnumber->Items->Add(record[0]);
			 listname->Items->Add(record[1]);
			 listsex->Items->Add(record[2]);
			 listxy->Items->Add(record[3]);
			 listzy->Items->Add(record[4]);
			 listmath->Items->Add(record[5]);
			 listenglish->Items->Add(record[6]);
			 listwuli->Items->Add(record[7]);
			 listother->Items->Add(record[8]+":"+record[9]);
			 }

			 readEng->Close();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~浏览()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listnumber;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listname;
	private: System::Windows::Forms::ListBox^  listsex;
	private: System::Windows::Forms::ListBox^  listxy;
	private: System::Windows::Forms::ListBox^  listzy;
	private: System::Windows::Forms::ListBox^  listmath;
	private: System::Windows::Forms::ListBox^  listenglish;
	private: System::Windows::Forms::ListBox^  listwuli;
	private: System::Windows::Forms::ListBox^  listother;








	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
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
			this->listnumber = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listname = (gcnew System::Windows::Forms::ListBox());
			this->listsex = (gcnew System::Windows::Forms::ListBox());
			this->listxy = (gcnew System::Windows::Forms::ListBox());
			this->listzy = (gcnew System::Windows::Forms::ListBox());
			this->listmath = (gcnew System::Windows::Forms::ListBox());
			this->listenglish = (gcnew System::Windows::Forms::ListBox());
			this->listwuli = (gcnew System::Windows::Forms::ListBox());
			this->listother = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->删除ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listnumber
			// 
			this->listnumber->ContextMenuStrip = this->contextMenuStrip1;
			this->listnumber->FormattingEnabled = true;
			this->listnumber->ItemHeight = 12;
			this->listnumber->Location = System::Drawing::Point(12, 65);
			this->listnumber->Name = L"listnumber";
			this->listnumber->Size = System::Drawing::Size(123, 244);
			this->listnumber->TabIndex = 0;
			this->listnumber->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listnumber_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(562, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"退出";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &浏览::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(394, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"成绩浏览系统";
			// 
			// listname
			// 
			this->listname->ContextMenuStrip = this->contextMenuStrip1;
			this->listname->FormattingEnabled = true;
			this->listname->ItemHeight = 12;
			this->listname->Location = System::Drawing::Point(141, 65);
			this->listname->Name = L"listname";
			this->listname->Size = System::Drawing::Size(85, 244);
			this->listname->TabIndex = 3;
			this->listname->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listname_SelectedIndexChanged);
			// 
			// listsex
			// 
			this->listsex->ContextMenuStrip = this->contextMenuStrip1;
			this->listsex->FormattingEnabled = true;
			this->listsex->ItemHeight = 12;
			this->listsex->Location = System::Drawing::Point(232, 65);
			this->listsex->Name = L"listsex";
			this->listsex->Size = System::Drawing::Size(26, 244);
			this->listsex->TabIndex = 4;
			this->listsex->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listsex_SelectedIndexChanged);
			// 
			// listxy
			// 
			this->listxy->ContextMenuStrip = this->contextMenuStrip1;
			this->listxy->FormattingEnabled = true;
			this->listxy->ItemHeight = 12;
			this->listxy->Location = System::Drawing::Point(264, 65);
			this->listxy->Name = L"listxy";
			this->listxy->Size = System::Drawing::Size(138, 244);
			this->listxy->TabIndex = 5;
			this->listxy->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listxy_SelectedIndexChanged);
			// 
			// listzy
			// 
			this->listzy->ContextMenuStrip = this->contextMenuStrip1;
			this->listzy->FormattingEnabled = true;
			this->listzy->ItemHeight = 12;
			this->listzy->Location = System::Drawing::Point(408, 65);
			this->listzy->Name = L"listzy";
			this->listzy->Size = System::Drawing::Size(124, 244);
			this->listzy->TabIndex = 6;
			this->listzy->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listzy_SelectedIndexChanged);
			// 
			// listmath
			// 
			this->listmath->ContextMenuStrip = this->contextMenuStrip1;
			this->listmath->FormattingEnabled = true;
			this->listmath->ItemHeight = 12;
			this->listmath->Location = System::Drawing::Point(538, 65);
			this->listmath->Name = L"listmath";
			this->listmath->Size = System::Drawing::Size(92, 244);
			this->listmath->TabIndex = 7;
			this->listmath->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listmath_SelectedIndexChanged);
			// 
			// listenglish
			// 
			this->listenglish->ContextMenuStrip = this->contextMenuStrip1;
			this->listenglish->FormattingEnabled = true;
			this->listenglish->ItemHeight = 12;
			this->listenglish->Location = System::Drawing::Point(636, 65);
			this->listenglish->Name = L"listenglish";
			this->listenglish->Size = System::Drawing::Size(92, 244);
			this->listenglish->TabIndex = 8;
			this->listenglish->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listenglish_SelectedIndexChanged);
			// 
			// listwuli
			// 
			this->listwuli->ContextMenuStrip = this->contextMenuStrip1;
			this->listwuli->FormattingEnabled = true;
			this->listwuli->ItemHeight = 12;
			this->listwuli->Location = System::Drawing::Point(734, 66);
			this->listwuli->Name = L"listwuli";
			this->listwuli->Size = System::Drawing::Size(94, 244);
			this->listwuli->TabIndex = 9;
			this->listwuli->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listwuli_SelectedIndexChanged);
			// 
			// listother
			// 
			this->listother->ContextMenuStrip = this->contextMenuStrip1;
			this->listother->FormattingEnabled = true;
			this->listother->ItemHeight = 12;
			this->listother->Location = System::Drawing::Point(834, 66);
			this->listother->Name = L"listother";
			this->listother->Size = System::Drawing::Size(145, 244);
			this->listother->TabIndex = 10;
			this->listother->SelectedIndexChanged += gcnew System::EventHandler(this, &浏览::listother_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"学号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(138, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"姓名";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(229, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"性别";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(264, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"学院";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(408, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"专业";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(535, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"高数成绩";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(633, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"英语成绩";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(734, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"物理成绩";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 45);
			this->button2->TabIndex = 19;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &浏览::button2_Click);
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
			this->删除ToolStripMenuItem->Click += gcnew System::EventHandler(this, &浏览::删除ToolStripMenuItem_Click);
			// 
			// 浏览
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 464);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listother);
			this->Controls->Add(this->listwuli);
			this->Controls->Add(this->listenglish);
			this->Controls->Add(this->listmath);
			this->Controls->Add(this->listzy);
			this->Controls->Add(this->listxy);
			this->Controls->Add(this->listsex);
			this->Controls->Add(this->listname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listnumber);
			this->Controls->Add(this->button1);
			this->Name = L"浏览";
			this->Text = L"浏览";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
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
