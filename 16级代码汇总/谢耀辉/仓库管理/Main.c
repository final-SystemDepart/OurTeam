/*
*			仓库货物管理系统
*
*				主程序
*
*		兼容Windows和Linux
*		Encode：UTF-8
*		
*/

#ifndef _WIN32
	#define _LINUX_
#endif

#include <stdio.h>
#include "Fun1.h"

bool input = true;

/*  绘制菜单  */
void Menu()
{
	clear();
	setcolor("yellow");
	int i;
	printf("\n+");
	for (i = 0; i < 18; i++)
		printf("---");
	printf("+\n|");
	for (i = 0; i < 6; i++)
		printf("   ");
	printf(" 仓库货物管理系统 ");
	for (i = 0; i < 6; i++)
		printf("   ");
	printf("|\n+");
	for (i = 0; i < 18; i++)
		printf("---");
	printf("+\n");
	printf("|      1.查看仓库状况　　      2.整理仓库　　　　      |\n"
	       "|      3.添加货物　　　　      4.查找货物　　　　      |\n"
	       "|      5.修改货物信息　　      6.移除货物　　　　      |\n"
	       "|      7.修改仓库容量　　      0.退出系统　　　　      |\n+");
	for (i = 0; i < 18; i++)
		printf("---");
	printf("+\n");
	printf("\n请输入对应选项：");
}


/*  选择功能  */
void Choose(char c)
{
	switch (c)
	{
		case '1':
				View_state();
				break;
		case '2':
				Sort();
				break;
		case '3':
				Add();
				break;
		case '4':
				Search();
				break;
		case '5':
				Modify();
				break;
		case '6':
				Delete();
				break;
		case '7':
				Resets();
				break;
		case '0':
				input = false;
				Close();
				break;
		default:
			printf("输入错误！");
	}
}

int main()
{
	char ch[12];
	int d = 0;
	Setup();
	Menu();
	while (1)
	{
		do
		{
			scanf("%s", ch);
			d = strlen(ch);
			if (d > 1)
				printf("输入有误！请重新输入：");
		} while (d > 1);
		clear();
		Choose(ch[0]);
		if (input == false)
			break;
		printf("\n按任意键返回菜单...");
		_getch();
		Menu();
	}
	printf("\n\t-> 系统已退出，感谢您的使用！\n");
	exit(0);
	return 0;
}
