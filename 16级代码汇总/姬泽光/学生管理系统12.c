#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
/*定义结构体*/ 
struct student
{
	char num[20];
 	char name[20];
 	int cgrade;
 	int	mgrade;
 	int egrade;
 	int total;
 	float ave;
 	struct  student  *next;
} *head=NULL;

/*显示学生成绩信息*/
void dayin(struct student *p,struct student *head)
{
	if(p==NULL)															//全部显示 
	{
		p=head;
		while(p!=NULL)
		{
			printf("学号：%-5s姓名：%-5sC语言成绩：%-5d数学成绩: %-5d英语成绩：%-5d总成绩为：%-5d平均成绩为：%-5.2f\n",p->num,p->name,p->cgrade,p->mgrade,p->egrade,p->total,p->ave);
			p=p->next;
		}
	}
	else																//显示特定学号或者姓名的成绩信息 
	{
		p->total=p->cgrade+p->egrade+p->mgrade;
		p->ave=p->total/3;
		printf("学号：%-5s姓名：%-5sC语言成绩：%-5d数学成绩: %-5d英语成绩：%-5d总成绩为：%-5d平均成绩为：%-5.2f\n",p->num,p->name,p->cgrade,p->mgrade,p->egrade,p->total,p->ave);
	}
} 

/*添加用函数*/ 
struct student *addnew(struct student *head,char *num,char *name,int *cgrade,int *mgrade,int *egrade)
{
	struct student *p0,*p1;
	int *total;
	float *ave;
	p0=(struct student *)malloc(sizeof(struct student));
	strcpy(p0->num,num);
	strcpy(p0->name,name);
	p0->cgrade=*cgrade;
	p0->mgrade=*mgrade;
	p0->egrade=*egrade;
	p0->total=p0->cgrade+p0->egrade+p0->mgrade;
	p0->ave=p0->total/3;
	if(head==NULL)
		head=p0;
	else
	{
		p1=head;
		while(p1->next!=NULL)					//从头开始往后找，看哪里 没有连接
		{
			p1=p1->next;
		}
		p1->next=p0;
	}
	p0->next=NULL;
	return head;
}

/*显示主菜单函数*/
void menu()
{
	printf("******************************* 学生成绩管理系统 *******************************\n");
	printf("*                                                                              *\n");
	printf("*          1 输入学生成绩                           2 删除学生成绩             *\n");
	printf("*                                                                              *\n");
	printf("*          3 查找学生成绩                           4 修改学生成绩             *\n");
	printf("*                                                                              *\n");
	printf("*          5 插入学生成绩                           6 统计学生成绩             *\n");
	printf("*                                                                              *\n");
	printf("*          7 排序学生成绩                           8 保存学生成绩             *\n");
	printf("*                                                                              *\n");
	printf("*          9 显示学生成绩                           0 退出管理系统             *\n");
	printf("******************************* 学生成绩管理系统 *******************************\n");
}

/*查找学生信息*/
struct student *find1(struct student *head,char *num) 							//用学号查找  
{
	if(head==NULL)
	{
		printf("请先输入学生成绩！\n");
		return head;
	}
	struct student *p1,*p2;
	p1=head;
	p2=NULL;
	while(p1!=NULL)
	{
		if(strcmp(p1->num,num)==0)
		{
			p2=p1;
			printf("\n找到该数据！\n");	
			dayin(p1,head);							
		}
		p1=p1->next;
	}
	if(p2==NULL)
	{
		printf("\n未找到该数据！\n");
	}
	return p2;
}

struct student *find2(struct student *head,char *name) 								//用姓名查找  
{
	struct student *p1,*p2;
	p1=head;
	p2=NULL;
	if(head==NULL)
	{
		printf("请先输入学生成绩！");
		return head;
	}
	while(p1!=NULL)
	{
		if(strcmp(p1->name,name)==0)
		{
			p2=p1;
			printf("\n找到该数据！\n");	
			dayin(p1,head);							//可能重名字 
		}
		p1=p1->next;
	}
	if(p2==NULL)
	{
		printf("\n未找到该数据！\n");
	}
	return p2;
}

