
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define HEADER1 "---------------STUDENT-------------\n"
#define HEADER2 "|number|name|Comp|Math|Eng|sum|ave|mici|\n"
#define HEADER3 "|-----|----|----|----|---|---|---|---|"
#define FORMAT " |%-10s|%-15s|%4d|%4d|%4d|%4d|%.2f|%4d|\n"
#define DATA   p->data.num,p->data.name,p->data.cgrade,p->data.mgrade,p->data.egrade.p->data.total,p->data.ave,p->data.mingci
#define END      "--------------------------------------\n"




  int saveflag=0;/*是?否?需è要癮存?盘ì的?标括?志?变?量?*/

  /*定¨义?与?学§生Θ?有瓺关?的?数簓据Y结á构1*/
  typedef struct student    /*标括?记?为astudent结á构1体?类え?型í名?*/
  {
	  char num[10];      //学§号?
	  char name[15];     //名?字?
	  int cgrade;        //c语?言?
	  int mgrade;         //数簓学§
	  int egrade;         //英?语?
	  int total;        //总哩?分?
	  float ave;       /*平?均ù分?*/
	  int mingci;     /*名?次?*/
  }data;                                                                            /////////////////////////////////////自?己o
	  //定¨义?每?条?记?录?或ò节ú点?的?数簓据Y结á构1，?标括?记?为a：阰node结á构1体?类え?型í



 typedef struct node
  {
	  struct student data;
	  struct node *next;
  }Node ,*Link;//Node为anode类え?型í的?别纄名?，?Link为anode类え?型í的?指?针?的?别纄名?


  //主÷菜?单蹋?
void menu()
  {
	  system("cls");//调獭?用?DOS命ü令?，?清?屏á，?clrscr()功|能ü相à同?

	  printf("The Student Grade Management Syystem\n\n");
	  printf("*************************Menu******************\n");
      printf("*       1 input record         2 delete record*\n");
	  printf("*       3 search record        4 modify record*\n");
	  printf("*       5 insert record        6 count  record*\n");
	  printf("*       7 sort record          8 save   record*\n");
	  printf("*       9 display record       0 quit   record*\n");
	  printf("***********************************************\n");
  }

void printheader()     //格?式?化ˉ输?出?表括?头?
  {
	  printf(HEADER1);
	  printf(HEADER2);
	  printf(HEADER3);
  }


 void printdata(Node  *pp) //格?式?化ˉ输?出?表括?中D数簓据Y
  {
	  Node *p;
	  p=pp;
	  printf("%-10s",p->data.num);
	  printf("%-15s",p->data.name);
	  printf("%4d",p->data.cgrade);
	  printf("%4d",p->data.mgrade);
	  printf("%4d",p->data.egrade);
      printf("%4d",p->data.total);
      printf("%.2f",p->data.ave);
      printf("%4d\n",p->data.mingci);

  }

 void Wrong()  //输?出?按恪?键ü错洙?误ó信?息￠
  {
	  printf("\n\n\n\n\n* * * * *Error: input has wromg! press any key to continue * * * * *\n");
	  getchar();
  }

 void Nofind()  //输?出?为a查é找ò到?此?学§生Θ?的?信?息￠
  {
	  printf("\n====> Not find this student ! \n");
  }
 void Disp (Link l) //显?示?单蹋?链ⅰ?表括猯中D存?储洹?的?学§生Θ?记?录?，?内ú容╕为astudent结á构1中D定¨义?的?内ú容╕
  {
	  Node *p;
	  p=l->next;
	  //l存?储洹?的?是?单蹋?链ⅰ?表括?头?节ú点?的?指?针?，?该?头?节ú点?没?有瓺存?储洹?学§生Θ?信?息￠，?指?针?与?之?相à的?后ó继ì结á点?才?有瓺学§生Θ?信?息￠
	    if(!p)
		{
			printf("\n====>Not student record! \n");
			getchar();
			 return ;
	    }

	 printf("\n\n");
	 printheader(); //输?出?表括?格?头?部?
		  while (p)
		  {

			   printdata(p);
			   p=p->next;//指?针?移?动ˉ下?一?个?节ú点?
			   printf(HEADER3);
		   }


		  getchar();
		  getchar();
		  printf("\n");
  }

   //作痢?用?：阰用?于?定¨位?链ⅰ?表括?中D符?合?要癮求ó的?节ú点?，?参?数簓findmess[]保馈?存?要癮查é找ò的?具?体?内ú容╕；?Locateofnum按恪?学§号?在ú单蹋?链ⅰ?表括猯中D查é找ò；?并￠返う?回?指?向ò该?节ú点?的?
   //指?针?；?Locateofname按恪?姓?名?在ú单蹋?链ⅰ?表括?中D查é找ò；?将?符?合?条?件t的?节ú点?（辍?可é能ü不?止1一?个?）?地?址•存?入?指?针?数簓组哩?中D。￡

