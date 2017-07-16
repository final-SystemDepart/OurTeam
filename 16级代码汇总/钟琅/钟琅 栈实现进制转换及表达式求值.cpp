#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;



///////////////////////////////////
/////////////顺序栈模板

typedef int Status_code;

const int MAX_SIZE=1000;

const int OVER_FLOW=-1;
const int UNDER_FLOW=-1;
const int SUCCESS=1;

template<class ElemType>
class SqStack
{
protected:
	int count;
	ElemType elem[MAX_SIZE];
	bool Full() const;
	void Init();
public:
	SqStack();
	~SqStack();
	int Length() const;
	bool Empty() const;
	void Clear();
	void Traverse(void(*Visit)(ElemType&));
	Status_code Push(const ElemType &e);
	Status_code Pop(ElemType &e);
	Status_code Top(ElemType &e);
	SqStack(const SqStack<ElemType> &copy);
	SqStack<ElemType> &operator=(const SqStack<ElemType>&copy);
};

template<class ElemType>
bool SqStack<ElemType>::Full() const
{
	return MAX_SIZE==count;
}

template<class ElemType>
void SqStack<ElemType>::Init()
{
	count=0;
}

template<class ElemType>
SqStack<ElemType>::SqStack()
{
	Init();
}

template<class ElemType>
SqStack<ElemType>::~SqStack()
{
	Clear();
}

template<class ElemType>
int SqStack<ElemType>::Length() const
{
	return	count;
}

template<class ElemType>
bool SqStack<ElemType>::Empty() const
{
	return count==0;
}

template<class ElemType>
void SqStack<ElemType>::Clear()
{
	count=0;
}

template<class ElemType>
void SqStack<ElemType>::Traverse(void(*Visit)(ElemType&))
{
	for(int curPosiyion=1;curPosiyion<=Length();curPosiyion++)
	{
		(*Visit)(elem[curPosiyion-1]);
	}
}

template<class ElemType>
Status_code SqStack<ElemType>::Push(const ElemType &e)
{
	if(Full())
	{
		return OVER_FLOW;
	}
	else
	{
		elem[count++]=e;
		return SUCCESS;
	}
}

template<class ElemType>
Status_code SqStack<ElemType>::Top(ElemType &e)
{
	if(Empty())
	{
		return OVER_FLOW;
	}
	else
	{
		e=elem[count-1];
		return SUCCESS;
	}
}

template<class ElemType>
Status_code SqStack<ElemType>::Pop(ElemType &e)
{
	if(Empty())
	{
		return UNDER_FLOW;
	}
	else
	{
		e=elem[count-1];
		count--;
		return SUCCESS;
	}
}

template<class ElemType>
SqStack<ElemType>::SqStack(const SqStack<ElemType> &copy)
{
	if(copy.Empty())
	{
		Init();
	}
	else
	{
		count=copy.count;
		for(int curposition=1;curposition<=Length();curposition++)
		{
			elem[curposition-1]=copy.elem[curposition-1];
		}
	}
}

template<class ElemType>
SqStack<ElemType>&SqStack<ElemType>::operator=(const SqStack<ElemType>&copy)
{
	if(&copy!=this)
	{
		if(copy.Empty())
		{
			Init();
		}
		else
		{
			count=copy.count;
			for(int curposition=1;curposition<=Length();curposition++)
			{
				elem[curposition-1]=copy.elem[curposition-1];
			}
		}
	}
	return this;
}





////////////////////////////////////////////////
////////////////算术表达式求值

class calculator
{
public:
	void Run();
private:
	bool IsOperator(char ch);
	char Precede(char theta1,char theta2);
	double Operate(double left,char theta,double right);
	void Get2Operands(SqStack<double>&opnd,double &left,double &right);
};

bool calculator::IsOperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='('||ch==')'||ch=='=')
		return true;
	else
		return false;
}

