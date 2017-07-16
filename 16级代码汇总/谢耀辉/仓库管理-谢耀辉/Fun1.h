
#pragma once
#include "Fun2.h"


/*  启动函数  */
void Setup()
{
	FILE *fp = fopen("storage.dat", "rb");		/* 数据文件 */

	if (fp == NULL)		/* 如果是第一次打开仓库，则进入引导设置 */
	{
		int i, x;
		srand(time(0));

		fp = fopen("storage.dat", "wb+");
		if (fp == NULL)
		{
			printf("创建文件失败！\n");
			exit(1);
		}
		setcolor("green");
		printf("\t-> 欢迎使用仓库货物管理系统！\n\t");
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
		printf("\t-> 初次使用，需进行简单的设置");
		fflush(stdout);
		ssleep(1000);
		printf("\n\t-> 请设置仓库容量的大小[推荐100-100000，单位m3]：");
		scanf("%lf", &set.space);
		while (set.space <= 0)
		{
			clear();
			char e[16];
			fgets(e, 15, stdin);
			printf("\t-※ 输入不合法！请输入一个大于零的数：");
			scanf("%lf", &set.space);
		}
		set.available = set.space;
		set.total = 0;
		/*将数据写入文件中*/
		if (fwrite(&set, sizeof(struct Store), 1, fp) != 0)
		{
			printf("\t-> 设置完成！正在进入主菜单... ");
			ssleep(1000);
		}
		else
		{
			printf("写入文件失败！设置失败！\n");
			exit(1);
		}
		fclose(fp);
	}
	else		/*若不是第一次打开仓库*/
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

/*  显示仓库状况  */
void View_state()
{
	sp1 = head;
	printf("\n-------------------------\n"
			"-> 仓库容量：%g m3\n"
			"-> 可用空间：%g m3\n"
			"-> 货物总数：%d\n", set.space, set.available, set.total);

	table(NULL, 0);
	while (sp1 != NULL)
	{
		table(sp1, 1);
		sp1 = sp1->next;
	}
	table(NULL, -1);
}

/*  排序货物  */
void Sort()
{
	printf("-> 请选择对货物进行排序\n"
		"\t-1：按货物编号升序\n"
		"\t-2：按货物编号降序\n"
		"\t-3：按货物名称升序\n"
		"\t-4：按货物名称降序\n"
		"\t-5：按货物类型升序\n"
		"\t-6：按货物类型降序\n"
		"\t-0：返回菜单\n");

	int slt = 0;
	while (1)
	{
		scanf("%d", &slt);
		if (slt == 0)
			return;
		if (slt > 0 && slt < 7)
			break;
		printf("输入错误！请重新输入：");
	}
	Bubblesort(head, slt);
	printf("-> 已完成排序！\n");
	ssleep(1000);
}

/*  添加货物  */
void Add()
{
	char e[16], c;
	int i = 1;
	sp1 = (struct Storage *)malloc(sizeof(struct Storage));
	struct Storage *same;

turn2:
	printf("\t\t------添加货物------\n");
	printf("-> 请输入货物编号：");
	scanf("%s", sp1->num);
	same = find(sp1->num, '1');
	if (same != NULL)
	{
		struct Storage mod;
		printf("-> 已存在相同编号的物品！\n");
		table(NULL, 0);
		table(same, 1);
		table(NULL, -1);
		printf("-> 请选择\n"
			"\t-1：修改该物品名称\n"
			"\t-2：修改该物品类型\n"
			"\t-3：修改该物品大小\n"
			"\t-4：修改该物品数量\n"
			"\t-0：返回重新添加物品\n");
		c = _getch();
		switch (c)
		{
		case '1':
			printf("请输入新的名称：");
			scanf("%s", &(mod.name));
			break;
		case '2':
			printf("请输入新的类型：");
			scanf("%s", &(mod.type));
			break;
		case '3':
			printf("请输入修改的大小：");
			scanf("%lf", &(mod.size));
			break;
		case '4':
			printf("请输入修改的数量：");
			scanf("%d", &(mod.sum));
			break;
		default:
			printf("-> 重新添加物品...");
			clear();
			goto turn2;
		}
		change(c, same, &mod);
	}
	else
	{
		printf("-> 请输入货物名称：");
		scanf("%s", sp1->name);
		printf("-> 请输入货物类型（可选项，如不填写请输入0）：");
		scanf("%s", sp1->type);
		if (strcmp(sp1->type, "0") == 0)
			sprintf(sp1->type, "*");
		printf("-> 请输入货物大小（m3）：");
		while (!scanf("%lf", &sp1->size) || sp1->size <= 0)
		{
			fgets(e, 15, stdin);
			printf("-※ 输入不合法！请重新输入（大于零的实数）：");
		}
	}

turn1:
	printf("-> 请输入货物数量：");
	while ( !scanf("%d", &sp1->sum) || sp1->sum <= 0 )
	{
		fgets(e, 15, stdin);
		printf("-※ 输入不合法！请重新输入：");
	}

	if ((sp1->size)*(sp1->sum) > set.available)
	{
		printf("-> 当前仓库可用空间不足！（可用：%gm3）请选择以下操作以继续：\n"
					"\t\t- 1：仅更改当前货物数量\n"
					"\t\t- 2：重新输入货物信息\n"
					"\t\t- 0：放弃操作并返回主菜单\n"
					"-> 请选择：", set.available);
		while (1)
		{
			scanf("%s", e);
			c = e[0];
			if (c == '0' || c == '1' || c == '2')
				break;
			printf("输入错误！请重新输入（0-2）：");
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
	/*创建链表，添加节点*/
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
	printf("\n-> 货物添加成功！请稍候...\n");
	ssleep(1000);
	clear();
	View_state();
	printf("\n是否继续添加？（按Y/y继续，否则退出）：");
	c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Add();
	}
}

/*  选择查找类型  */
void Search()
{
	printf("\t-> 选择查找模式：\n"
			"\t\t1：按类别查找\n"
			"\t\t2：全局查找\n"
			"-> 请选择：");
	char e[16], c, key[32], mode;
	int i = 1;
	struct Storage *sp;
	while (1)
	{
		scanf("%s", e);
		mode = e[0];
		if (mode == '1' || mode == '2')
			break;
		printf("-※ 输入错误！请重新输入：");
	}
	clear();
	if (mode == '1')
	{
		printf("\t------按类别查找------\n"
				"\t\t1：编号\n"
				"\t\t2：名称\n"
				"\t\t3：类型\n"
				"-> 请选择：");
		while (1)
		{
			scanf("%s", e);
			c = e[0];
			if (c == '1' || c == '2' || c == '3')
				break;
			printf("-※ 输入错误！请重新输入（1-3）：");
		}
		clear();
		printf("-> 请输入关键词：");
		scanf("%s", key);
		sp = find(key, c);
		if (sp != NULL)
		{
			printf("搜索结果：\n");
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
			printf("-> 搜索结果为空！\n");
		}
	}
	else
	{
		printf("\t------全局查找------\n"
				"-> 请输入关键词：");
		scanf("%s", key);
		sp = find(key, '0');
		if (sp != NULL)
		{
			printf("搜索结果：\n");
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
			printf("-> 搜索结果为空！\n");
		}
	}
	setcolor("yellow");
}

/*  修改物品信息  */
void Modify()
{
	struct Storage *fix, mod;
	int i = 0, end = 0;
	char slt;
	printf("-> 请查找需要修改的货物\n");
	Search();
	fix = result[0];
	while (result[i++] != NULL)
		end++;
	if (fix != NULL)
	{
		if (end > 1)
		{
			printf("\n-> 请选择需要修改的货物序号：");
			while (!scanf("%d", &i) || i <= 0 || i > end)
			{
				char e[12];
				fgets(e, 10, stdin);
				printf("-> 输入错误！请输入正确序号：");
			}
			fix = result[i-1];
		}
		clear();
		printf("您已选择：\n");
		table(NULL, 0);
		table(fix, 1);
		printf("-> 请选择修改项目：\n"
			"\t1.编号\t2.名称\t3.类型\t4.大小\t5.数量\n"
			"：");
		slt = _getch();
		while (slt < '1' || slt > '5')
		{
			printf("-> 输入错误！请输入正确序号：");
			slt = _getch();
		}
		if (slt == '1')
		{
			printf("请输入新的编号：");
			scanf("%s", &(mod.num));
			while (find(mod.num, '1') != NULL)
			{
				printf("-> 内容已存在！请重新输入：");
				scanf("%s", &(mod.num));
			}
			change('5', fix, &mod);
		}
		else
		{
			switch (slt)
			{
			case '2':
				printf("请输入新的名称：");
				scanf("%s", &(mod.name));
				break;
			case '3':
				printf("请输入新的类型：");
				scanf("%s", &(mod.type));
				break;
			case '4':
				printf("请输入修改的大小：");
				scanf("%lf", &(mod.size));
				break;
			case '5':
				printf("请输入修改的数量：");
				scanf("%d", &(mod.sum));
				break;
			}
			if (!change(slt - 1, fix, &mod))
			{
				printf("-> 修改失败！");
				return;
			}
		}
		printf("-> 修改完成！\n");
	}
	printf("是否继续修改（Y/y确认，否则返回主菜单");
	char c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Modify();
	}
}

/*  移除货物  */
void Delete()
{
	struct Storage *fix;
	int item = 0, end = 0;
	printf("-> 请查找需要移除的货物\n");
	Search();
	fix = result[0];
	while (result[item++] != NULL)
		end++;
	if (fix != NULL)
	{
		if (end > 1)
		{
			printf("\n-> 请选择需要移除的货物序号：");
			while (!scanf("%d", &item) || item <= 0 || item > end)
			{
				char e[12];
				fgets(e, 10, stdin);
				printf("- 输入错误！请输入正确序号：");
			}
			fix = result[item-1];
		}
		clear();
		printf("您已选择货物：\n");
		table(fix, 0);
		table(fix, 1);
		setcolor("yellow");
		printf("-> 请确认是否移除该货物（Y/y确认，否则返回主菜单）\n");
		char c = _getch();
		if (c == 'Y' || c == 'y')
		{
			char remove[32];
			strcpy(remove, fix->num);
			int rmsum = fix->sum;
			set.total -= fix->sum;
			set.available += (fix->size)*(fix->sum);
			head = delt(head, fix);
			printf("-> 移除完成！\n");
		}
	}
	printf("是否继续移除（Y/y确认，否则返回主菜单）");
	char c = _getch();
	if (c == 'Y' || c == 'y')
	{
		clear();
		Delete();
	}
}

/*  修改仓库  */
void Resets()
{
	char sel;
	printf("-> 请选择以下操作：\n"
		"\t-> 1.修改仓库容量\n"
		"\t-> 2.清空并重置仓库\n"
		"-> 请选择：");
	sel = _getch();
	while (sel != '1' && sel != '2')
	{
		printf("-> 错误！请重新选择：");
		sel = _getch();
	}
	clear();
	if (sel == '1')
	{
		double newspace, used = set.space - set.available;
		printf("-> 请设置仓库容量，输入数据不能小于当前已用空间（已用：%g m3）：", used);
		while (!scanf("%lf", &newspace) || newspace < used)
		{
			char e[12];
			fgets(e, 10, stdin);
			printf("-> 数据不合理！请重新输入（已用：%g m3）：", used);
		}
		set.space = newspace;
		set.available = set.space - used;
		printf("-> 更改成功！\n");
	}
	else
	{
		printf("--> 是否确认重置仓库？所有数据将被删除！\n");
		ssleep(1000);
		printf("-> 确认请输入 YES ，否则返回主菜单\n-> ___\b\b\b");
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
			printf("重置完成！正在初始化...");
			ssleep(1000);
			clear();
			Setup();
		}
		else	return;
	}
}

/*  保存并关闭文件  */
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
