#include<iostream>
#include<iomanip>
#include <cstdlib>
#include"student.h"
#include"linkedlist.h"

using namespace std;

int main()
{
	linkedlist students;
	cout<<"信息管理系统"<<endl;
	cout<<"尚未存入信息。。。"<<endl;
	students.newstudent();

tt:

	cout<<"                   选择操作"<<endl;
	cout<<"a.新增     b.修改     c.查询     d.删除     e.排序     f.显示所有信息     g.退出"<<endl;

	char choice;
	cin>>choice;

	switch(choice)
	{
	case 'a':
		{
			students.addstudent();break;
		}

	case 'b':
		{
			students.changestudent();break;
		}

	case 'c':
		{
			students.searchstudent();break;
		}

	case 'd':
		{
			students.deletestudent();break;
		}

	case 'e':
		{
			students.sortstudents();break;
		}

	case 'f':
		{
			students.showallstudents();break;
		}

	case 'g':
		{
			goto exit;
		}

	default:
		break;
	}

	goto tt;

exit:

	return 0;
}