Node* Locateofnum(Link l,char findmess[])     //按恪?学§号?查é找ò
 {

	   Node *r;
	   r=l->next;
	   while(r)
	   {
		   if(strcmp(r->data.num,findmess)==0)//若?找ò到?findmess的?值μ得?学§号?
			 return r;
		   r=r->next;

	   }

	   return 0;//若?找ò不?到?，?返う?回?一?个?空?指?针?
   }

 void Locateofname(Link l,char findmess[],Node *n[])//按恪?姓?名?查é找ò
   {
	   Node *r;
	   int i=0;
	   r=l->next;
	   while(r)
	   {
		   if(strcmp(r->data.name,findmess)==0)    //若?找ò到?fingmess值μ的?学§生Θ?姓?名?
			   n[i++]=r;   //将?符?合?查é找ò条?件t的?记?录?指?针?存?入?指?针?数簓组哩?中D
		   r=r->next;
	   }


   }


   //输?入?字?符?串?，?并￠进?行D长¤度è验é证¤（辍?长¤度è<lens)

void stringinput(char *t,int lens,char *notice)
   {
	   char n[255];
	   printf(notice);   //显?示?提?示?信?息￠
	   scanf("%s",n);    //输?入?字?符?串?
	   while(strlen(n)>lens)
	   {
		   printf("\n exceed the required length! \n:");
		   //进?行D长¤度è校￡验é，?超?过ylens值μ重?新?输?入?

		   printf(notice);
	       scanf("%s",n);
	   }
	   strcpy(t,n);
   }//将?输?入?的?字?符?串?拷?贝馈?到?字?符?串?t中D

	   //输?入?分?数簓，?要癮求ó分?数簓在ú0~100之?间?
 int numberinput (char *notice)
 {
		   int t=0;
		   printf(notice);   //显?示?提?示?信?息￠
		   scanf("%d",&t);  //输?入?分?数簓
		   while(t>100||t<0)
		   {
			   printf("\n Score must in [0,100]!\n");
			   printf(notice);
			   scanf("%d",&t);
		   }
		   return t;
 }

	   //增?加ó学§生Θ?记?录?