/*这是一个传说中用于删除数据的函数~*/ 
struct student *dele(struct student *head,struct student *p)
{
	struct student *p1,*p2;
	p1=head;
	if(head==NULL)
	{
		printf("请先输入学生成绩！\n");
		return head;
	}
	while(p1 != p && p1!=NULL)
	{
		p1=p1->next;
	}
	if(p1==NULL)
		printf("未找到该数据，请查证后重新输入\n");
	if(p1==p)
	{
		if(p1==head)																	//要考虑一下删除开头数据的情况 不然会……停止运行&……
		{
			head=p1->next;
		}	
		else													 
			{
				p2=head;
				while(p2->next!=p1)														//将要删除的结构体从链表中删去 
				{
					p2=p2->next;
				}
				p2->next=p1->next;
				printf("删除成功！\n");
			}
	}
	return head;
} 

/*修改用函数*/ 
void xiugai(struct student *p)
{
	int n;
	int score;
	if(p==NULL)
	{
		printf("\n修改失败！");
		printf("\n原始数据为：\n"); 
		return;
	}
	else
	{
		printf("\n请输入需修改的成绩代号：1表示C语言成绩，2表示数学成绩，3表示英语成绩\t");
		scanf("%d",&n);
		printf("\n请重新输入该科成绩：");
		scanf("%d",&score);
		switch(n)
		{
			case 1:
				p->cgrade=score;
				printf("修改成功！");
				break;
			case 2:
				p->mgrade=score;
				printf("修改成功！");
				break;
			case 3:
				p->egrade =score;
				printf("修改成功！");
				break;
			default:
				printf("输入代码有误。请重新输入！"); 
				break;
		}
	}
} 

/*查询前的询问*/
struct student *before()
{
		int way;
		char num[20],name[20];
		struct student *p1;
		scanf("%d",&way);
		if(way==1)
		{
			printf("\n请输入需要查询的学号：");
			scanf("%s",num);
			p1=find1(head,num);
		} 
		if(way==2)
		{
			printf("\n请输入需要查询的姓名：");
			scanf("%s",name);
			p1=find2(head,name);
		}
		if(way!=1&&way!=2)
		{
			printf("\n请正确输入~");
			return NULL;
		}
		return p1;
}

/*交换两个结构体的数据*/
void exchange(struct student *p1,struct student *p2) 
{
	char data[20];
	strcpy(data,p1->name);
	strcpy(p1->name,p2->name);
	strcpy(p2->name,data);
	strcpy(data,p1->num);
	strcpy(p1->num,p2->num);
	strcpy(p2->num,data);
	int data2;
	data2=p1->cgrade;
	p1->cgrade=p2->cgrade;
	p2->cgrade=data2;
	data2=p1->mgrade;
	p1->mgrade=p2->mgrade;
	p2->mgrade=data2;
	data2=p1->egrade;
	p1->egrade=p2->egrade;
	p2->egrade=data2;
	data2=p1->ave;
	p1->ave=p2->ave;
	p2->ave=data2;
	data2=p1->total;
	p1->total=p2->total;
	p2->total=data2;
	
}

/*按学号排序*/
void sort(struct student *head)										//学号位数不同会造成排序错误 
{
	struct student *p1,*p2,*p0;
	p1=head;
	if(head==NULL)
	{
		printf("\n请先输入学生成绩！\n");
		return;
	}
	else
	{
		while(p1->next!=NULL)
		{	
			p0=p1;
			p2=p1->next;
			while(p2!=NULL)
			{
				if(strcmp(p0->num,p2->num)>0)
					p0=p2;
				p2=p2->next;
			}
			if(p0!=p1)
				exchange(p0,p1);
			p1=p1->next;
		}
	}
}

/*保存到文件*/
void savefile(struct student *head)
{	
	char filename[200];
	printf("请输入保存的文件名：");
	scanf("%s",filename); 
	struct student *p;
	p=head;
	FILE *fp;
	if(head==NULL)
	{
		printf("\n请输入学生信息！\n");
		return; 
	}
	else
	{
		if((fp=fopen(filename,"wb+"))==NULL)
		{
			printf("打开文件失败！"); 
			return;
		}
		while(p!=NULL)
		{
			if(fwrite(p,sizeof(struct student),1,fp)!=1)
			{
				printf("写入文件失败！");
				fclose(fp);
				break;
			}
			p=p->next;
		}
		fclose(fp);
		printf("保存成功！\n"); 
	}
} 