char calculator::Precede(char theta1,char theta2)
{
	if((theta1=='+'&&(theta2=='+'||theta2=='-'||theta2==')'||theta2=='='))||
		(theta1=='-'&&(theta2=='+'||theta2=='-'||theta2==')'||theta2=='='))||
		(theta1=='*'&&(theta2=='+'||theta2=='-'||theta2=='*'||theta2=='/'||theta2==')'||theta2=='='))||
		(theta1=='/'&&(theta2=='+'||theta2=='-'||theta2=='*'||theta2=='/'||theta2==')'||theta2=='='))||
		(theta1==')'&&(theta2=='+'||theta2=='-'||theta2=='*'||theta2=='/'||theta2==')'||theta2=='=')))
	{
		return '>';
	}
	if((theta1=='+'&&(theta2=='*'||theta2=='/'||theta2=='('))||
		(theta1=='-'&&(theta2=='*'||theta2=='/'||theta2=='('))||
		(theta1=='*'&&(theta2=='('))||
		(theta1=='/'&&(theta2=='('))||
		(theta1=='('&&(theta2=='+'||theta2=='-'||theta2=='*'||theta2=='/'||theta2=='('))||
		(theta1=='='&&(theta2=='+'||theta2=='-'||theta2=='*'||theta2=='/'||theta2=='(')))
	{
		return '<';
	}
	if((theta1=='('&&theta2==')')||(theta1=='='&&theta2=='='))
	{
		return '=';
	}
	if((theta1==')'&&theta2=='(')||(theta1=='('&&theta2=='=')||(theta1=='='&&theta2==')'))
	{
		return 'e';
	}
}

double calculator::Operate(double left,char theta,double right)
{
	if(theta=='+') return left+right;
	if(theta=='-') return left-right;
	if(theta=='*') return left*right;
	if(theta=='/') return left/right;
}

void calculator::Get2Operands(SqStack<double>&opnd,double &left,double &right)
{
	opnd.Pop(right);
	opnd.Pop(left);
}

void calculator::Run()
{
	cout<<"输入表达式（结尾带等号）：";
	SqStack<double>opnd;
	SqStack<char>optr;
	optr.Push('=');
	char ch;
	char optrTop;
	double operand;
	char theta;
	cin>>ch;
	while((optr.Top(optrTop),optrTop!='=')||ch!='=')
	{
		if(!IsOperator(ch))
		{
			cin.putback(ch);
			cin>>operand;
			opnd.Push(operand);
			cin>>ch;
		}
		else
		{
			switch(Precede(optrTop,ch))
			{
			case '<':
				optr.Push(ch);
				cin>>ch;
				break;
			case '=':
				optr.Pop(optrTop);
				cin>>ch;
				break;
			case '>':
				double left,right;
				Get2Operands(opnd,left,right);
				optr.Pop(theta);
   				opnd.Push(Operate(left,theta,right));
				break;
			case 'e':
				cout<<"操作符匹配错误!";
				exit(2);
			}
		}
	}
	opnd.Top(operand);
	cout<<"表达式的值为"<<operand<<endl<<endl;
}







/////////////////////////////////
/////////////进制转换
//十进制数n转换为2进制
void convert10to2()
{
	cout<<"输入十进制数：";
	double n;
	cin>>n;
	cout<<"转换后的二进制数是:";
	SqStack<int>s;
	double t=n-(int)n;//小数部分t
	int p=(int)n;//整数部分p
	while(p)
	{
		s.Push(p%2);
		p=p/2;
	}
	int a;
	while(!s.Empty())
	{
		s.Pop(a);
		cout<<a;
	}
	cout<<".";
	while(t!=0)
	{
		a=(int)(t*2);
		cout<<a;
		t=t*2-a;
	}
	cout<<endl<<endl;
}

//二进制转换十进制
void convert2to10()
{
	cout<<"输入二进制数（输入#表示结束）：";
	SqStack<char>z;//栈z保存整数部分
	SqStack<char>x;//栈x保存小数部分
	int sum1=0;
	double sum2=0;
	char c;
	cin>>c;
	while(c!='.')
	{
		z.Push(c);
		cin>>c;
	}
	int len1=z.Length();
	for (int i=0;i<len1;i++)
	{
		z.Pop(c);
		sum1=sum1+(c-48)*pow(2.0,i);
	}
	cin>>c;
	while(c!='#')
	{
		x.Push(c);
		cin>>c;
	}
	int len2=x.Length();
	for (len2;len2>0;len2--)
	{
		x.Pop(c);
		sum2=sum2+(c-48)*pow(2.0,-len2);
	}
	cout<<"转换后的十进制数是"<<sum1+sum2<<endl<<endl;
}


int main()
{
	calculator a;
	a.Run();
	convert2to10();
	convert10to2();
	return 0;
}
