/*
*			�ֿ�������ϵͳ
*
*				������
*
*		����Windows��Linux
*		Encode��UTF-8
*		
*/

#ifndef _WIN32
	#define _LINUX_
#endif

#include <stdio.h>
#include "Fun1.h"

bool input = true;

/*  ���Ʋ˵�  */
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
	printf(" �ֿ�������ϵͳ ");
	for (i = 0; i < 6; i++)
		printf("   ");
	printf("|\n+");
	for (i = 0; i < 18; i++)
		printf("---");
	printf("+\n");
	printf("|      1.�鿴�ֿ�״������      2.����ֿ⡡������      |\n"
	       "|      3.��ӻ��������      4.���һ��������      |\n"
	       "|      5.�޸Ļ�����Ϣ����      6.�Ƴ����������      |\n"
	       "|      7.�޸Ĳֿ���������      0.�˳�ϵͳ��������      |\n+");
	for (i = 0; i < 18; i++)
		printf("---");
	printf("+\n");
	printf("\n�������Ӧѡ�");
}


/*  ѡ����  */
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
			printf("�������");
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
				printf("�����������������룺");
		} while (d > 1);
		clear();
		Choose(ch[0]);
		if (input == false)
			break;
		printf("\n����������ز˵�...");
		_getch();
		Menu();
	}
	printf("\n\t-> ϵͳ���˳�����л����ʹ�ã�\n");
	exit(0);
	return 0;
}