/*按成绩排序*/
struct student *sortbygrade(struct student *head,int n)
{
	struct student *p1,*p2,*p0;
	p1=head;
	if(head==NULL)
	{
		printf("\n请先输入学生成绩！\n");
		return head;
	}
	if(n==1)														//按C语言成绩排序 
	{
		while(p1->next!=NULL)
		{	
			p0=p1;
			p2=p1->next;
			while(p2!=NULL)
			{
				if((p0->cgrade)>(p2->cgrade))
					p0=p2;
				p2=p2->next;
			}
			if(p0!=p1)
				exchange(p0,p1);
			p1=p1->next;
		}
	}
	if(n==2)
	{
		while(p1->next!=NULL)
		{	
			p0=p1;
			p2=p1->next;
			while(p2!=NULL)
			{
				if(p0->mgrade>p2->mgrade)							//按数学成绩排序
					p0=p2;
				p2=p2->next;
			}
			if(p0!=p1)
				exchange(p0,p1);
			p1=p1->next;
		}
	}
	if(n==3)														//按英语成绩排序 
	{
		while(p1->next!=NULL)
		{	
			p0=p1;
			p2=p1->next;
			while(p2!=NULL)
			{
				if(p0->egrade>p2->egrade)
					p0=p2;
				p2=p2->next;
			}
			if(p0!=p1)
				exchange(p0,p1);
			p1=p1->next;
		}
	}
	if(n==4||n==5)													//按总成绩或者平均成绩成绩排序 
	{
		while(p1->next!=NULL)
		{	
			p0=p1;
			p2=p1->next;
			while(p2!=NULL)
			{
				if(p0->total>p2->total)
					p0=p2;
				p2=p2->next;
			}
			if(p0!=p1)
				exchange(p0,p1);
			p1=p1->next;
		}
	if(n!=1&&n!=2&&n!=3&&n!=4&&n!=5)
	{
		printf("输入代码有误！");
		return head;
	} 
	}
	return head;
} 

/*统计数据格式化函数*/
void form(int n9,int n8,int n7,int n6,int n0)
{
	printf("90~100：	%d  人\n",n9);
	printf("80~90 ：	%d  人\n",n8);
	printf("70~80 ：	%d  人\n",n7);
	printf("60~70 ：	%d  人\n",n6);
	printf("60以下：	%d  人\n",n0);
}

/*统计函数*/
void count(struct student *head)
{
	struct student *p1,*p2;
	int n9=0,n8=0,n7=0,n6=0,n0=0;
	p1=head;
	if(head==NULL)
	{
		printf("请先输入学生成绩！");
		return;
	}
	while(p1!=NULL)
	{
		if((p1->cgrade)>=90&&(p1->cgrade)<100)
		{
			n9++;
		}
		if((p1->cgrade)>=80&&(p1->cgrade)<90)
		{
			n8++;
		}
		if((p1->cgrade)>=70&&(p1->cgrade)<80)
		{
			n7++;
		}
		if((p1->cgrade)>=60&&(p1->cgrade)<70)
		{
			n6++;
		}
		if((p1->cgrade)<60)
		{
			n0++;
		}
		p1=p1->next;
	}
	printf("\nC语言成绩情况：\n");
	form(n9,n8,n7,n6,n0);
	p1=head;
	n9=0,n8=0,n7=0,n6=0,n0=0;
	while(p1!=NULL)
	{
		if((p1->mgrade)>=90&&(p1->mgrade)<100)
		{
			n9++;
		}
		if((p1->mgrade)>=80&&(p1->mgrade)<90)
		{
			n8++;
		}
		if((p1->mgrade)>=70&&(p1->mgrade)<80)
		{
			n7++;
		}
		if((p1->mgrade)>=60&&(p1->mgrade)<70)
		{
			n6++;
		}
		if((p1->mgrade)<60)
		{
			n0++;
		}
		p1=p1->next;
	}
	printf("数学成绩情况：\n");
	form(n9,n8,n7,n6,n0);
	p1=head;
	n9=0,n8=0,n7=0,n6=0,n0=0;
	while(p1!=NULL)
	{
		if((p1->egrade)>=90&&(p1->egrade)<100)
		{
			n9++;
		}
		if((p1->egrade)>=80&&(p1->egrade)<90)
		{
			n8++;
		}
		if((p1->egrade)>=70&&(p1->egrade)<80)
		{
			n7++;
		}
		if((p1->egrade)>=60&&(p1->egrade)<70)
		{
			n6++;
		}
		if((p1->egrade)<60)
		{
			n0++;
		}
		p1=p1->next;
	}
	printf("英语成绩情况：\n");
	form(n9,n8,n7,n6,n0);
}