void  Add(Link l)
	{
		 Node *p,*r,*s;//实害?现?添?加ó操ù作痢?的? 临ⅷ?时骸?的?结á构1体?指?针?变?量?
		 char ch,flag=0,num[10];
		 r=l;
		 s=l->next;
		 system("cls");
		 Disp(l);   //显?示?出?已?有瓺的?学§生Θ?信?息￠
		 while(r->next !=NULL)
			 r=r->next; //将?指?针?移?至á于?链ⅰ?表括?最?末?位?，?准?备?添?加ó纪í录?
		 while(l)  //一?次?可é输?入?多à条?记?录?，?直±至á输?入?学§号?为a0的?记?录?结á束?添?加ó操ù做?

		 {
			 while(l)  //输?入?学§号?，?保馈?证¤该?学§号?没?有瓺被?使?用?，?若?输?入?学§号?为a0，?则ò退?出?添?加ó记?录?操ù作痢?

			 {
				 stringinput(num,10,"input number(press '0' return menu):");
				 //格?式?化ˉ输?入?学§号?并￠检ì验é长¤度è是?否?超?过y10
				 flag=0;
				  if(strcmp(num,"0")==0)//输?入?0，?则ò退?出?添?加ó操ù作痢?，?返う?回?主÷界?面?
				  {return ;}
				  s=l->next;
				  while(s)   //查é询ˉ该?学§号?是?否?已?经-存?在ú，?若?存?在ú则ò要癮求ó重?新?输?入?一?个?未′被?占?用?的?学§号?
				  {

					  if(strcmp(s->data.num,num)==0)   //提?前°终?止1循-环•
					  {
						  flag=1;
						  break;
					  }
					  s=s->next;
				  }
				  if(flag==1)
				  {
					  getchar();
					  printf("====>The number %s is existing,try again?(y/n):",num);
					  scanf("%c",&ch);
						  if(ch=='y'||ch=='Y')
							  continue;
						  else return;
				  }
				  else {break;}
			 }

			 p=(Node*)malloc(sizeof(Node));  //为a新?增?记?录?申Θ?请?内ú存?空?间?
			 if(!p)
			 {
				 printf("\n allocate memory failure ");  //如?没?有瓺申Θ?请?到?，?打洙?印?提?示?信?息￠
				 return ;
			 }
			 strcpy(p->data.num,num);  //将?字?符?串?num拷?贝馈?到?p-> data.num
			 stringinput(p->data.name,15,"Name");
			 p->data.cgrade=numberinput("C language Score[0~100]:");
			 p->data.mgrade=numberinput("Math Score[0~100]:");
			 p->data.egrade=numberinput("English  Score[0~100]:");
			 p->data.total=p->data.egrade+p->data.cgrade+p->data.mgrade;
			 p->data.ave=(float)(p->data.total/3);
			 p->data.mingci=0;
			 p->next=NULL;
			 r->next=p;
			 r=p;
			 saveflag=1;
		 }
		return ;
     }
	 //anxuehaohuoxingming,chaxunxuehsnegchengji

