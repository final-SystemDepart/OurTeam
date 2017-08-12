
#pragma once
#include "Fun2.h"


/*  ��������  */
void Setup()
{
	FILE *fp = fopen("storage.dat", "rb");		/* �����ļ� */

	if (fp == NULL)		/* ����ǵ�һ�δ򿪲ֿ⣬������������� */
	{
		int i, x;
		srand(time(0));

		fp = fopen("storage.dat", "wb+");
		if (fp == NULL)
		{
			printf("�����ļ�ʧ�ܣ�\n");
			exit(1);
		}
		setcolor("green");
		printf("\t-> ��ӭʹ�òֿ�������ϵͳ��\n\t");
		for (i = 0; i < 30; i++)
		{
			x = rand()%100+1;
			printf("->");
			fflush(stdout);
			ssleep(x*0.1);
			printf("\b");
		}
		ssleep(300);
		clear();
		printf("\t-> ����ʹ�ã�����м򵥵�����");
		fflush(stdout);
		ssleep(1000);
		printf("\n\t-> �����òֿ������Ĵ�С[�Ƽ�100-100000����λm3]��");
		scanf("%lf", &set.space);
		while (set.space <= 0)
		{
			clear();
			char e[16];
			fgets(e, 15, stdin);
			printf("\t-�� ���벻�Ϸ���������һ�������������");
			scanf("%lf", &set.space);
		}
		set.available = set.space;
		set.total = 0;
		/*������д���ļ���*/
		if (fwrite(&set, sizeof(struct Store), 1, fp) != 0)
		{
			printf("\t-> ������ɣ����ڽ������˵�... ");
			ssleep(1000);
		}
		else
		{
			printf("д���ļ�ʧ�ܣ�����ʧ�ܣ�\n");
			exit(1);
		}
		fclose(fp);
	}
	else		/*�����ǵ�һ�δ򿪲ֿ�*/
	{
		fread(&set, sizeof(struct Store), 1, fp);
		while (1)
		{
			sp1 = (struct Storage *)malloc(sizeof(struct Storage));
			if (fread(sp1, sizeof(struct Storage), 1, fp) != 1)
			{
				free(sp1);
				break;
			}
			else
			{
				if (head == NULL)
				{
					head = sp1;
				}
				else
				{
					sp2->next = sp1;
				}
				sp2 = sp1;
				sp1->next = NULL;
			}
		}
	}
	fclose(fp);
}

/*  ��ʾ�ֿ�״��  */
void View_state()
{
	sp1 = head;
	printf("\n-------------------------\n"
			"-> �ֿ�������%g m3\n"
			"-> ���ÿռ䣺%g m3\n"
			"-> ����������%d\n", set.space, set.available, set.total);

	table(NULL, 0);
	while (sp1 != NULL)
	{
		table(sp1, 1);
		sp1 = sp1->next;
	}
	table(NULL, -1);
}

/*  �������  */
void Sort()
{
	printf("-> ��ѡ��Ի����������\n"
		"\t-1��������������\n"
		"\t-2���������Ž���\n"
		"\t-3����������������\n"
		"\t-4�����������ƽ���\n"
		"\t-5����������������\n"
		"\t-6�����������ͽ���\n"
		"\t-0�����ز˵�\n");

	int slt = 0;
	while (1)
	{
		scanf("%d", &slt);
		if (slt == 0)
			return;
		if (slt > 0 && slt < 7)
			break;
		printf("����������������룺");
	}
	Bubblesort(head, slt);
	printf("-> ���������\n");
	ssleep(1000);
}