/*用于统计最大值的函数*/
void countmax(struct student *head)
{
	struct student *p1,*p2;
	if(head==NULL)
	{
		printf("请先输入学生成绩！");
		return;
	}
	p1=sortbygrade(head,1);
	p2=p1->next;
	int max1,max2,max3,max0;
	char num1[20],num2[20],num3[20],num0[20];
	while(p2!=NULL)
	{
		p1=p1->next;
		p2=p2->next;
	}
	max1=p1->cgrade;
	strcpy(num1,p1->num);
	p1=sortbygrade(head,2);
	p2=p1->next;
	while(p2!=NULL)
	{
		p1=p1->next;
		p2=p2->next;
	}
	max2=p1->mgrade;
	strcpy(num2,p1->num);
	p1=sortbygrade(head,3);
	p2=p1->next;
	while(p2!=NULL)
	{
		p1=p1->next;
		p2=p2->next;
	}
	max3=p1->egrade;
	strcpy(num3,p1->num);
	p1=sortbygrade(head,4);
	p2=p1->next;
	while(p2!=NULL)
	{
		p1=p1->next;
		p2=p2->next;
	}
	max0=p1->total;
	strcpy(num0,p1->num);
	printf("\nC语言最高分是：%d\t学号为：%s\n",max1,num1);
	printf("数学最高分是 ：%d\t学号为：%s\n",max2,num2);
	printf("英语最高分是 ：%d\t学号为：%s\n",max3,num3);
	printf("总分最高分是 ：%d\t学号为：%s\n",max0,num0);
}

int main()
{
	int key;
	char num[20] = {0},name[20] = {0};
	int cgrade;
 	int	mgrade;
 	int egrade;
 	int total;
 	float ave;
 	struct student *p1;
 	int way;
	menu();
	printf("请输入您想进行的操作代号：");
	scanf("%d",&key); 
	while(key!=0)
		{
			switch(key)
			{
				case 1:
					printf("\n请输入学生学号 ");
					scanf("%s",num);
					printf("\n请输入学生姓名 "); 
					scanf("%s",name);
					printf("\n请输入学生C语言成绩 "); 
					scanf("%d",&cgrade);
					printf("\n请输入学生数学成绩 "); 
					scanf("%d",&mgrade);
					printf("\n请输入学生英语成绩 "); 
					scanf("%d",&egrade);
					head=addnew(head,num,name,&cgrade,&mgrade,&egrade);
					break;
				case 2:
					printf("\n请选择删除方式，1表示学号，2表示姓名:");
					p1=before();
					head=dele(head,p1);
					break;
				case 3:
					printf("\n请选择查询方式，1表示学号，2表示姓名:");
					p1=before();
					break;
				case 4:
					printf("\n请选择修改的对象，1表示学号，2表示姓名：");
					p1=before();
					xiugai(p1);
					printf("\n");
					dayin(p1,head);
					break;
				case 5:
					printf("\n请输入插入学生学号 ");
					scanf("%s",num);
					printf("\n请输入插入学生姓名 "); 
					scanf("%s",name);
					printf("\n请输入插入学生C语言成绩 "); 
					scanf("%d",&cgrade);
					printf("\n请输入插入学生数学成绩 "); 
					scanf("%d",&mgrade);
					printf("\n请输入插入学生英语成绩 "); 
					scanf("%d",&egrade);
					head=addnew(head,num,name,&cgrade,&mgrade,&egrade);
					sort(head);
					printf("\n插入成功!\n");
					break;
				case 6:
					count(head);
					countmax(head);
					break;
				case 7:
					printf("请选择排序方式：1表示按C语言成绩，2表示数学成绩，3表示英语成绩，4表示总分，5表示平均分："); 
					scanf("%d",&way);
					sortbygrade(head,way);
					dayin(p1,head);
					break;
				case 8:
					savefile(head);
					break;
				case 9:
					sort(head);
					dayin(p1,head);
					break; 
				case 0:
					break;
				default:
					printf("输入格式有误！"); 
			}
			p1=NULL;
			printf("\n请输入您想进行的操作代号：");
			scanf("%d",&key);
			system("CLS");
			menu();
		}
	return 0;
} 
