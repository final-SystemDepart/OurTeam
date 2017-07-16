#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"math.h"
#define true 1
#define false 0
#define OPSETSIZE 8
typedef int Status;
unsigned char Prior[8][8] =
{
   // '+' '-' '*' '/' '(' ')' '#' '^'
    /*'+'*/'>','>','<','<','<','>','>','<',
    /*'-'*/'>','>','<','<','<','>','>','<',
    /*'*'*/'>','>','>','>','<','>','>','<',
    /*'/'*/'>','>','>','>','<','>','>','<',
    /*'('*/'<','<','<','<','<','=',' ','<',
    /*')'*/'>','>','>','>',' ','>','>','>',
    /*'#'*/'<','<','<','<','<',' ','=','<',
    /*'^'*/'>','>','>','>','<','>','>','>'
};
typedef struct StackChar
{
    char c;
    struct StackChar *next;
}SC;
typedef struct StackFloat
{
    float f;
    struct StackFloat *next;
}SF;
SC *Push(SC *s,char c)
{
    SC *p=(SC*)malloc(sizeof(SC));
    p->c=c;
    p->next=s;
    return p;
}
SF *Push(SF *s,float f)
{
    SF *p=(SF*)malloc(sizeof(SF));
    p->f = f;
    p->next = s;
    return p;
}
SC *Pop(SC *s)
{
    SC *q=s;
    s=s->next;
    free(q);
    return s;
}
SF *Pop(SF *s)
{
    SF *q=s;
    s=s->next;
    free(q);
    return s;
}
float Operate(float a,unsigned char theta, float b)
{
    switch(theta)
    {
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    case '^': return pow(a,b);
    default : return 0;
    }
}
char OPSET[OPSETSIZE]={'+','-','*','/','(',')','#','^'};
Status In(char Test,char *TestOp)
{
    int Find=false;
	for (int i=0; i< OPSETSIZE; i++)
   {
        if(Test == TestOp[i])
           Find= true;
    }
    return Find;
}
Status ReturnOpOrd(char op,char *TestOp)
{
    for(int i=0; i< OPSETSIZE; i++)
    {
        if (op == TestOp[i])
            return i;
    }
}
char precede(char Aop, char Bop)
{
    return Prior[ReturnOpOrd(Aop,OPSET)][ReturnOpOrd(Bop,OPSET)];
}

float EvaluateExpression(char* MyExpression)
{

    SC *OPTR=NULL;       // 运算符栈，字符元素
    SF *OPND=NULL;       // 运算数栈，实数元素
    char TempData[20];
    float Data,a,b;
    char theta,*c,Dr[]={'#','\0'};
    OPTR=Push(OPTR,'#');
    c=strcat(MyExpression,Dr);
    strcpy(TempData,"\0");
    while (*c!= '#' || OPTR->c!='#')
    {
        if (!In(*c, OPSET))
        {
            Dr[0]=*c;
            strcat(TempData,Dr);
            c++;
            if (In(*c, OPSET))
            {
                Data=atof(TempData);
                OPND=Push(OPND, Data);
                strcpy(TempData,"\0");
            }
        }
        else
        {
            switch (precede(OPTR->c, *c))
            {
            case '<':
                OPTR=Push(OPTR, *c);
                c++;
                break;
            case '=':
                OPTR=Pop(OPTR);
                c++;
                break;
            case '>':
                theta=OPTR->c;OPTR=Pop(OPTR);
                b=OPND->f;OPND=Pop(OPND);
                a=OPND->f;OPND=Pop(OPND);
                OPND=Push(OPND, Operate(a, theta, b));
                break;
            }
        }
    }
    return OPND->f;
}

int main(void)
{
    while(1){
    char s[128];
     puts("请输入表达式:");
   gets(s);
    puts("该表达式的值为:");
    printf("%s\b=%g\n",s,EvaluateExpression(s));
   system("pause");  }
    return 0;
}