/*  ��ӻ���  */
void Add()
{
	char e[16], c;
	int i = 1;
	sp1 = (struct Storage *)malloc(sizeof(struct Storage));
	struct Storage *same;

turn2:
	printf("\t\t------��ӻ���------\n");
	printf("-> ����������ţ�");
	scanf("%s", sp1->num);
	same = find(sp1->num, '1');
	if (same != NULL)
	{
		struct Storage mod;
		printf("-> �Ѵ�����ͬ��ŵ���Ʒ��\n");
		table(NULL, 0);
		table(same, 1);
		table(NULL, -1);
		printf("-> ��ѡ��\n"
			"\t-1���޸ĸ���Ʒ����\n"
			"\t-2���޸ĸ���Ʒ����\n"
			"\t-3���޸ĸ���Ʒ��С\n"
			"\t-4���޸ĸ���Ʒ����\n"
			"\t-0���������������Ʒ\n");
		c = _getch();
		switch (c)
		{
		case '1':
			printf("�������µ����ƣ�");
			scanf("%s", &(mod.name));
			break;
		case '2':
			printf("�������µ����ͣ�");
			scanf("%s", &(mod.type));
			break;
		case '3':
			printf("�������޸ĵĴ�С��");
			scanf("%lf", &(mod.size));
			break;
		case '4':
			printf("�������޸ĵ�������");
			scanf("%d", &(mod.sum));
			break;
		default:
			printf("-> ���������Ʒ...");
			clear();
			goto turn2;
		}
		change(c, same, &mod);
	}
	else
	{
		printf("-> ������������ƣ�");
		scanf("%s", sp1->name);
		printf("-> ������������ͣ���ѡ��粻��д������0����");
		scanf("%s", sp1->type);
		if (strcmp(sp1->type, "0") == 0)
			sprintf(sp1->type, "*");
		printf("-> ����������С��m3����");
		while (!scanf("%lf", &sp1->size) || sp1->size <= 0)
		{
			fgets(e, 15, stdin);
			printf("-�� ���벻�Ϸ������������루�������ʵ������");
		}
	}

turn1:
	printf("-> ���������������");
	while ( !scanf("%d", &sp1->sum) || sp1->sum <= 0 )
	{
		fgets(e, 15, stdin);
		printf("-�� ���벻�Ϸ������������룺");
	}

	if ((sp1->size)*(sp1->sum) > set.available)
	{
		printf("-> ��ǰ�ֿ���ÿռ䲻�㣡�����ã�%gm3����ѡ�����²����Լ�����\n"
					"\t\t- 1�������ĵ�ǰ��������\n"
					"\t\t- 2���������������Ϣ\n"
					"\t\t- 0�������������������˵�\n"
					"-> ��ѡ��", set.available);
		while (1)
		{
			scanf("%s", e);
			c = e[0];
			if (c == '0' || c == '1' || c == '2')
				break;
			printf("����������������루0-2����");
		}
		switch (c)
		{
			case '1':
					goto turn1;
					break;
			case '2':
					clear();
					goto turn2;
					break;
			case '0':
					return;
		}
	}
	/*����������ӽڵ�*/
	if (head == NULL)
	{
		head = sp1;
	}
	else
	{
		sp2->next = sp1;
	}
	sp2 = sp1;
	sp1->next = NULL;
	set.available -= (sp2->sum)*(sp2->size);
	set.total += sp2->sum;
	printf("\n-> ������ӳɹ������Ժ�...\n");
	ssleep(1000);
	clear();
	View_state();
	printf("\n�Ƿ������ӣ�����Y/y�����������˳�����");
	c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Add();
	}
}

/*  ѡ���������  */
void Search()
{
	printf("\t-> ѡ�����ģʽ��\n"
			"\t\t1����������\n"
			"\t\t2��ȫ�ֲ���\n"
			"-> ��ѡ��");
	char e[16], c, key[32], mode;
	int i = 1;
	struct Storage *sp;
	while (1)
	{
		scanf("%s", e);
		mode = e[0];
		if (mode == '1' || mode == '2')
			break;
		printf("-�� ����������������룺");
	}
	clear();
	if (mode == '1')
	{
		printf("\t------��������------\n"
				"\t\t1�����\n"
				"\t\t2������\n"
				"\t\t3������\n"
				"-> ��ѡ��");
		while (1)
		{
			scanf("%s", e);
			c = e[0];
			if (c == '1' || c == '2' || c == '3')
				break;
			printf("-�� ����������������루1-3����");
		}
		clear();
		printf("-> ������ؼ��ʣ�");
		scanf("%s", key);
		sp = find(key, c);
		if (sp != NULL)
		{
			printf("���������\n");
			table(NULL, 0);
			while (sp != NULL)
			{
				printf("|%2d", i);
				table(sp, 1);
				sp = result[i++];
			}
		}
		else
		{
			printf("-> �������Ϊ�գ�\n");
		}
	}
	else
	{
		printf("\t------ȫ�ֲ���------\n"
				"-> ������ؼ��ʣ�");
		scanf("%s", key);
		sp = find(key, '0');
		if (sp != NULL)
		{
			printf("���������\n");
			table(NULL, 0);
			while (sp != NULL)
			{
				printf("|%2d", i);
				table(sp, 1);
				sp = result[i++];
			}
		}
		else
		{
			printf("-> �������Ϊ�գ�\n");
		}
	}
	setcolor("yellow");
}