void Qur(Link l)
	{
		 int select;
		 char searchinput[20];
		 Node *p;
		 Node *n[5]={NULL};
		 int i=0;
		 if(!l->next )
		 {
			 system ("cls ");
			 printf("\n=====>No student record!n");
			 getchar();
			 return ;
		 }
		 system("cls");
		 printf("\n====>1Search by number  =====> 2 Search by name \n");
		 printf("       please choice [1,2]:");
		 scanf("%d",&select);
		 if(select== 1)
		 {
			 stringinput(searchinput,10,"input the existing student number :");
			 p=Locateofnum(l,searchinput);
			 if(p)
			 {
				 printheader();
				 printdata(p);
				 printf(END);
				 printf("press any key to return");
				 getchar();
			 }
			 else
				 Nofind();
			 getchar();
		 }
		  if(select== 2)
		 {
			 stringinput(searchinput,15,"input the existing student name:");
			 Locateofname(l,searchinput,n);
			 while((p=n[i++ ])!=NULL)
			 {
				 printheader();
				 printdata(p);
				 printf(END);
			 }
			 printf("press any key to return");
			 getchar();
			 if(n[0]==NULL)
				 Nofind();
			 getchar();
		 }
		 if(select!=1&&select!=2)
			 Wrong();
		 getchar();
   }
	 //shanchuxueshengjilu:xianzhaodaobaocungaixueshengjiludejiedian,ranhoushanchugaijiedian

 void Del(Link l)
	 {
		 Node *p,*r;
		 char findmess[20],ch;
		 if(! l->next)
		 {
			 system("cls");
			 printf("\n====>No student record! \n");
			 getchar();
			 return;
		 }
		 system("cls");
		 Disp(l);
		 stringinput(findmess,10,"input the existing student number:");
		 getchar();
		 p=Locateofnum(l,findmess);
		 printf("Are you sure to delete %s(y/n)?",findmess);
		 scanf("%c",&ch);
		 if(ch=='y'||ch=='Y')
		 {
			 if(p)
			 {
				 r=l;
				 while(r->next!=p)
					 r=r->next;
				 free(p);
				 printf("\n====>delete success!\n");
				 getchar();
				 saveflag=1;
			 }
			 else
				 Nofind();
			 getchar();
		 }
	 }

	 //xiugaixueshengjilu:xiananshurudexuehaochaxundaogaijilu,ranhoutishiyonghuxiugaixuehaozhiwaidezhi,xuehaobunengxiugai

  void Modify(Link l)
	 {
		 Node *p;
		 char findmess[20];
		 if(!l->next);
		 {
			 system("cls");
			 printf("\n====>No student record!\n");
			 getchar();
			 return ;
		 }
		 system("cls");
		 printf("modify student recorder");
		 Disp(l);
		 stringinput(findmess,10,"input the existing student number:");
		 p=Locateofnum(l,findmess);
		 if(p)
		 {
			 printf("Number:%s,\n",p->data.num);
			 printf("Name:%s",p->data.name);
			 stringinput(p->data.name,15,"input new name:");
			 printf("C language score:%d,",p->data.cgrade);
			 p->data.cgrade=numberinput("C language Score[0~100]:");
			 printf("Math score:%d,",p->data.mgrade);
			 p->data.mgrade=numberinput("Math Score[0~100]:");
			 printf("English score:%d,",p->data.egrade);
			 p->data.egrade=numberinput("English Score[0~100]:");
			 p->data.total=p->data.egrade+p->data.cgrade+p->data.mgrade;
			 p->data.ave=(float)(p->data.total/3);
			 p->data.mingci=0;
			 printf("\n====>modif success! \n");
			 Disp(l);
			 saveflag=1;
		 }
		 else
			 Nofind();
		 getchar();
		 getchar();
	 }
	 //charujilu:anxuehaochaxundaoyaocharudejidianweizhi

