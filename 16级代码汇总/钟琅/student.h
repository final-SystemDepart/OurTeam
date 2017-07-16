#pragma once
#include<string>
#include<iostream>
using namespace std;

class student
{
private:
	long long student_id;
	int age,grade;
	double terminal_score;
	string name,sex,clas,major;
public:
	student()
		{
			student_id=0;age=0;grade=0;terminal_score=0;name=" ";sex=" ";clas=" ";major=" ";
		}

	student(long long sid,int a,int g,double t,string n,string s,string c,string m)
		{
			student_id=sid;age=a;grade=g;terminal_score=t;name=n;sex=s;clas=c;major=m;
		}

	student(student &p)
		{
			student_id=p.student_id;
			age=p.age;
			grade=p.grade;
			terminal_score=p.terminal_score;
			name=p.name;
			sex=p.sex;
			clas=p.clas;
			major=p.major;
		}	






	 void setname(string N)
		 {
			 name = N;
		 }

	void setage(int A)
		{
			age = A;
		}

	void setsid(long long sid)
		{
			student_id=sid;
		}

	void setgrade(int g)
		{
			grade=g;
		}

	void setterminalscore(double t)
		{
			terminal_score=t;
		}		

	void setsex(string s)
		{
			sex=s;
		}

	void setclass(string c)
		{
			clas=c;
		}

	void setmajor(string m)
		{
			major=m;
		}







	string getname()
		 {
			 return name;
		 }

	int getage()
		{
			return age;
		}

	long long getsid()
		{
			return student_id;
		}

	int getgrade()
		{
			return grade;
		}

	double getterminalscore()
		{
			return terminal_score;
		}

	string getsex()
		{
			return sex;
		}

	string getclass()
		{
			return clas;
		}

	string getmajor()
		{
			return major;
		}





	student operator=(student &p)
		{
			student_id=p.student_id;
			age=p.age;
			grade=p.grade;
			terminal_score=p.terminal_score;
			name=p.name;
			sex=p.sex;
			clas=p.clas;
			major=p.major;
			return *this;
		}


};