/*  �޸���Ʒ��Ϣ  */
void Modify()
{
	struct Storage *fix, mod;
	int i = 0, end = 0;
	char slt;
	printf("-> �������Ҫ�޸ĵĻ���\n");
	Search();
	fix = result[0];
	while (result[i++] != NULL)
		end++;
	if (fix != NULL)
	{
		if (end > 1)
		{
			printf("\n-> ��ѡ����Ҫ�޸ĵĻ�����ţ�");
			while (!scanf("%d", &i) || i <= 0 || i > end)
			{
				char e[12];
				fgets(e, 10, stdin);
				printf("-> ���������������ȷ��ţ�");
			}
			fix = result[i-1];
		}
		clear();
		printf("����ѡ��\n");
		table(NULL, 0);
		table(fix, 1);
		printf("-> ��ѡ���޸���Ŀ��\n"
			"\t1.���\t2.����\t3.����\t4.��С\t5.����\n"
			"��");
		slt = _getch();
		while (slt < '1' || slt > '5')
		{
			printf("-> ���������������ȷ��ţ�");
			slt = _getch();
		}
		if (slt == '1')
		{
			printf("�������µı�ţ�");
			scanf("%s", &(mod.num));
			while (find(mod.num, '1') != NULL)
			{
				printf("-> �����Ѵ��ڣ����������룺");
				scanf("%s", &(mod.num));
			}
			change('5', fix, &mod);
		}
		else
		{
			switch (slt)
			{
			case '2':
				printf("�������µ����ƣ�");
				scanf("%s", &(mod.name));
				break;
			case '3':
				printf("�������µ����ͣ�");
				scanf("%s", &(mod.type));
				break;
			case '4':
				printf("�������޸ĵĴ�С��");
				scanf("%lf", &(mod.size));
				break;
			case '5':
				printf("�������޸ĵ�������");
				scanf("%d", &(mod.sum));
				break;
			}
			if (!change(slt - 1, fix, &mod))
			{
				printf("-> �޸�ʧ�ܣ�");
				return;
			}
		}
		printf("-> �޸���ɣ�\n");
	}
	printf("�Ƿ�����޸ģ�Y/yȷ�ϣ����򷵻����˵�");
	char c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Modify();
	}
}

/*  �Ƴ�����  */
void Delete()
{
	struct Storage *fix;
	int item = 0, end = 0;
	printf("-> �������Ҫ�Ƴ��Ļ���\n");
	Search();
	fix = result[0];
	while (result[item++] != NULL)
		end++;
	if (fix != NULL)
	{
		if (end > 1)
		{
			printf("\n-> ��ѡ����Ҫ�Ƴ��Ļ�����ţ�");
			while (!scanf("%d", &item) || item <= 0 || item > end)
			{
				char e[12];
				fgets(e, 10, stdin);
				printf("- ���������������ȷ��ţ�");
			}
			fix = result[item-1];
		}
		clear();
		printf("����ѡ����\n");
		table(fix, 0);
		table(fix, 1);
		setcolor("yellow");
		printf("-> ��ȷ���Ƿ��Ƴ��û��Y/yȷ�ϣ����򷵻����˵���\n");
		char c = _getch();
		if (c == 'Y' || c == 'y')
		{
			char remove[32];
			strcpy(remove, fix->num);
			int rmsum = fix->sum;
			set.total -= fix->sum;
			set.available += (fix->size)*(fix->sum);
			head = delt(head, fix);
			printf("-> �Ƴ���ɣ�\n");
		}
	}
	printf("�Ƿ�����Ƴ���Y/yȷ�ϣ����򷵻����˵���");
	char c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Delete();
	}
}

/*  �޸Ĳֿ�  */
void Resets()
{
	char sel;
	printf("-> ��ѡ�����²�����\n"
		"\t-> 1.�޸Ĳֿ�����\n"
		"\t-> 2.��ղ����òֿ�\n"
		"-> ��ѡ��");
	sel = _getch();
	while (sel != '1' && sel != '2')
	{
		printf("-> ����������ѡ��");
		sel = _getch();
	}
	clear();
	if (sel == '1')
	{
		double newspace, used = set.space - set.available;
		printf("-> �����òֿ��������������ݲ���С�ڵ�ǰ���ÿռ䣨���ã�%g m3����", used);
		while (!scanf("%lf", &newspace) || newspace < used)
		{
			char e[12];
			fgets(e, 10, stdin);
			printf("-> ���ݲ��������������루���ã�%g m3����", used);
		}
		set.space = newspace;
		set.available = set.space - used;
		printf("-> ���ĳɹ���\n");
	}
	else
	{
		printf("--> �Ƿ�ȷ�����òֿ⣿�������ݽ���ɾ����\n");
		ssleep(1000);
		printf("-> ȷ�������� YES �����򷵻����˵�\n-> ___\b\b\b");
		char com[8];
		scanf("%s", com);
		if (strcmp(com, "YES") == 0)
		{
#ifdef _WIN32
			system("del storage.dat");
#else
			system("rm *.dat");
#endif
			sp1 = sp2 = NULL;
			while (head != NULL)
			{
				free(head);
				head = head->next;
			}
			head = NULL;
			printf("������ɣ����ڳ�ʼ��...");
			ssleep(1000);
			clear();
			Setup();
		}
		else	return;
	}
}

/*  ���沢�ر��ļ�  */
void Close()
{
	FILE *fp = fopen("storage.dat", "wb");
	fwrite(&set, sizeof(struct Store), 1, fp);
	sp1 = head;
	while (sp1 != NULL)
	{
		fwrite(sp1, sizeof(struct Storage), 1, fp);
		free(sp1);
		sp1 = sp1->next;
	}
	fclose(fp);
}