void Insert(Link l)
	 {
		 Link p,v,newinfo ;
		 char ch,num[10],s[10];
		 int flag=0;
		 v=l->next;
		 system("cls");
		 Disp(l);
		 while(l)
		 {
			 stringinput(s,10,"please input insert location after the Number:");
			 flag=0;v=l->next;
			 while(v)
			 {
				 if(strcmp(v->data.num,s)==0){flag=1;break;}
				 v=v->next;
			 }
			 if(flag==1)
				 break;
			 else
			 {
				 getchar();
			     printf("\n====>The number %s is not existing,try again?(y/n):",s);
				 scanf("%c",&ch);
				 if(ch=='y'||ch=='Y')
				 {
					 continue;}
				 else {return;}
			 }
			 stringinput(num,10,"input new student Number:");
			 v=l->next;
			 while(v)
			 {
				 if(strcmp(v->data.num,num)==0)
				 {
					 printf("====?Sorry,the new number :'%s'is existing! \n",num);
					 printheader();
					 printdata(v);
					 printf("\n");
					 getchar();
					 getchar();
					 return;
				 }
				 v=v->next;
			 }
			 newinfo=(Node *)malloc(sizeof(Node));
			 if(!newinfo)
			 {
				 printf("\n allocate memory failure ");
				 return ;
			 }
			 strcpy(newinfo->data.num,num);
			 stringinput(newinfo->data.name,15,"Name");
			newinfo->data.cgrade=numberinput("C language Score[0~100]:");
			newinfo->data.mgrade=numberinput("Math Score[0~100]:");
			newinfo->data.egrade=numberinput("English Score[0~100]:");
			newinfo->data.total=newinfo->data.egrade+newinfo->data.cgrade+newinfo->data.mgrade;
            newinfo->data.ave=(float)(newinfo->data.total/3);
			newinfo->data.mingci=0;
			newinfo->next=NULL;
			saveflag=1;
			p=l->next;
			while(l)
			{
				if(strcmp(p->data.num,s)==0)
				{
					newinfo->next=p->next;
					p->next=newinfo;
					break;
				}
				p=p->next;
			}
			Disp(l);
			printf("\n\n");
			getchar();
			getchar();
		 }
	 }
		 //tongjifenxi

 void Count(Link l)
		{
			 Node *pm,*pe,*pc,*pt;
			 Node *r=l->next;
			 int countc[5]={0};
			 int countm[5]={0};
			 int counte[5]={0};

			 if(!r)
			 {
				 system("cls");
				 printf("\n====>NOT student record! \n");
				 getchar();
				 return ;
			 }
			 system("cls");
			 Disp(l);
			 pm=pe=pc=pt=r;
			 while(r)
			 {
				 if(r->data.cgrade<60) countc[0]++;
				 if(r->data.mgrade<60) countm[0]++;
				 if(r->data.egrade<60) counte[0]++;

				 if(r->data.cgrade>=60&&r->data.cgrade<70) countc[1]++;
				 if(r->data.mgrade>=60&&r->data.mgrade<70) countm[1]++;
				 if(r->data.egrade>=60&&r->data.egrade<70) counte[1]++;


				 if(r->data.cgrade>=70&&r->data.cgrade<80) countc[2]++;
				 if(r->data.mgrade>=70&&r->data.mgrade<80) countm[2]++;
                 if(r->data.egrade>=70&&r->data.egrade<80) counte[2]++;

				 if(r->data.cgrade>=60&&r->data.cgrade<90) countc[3]++;
				 if(r->data.mgrade>=60&&r->data.mgrade<90) countm[3]++;
                 if(r->data.egrade>=60&&r->data.egrade<90) counte[3]++;

                 if(r->data.cgrade>90) countc[4]++;
				 if(r->data.mgrade>90) countm[4]++;
				 if(r->data.egrade>90) counte[4]++;

				 if(r->data.cgrade>=pc->data.cgrade) pc=r;
				 if(r->data.mgrade>=pm->data.mgrade) pm=r;
				 if(r->data.egrade>=pe->data.egrade) pe=r;
				 if(r->data.total>=pt->data.total) pt=r;
				 r=r->next;
			 }
			 printf("\n-------------the Tongji result------------------\n");
			 printf("C Language  0~59:%d (rem)\n",countc[0]);
			 printf("C Language 60~69:%d (rem)\n",countc[1]);
			 printf("C Language 70~79:%d (rem)\n",countc[2]);
			 printf("C Language 80~89:%d (rem)\n",countc[3]);
			 printf("C Language 90~100:%d (ren)\n",countc[4]);
             printf("---------------------------------------------------\n");
			 printf("Math       0~59:%d (ren)\n",countm[0]);
             printf("Math       60~69:%d (ren)\n",countm[1]);
             printf("Math       70~79:%d (ren)\n",countm[2]);
             printf("Math       80~89:%d (ren)\n",countm[3]);
             printf("Math       90~100:%d (ren)\n",countm[4]);
			 printf("---------------------------------------------------\n");
			 printf("English     0~59:%d (ren)\n",counte[0]);
			 printf("English     60~79:%d (ren)\n",counte[1]);
			 printf("English     70~89:%d (ren)\n",counte[2]);
			 printf("English     80~89:%d (ren)\n",counte[3]);
			 printf("English     90~100:%d (ren)\n",counte[4]);
			 printf("---------------------------------------------------\n");
			 printf("The highest student by total score num:%s total score:%d\n",pt->data.num,pt->data.total);
			 printf("The highest student by English score num:%s English score:%d\n",pe->data.num,pe->data.egrade);
			 printf("The highest student by Math score num:%s Math score:%d\n",pm->data.num,pm->data.mgrade);
			 printf("The highest student by C language score num:%s C language score:%d\n",pc->data.num,pc->data.cgrade);
			 printf("\n\npress any key to return");
			 getchar();
	 }
		 //liyongxuanzepaixufashixiandanlianbiaode anzongfenpailie
