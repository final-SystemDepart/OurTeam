#pragma once
#include"node.h"
#include"student.h"
class linkedlist
{
private:
	node *head;
public:
	
	linkedlist()
	{
		head=new node;
		head->next=NULL;
	}

	~linkedlist()
	{
		node *p =head;
		while(p!=NULL)
		{
			node *temp=p;
			p=p->next;			
			delete temp;
		}
	}
	



	void newstudent()
	{
		node *pTail=head;
		int num;
		long long student_id;
		int age,grade;
		double terminal_score;
		string name,sex,clas,major;

		cout<<"请输入需要存储学生的人数:";
		cin>>num;

		for(int i=1;i<=num;i++)
		{
			node *pNew=new node;

			cout<<"输入学号：";cin>>student_id;
			cout<<"输入姓名：";cin>>name;
			cout<<"输入性别：";cin>>sex;
			cout<<"输入年龄：";cin>>age;
			cout<<"输入专业：";cin>>major;
			cout<<"输入年级：";cin>>grade;
			cout<<"输入班级：";cin>>clas;
			cout<<"输入期末成绩：";cin>>terminal_score;

			pNew->st.setname(name);
			pNew->st.setage(age);
			pNew->st.setsid(student_id);
			pNew->st.setgrade(grade);
			pNew->st.setsex(sex);
			pNew->st.setmajor(major);
			pNew->st.setclass(clas);
			pNew->st.setterminalscore(terminal_score);

			pTail->next=pNew;
			pTail=pNew;
			pTail->next=NULL;
		}

		cout<<"成功的向程序中输入了"<<num<<"个学生的信息"<<endl;
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}



	void addstudent()
	{		
		long long student_id;
		int age,grade;
		double terminal_score;
		string name,sex,clas,major;
		node *p =head;
		node *pNew,*ptail=new node;;
		while(p!=NULL)
		{
			pNew=p;
			p=p->next; 
		}
		pNew->next=ptail; 
		ptail->next=NULL; 

		cout<<"输入学号：";cin>>student_id;
		cout<<"输入姓名：";cin>>name;
		cout<<"输入性别：";cin>>sex;
		cout<<"输入年龄：";cin>>age;
		cout<<"输入专业：";cin>>major;
		cout<<"输入年级：";cin>>grade;
		cout<<"输入班级：";cin>>clas;
		cout<<"输入期末成绩：";cin>>terminal_score;

		ptail->st.setname(name);
		ptail->st.setage(age);
		ptail->st.setsid(student_id);
		ptail->st.setgrade(grade);
		ptail->st.setsex(sex);
		ptail->st.setmajor(major);
		ptail->st.setclass(clas);
		ptail->st.setterminalscore(terminal_score);
				
		cout<<"成功的向程序中加入了1个学生的信息"<<endl;
					
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}

	void changestudent()
	{
		node *p =head;
		long long student_id;
		int flag = 0;
		cout<<"请输入你需要修改的学生的学号:";
		cin>>student_id;
		while(p!=NULL)
		{
			if(student_id==p->st.getsid())
			{
				flag+=1;

				long long student_id;
				int age,grade;
				double terminal_score;
				string name,sex,clas,major;

				cout<<"输入学号：";cin>>student_id;
				cout<<"输入姓名：";cin>>name;
				cout<<"输入性别：";cin>>sex;
				cout<<"输入年龄：";cin>>age;
				cout<<"输入专业：";cin>>major;
				cout<<"输入年级：";cin>>grade;
				cout<<"输入班级：";cin>>clas;
				cout<<"输入期末成绩：";cin>>terminal_score;
				

				p->st.setname(name);
				p->st.setage(age);
				p->st.setsid(student_id);
				p->st.setgrade(grade);
				p->st.setsex(sex);
				p->st.setmajor(major);
				p->st.setclass(clas);
				p->st.setterminalscore(terminal_score);

				cout<<"修改完成！"<<endl;
				break;
			}

			p=p->next;
		}

		if(flag==0)
		{
			cout<<"没找到你需要修改的学生信息!"<<endl;
			return;
		}
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}


	void searchstudent()
	{
		node *p =head;
		long long student_id;
		int flag = 0;
		cout<<"请输入你需要查找的学生的学号:";
		cin>>student_id;
		while(p!=NULL)
		{
			if(student_id==p->st.getsid())
			{
				flag+=1;
				cout<<"姓名："<<p->st.getname()<<endl;
				cout<<"性别："<<p->st.getsex()<<endl;
				cout<<"年龄："<<p->st.getage()<<endl;
				cout<<"专业："<<p->st.getmajor()<<endl;
				cout<<"年级："<<p->st.getgrade()<<endl;
				cout<<"班级："<<p->st.getclass()<<endl;
				cout<<"期末成绩："<<p->st.getterminalscore()<<endl;
				break;
			}

			p=p->next;
		}

		if(flag==0)
		{
			cout<<"没找到你需要修改的学生信息!"<<endl;
			return;
		}
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}

	

	void deletestudent()
	{
		node *p =head,*pnew;
		long long student_id;
		int flag=0;
		cout<<"请输入你需要删除的学生的学号:";
		cin>>student_id;
		while(student_id!=p->st.getsid())
		{
			pnew=p;
			if(p->next==NULL)
			{
				flag=0;
				break;
			}
			p=p->next;	
			flag++;
		}
		if(flag!=0)
		{
			pnew->next=p->next;
			free(p);
			cout<<"删除成功！"<<endl;
		}
		if(flag==0)
		{
			cout<<"没找到你需要删除的学生!"<<endl;
			return;
		}
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}


	void sortstudents()
	{
		node *p,*q;
		node temp;
		cout<<"按学号还是按分数排序？（学号x,分数f）";
		char a;
		cin>>a;
		if(a=='x')
		{
			for(p=head;p!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
				{
					if(p->st.getsid()>q->st.getsid())
					{
						temp.st=p->st;
						p->st=q->st;
						q->st=temp.st;
					}
				}
			}
		}
		if(a=='f')
		{
			for(p=head;p!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
				{
					if(p->st.getterminalscore()>q->st.getterminalscore())
					{
						temp.st=p->st;
						p->st=q->st;
						q->st=temp.st;
					}
				}
			}
		}
		cout<<"排序完成！"<<endl;
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}


	void showallstudents()
	{
		node *p=head;
		cout<<"==============================================================================="<<endl;
		cout<<"|     学号     |  姓名  |性别|年龄|     专业     |年级|     班级     |期末成绩|"<<endl;
		cout<<"==============================================================================="<<endl;
		while(p!=NULL)
		{	
			if(p->st.getsid()==0)
				{p=p->next;continue;}

			cout<<"|"<<setw(14)<<p->st.getsid()
				<<"|"<<setw(8)<<p->st.getname()
				<<"|"<<setw(4)<<p->st.getsex()
				<<"|"<<setw(4)<<p->st.getage()
				<<"|"<<setw(14)<<p->st.getmajor()
				<<"|"<<setw(4)<<p->st.getgrade()
				<<"|"<<setw(14)<<p->st.getclass()
				<<"|"<<setw(8)<<p->st.getterminalscore()
				<<"|"<<endl;
			cout<<"==============================================================================="<<endl;
			p=p->next;
		}
		cout<<"按任意键继续"<<endl;
		system("pause");
		system("cls");
	}
		
};