void Sort(Link l)
    {
			 struct student temp;
			 Node *p1,*p2,*p;
			 int i=0;
			 if(l->next==NULL)
			 {
				 system("cls");
				 printf("\n====>Not student record! \n");
				 getchar();
				 return;
			 }
			 system("cls");
			 Disp(l);
			 p1=l->next;
			 while(p1)
			 {
				 p2=p1->next;
				 p=p1;
				 while(p2)
				 {
					 if(p2->data.total>=p->data.total)
						 p=p2;
					 p2=p2->next;
				 }
				 temp=p->data;
				 p->data=p1->data;
				 p1->data=temp;
				 p1=p1->next;
			 }
			 p=l->next;
			 while(p!=NULL)
			 {
				 i++;
				 p->data.mingci=i;
				 p=p->next;
			 }
			 Disp(l);
			 saveflag=1;
			 printf("\n    =====>sort complete! \n");
	 }
void Save(Link l)
{
			 FILE *fp;
			 Node *p;
			 int count=0;
			 fp=fopen("c:\\student","wb");
			 if(fp==NULL)
			 {
				 printf("\n====>open file error!\n");
				 getchar();
				 return ;
			 }
			 p=l->next;
			 while(p)
			 {
				 if(fwrite(p,sizeof(Node),1,fp)==1)
				 {
					 p=p->next;
					 count++;
				 }
				 else
				 {
					 break;
				 }

			 }
			 if(count>0)
			 {
				 getchar();
			 printf("\n\n\n\n=====>save file complete,total save's record number is:%d\n",count);
			 getchar();
			 saveflag=0;
			 }
			 else
			 {
				 system("cls");
				 printf("the current link is empty,no student record is save! \n");

				 getchar();
			 }
			 fclose(fp);
	 }


void main()
{
			 Link l;
			 FILE *fp;
			 int select,count;
			 char ch;
			 Node *p,*r;

			 l=(Node *)malloc(sizeof(Node));
			 if(!l)
			 {
				 printf("\nallocate memory failure");
				 return;
			 }
			 l->next=NULL;
			 r=l;
			 fp=fopen("C:\\student","ab+ ");
			 if(fp==NULL)
			 {
				 printf("\n=====>can not open file!\n");
				 exit(0);
			 }
			 while(! feof(fp))
			 {
				 p=(Node*) malloc(sizeof(Node));
				 if(!p)
				 {
					 printf("memory malloc failure!\n");
					 exit(0);
				 }
				 if(fread(p,sizeof(Node),1,fp)==1);
				 {
					 p->next=NULL;
					 r->next=p;
					 r=p;
					 count++;
				 }
			 }
			 fclose(fp);
			 printf("\n====> open file success,the total records number is :%d.\n",count);
			 printf("\n====>Press any key to enter the Menu!");
			 getchar();
			 while(l)
			 {
				 system("cls");
				 menu();
				 p=r;
				 printf("\n     Please Enter your choice(0~9):");
				 scanf("%d",select);
				  if(select==0)
				  {
					  if(saveflag==1)
					  {
						  getchar();
						  printf("\n=====>Whether save the modified record to file?(y/n);");
						  scanf("%c",&ch);
						  if(ch=='y'||ch=='Y')
							  Save(l);
					  }
					  printf("====>thank you for useness!");
					  getchar();
					  break;
				  }
				  switch(select)
				  {
                      case 1:Add(l);break;
					  case 2:Del(l);break;
					  case 3:Qur(l);break;
					  case 4:Modify(l);break;
					  case 5:Insert(l);break;
					  case 6:Count(l);break;
					  case 7:Sort(l);break;
					  case 8:Save(l);break;
					  case 9:system("cls");Disp(l);break;
					  default:Wrong();getchar();break;
				  }
			 }
}

