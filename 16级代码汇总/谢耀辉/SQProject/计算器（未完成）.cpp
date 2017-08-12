#include <iostream>
#include <cmath>
#include <cctype>
#include "SQtemplate.h"

using namespace std;

class Calculator
{
	Stack<double> sdata;					//数据堆栈
	Stack<char> oprtor;						//符号堆栈
	double left, right;
	bool Get2Operands();					//从栈中退出两个操作数
	void DoOperator(char op);			//形成运算指令
public:
	Calculator() {}
	void Run();
	void Clear();									//清空堆栈
	friend int isp(char op);					//比较栈内符号优先级
	friend int icp(char op);					//
};

int isp(char op)
{
	switch (op)
	{
	case'#': return 0;
	case'(': return 1;
	case'*': case'/': return 5;
	case'+': case'-': return 3;
	case')': return 8;
	}
}

int icp(char op)
{
	switch (op)
	{
	case'#': return 0;
	case'(': return 8;
	case'*': case'/': return 4;
	case'+': case'-': return 2;
	case')': return 1;
	}
}

bool Calculator::Get2Operands()				//从数据栈中取出两个数
{
	if (sdata.isEmpty())
	{
		cout << "Error!" << endl;
		return false;
	}
	sdata.Pop(right);
	if (sdata.isEmpty())
	{
		cout << "Error!" << endl;
		return false;
	}
	sdata.Pop(left);
	return true;
}

void Calculator::DoOperator(char op)
{
	double value;
	bool result;
	result = Get2Operands();
	if (result == true)
	{
		switch (op)
		{
		case '+':
			value = left + right;
			sdata.Push(value);
			break;
		case '-':
			value = left - right;
			sdata.Push(value);
			break;
		case '*':
			value = left*right;
			sdata.Push(value);
			break;
		case '/':
			if (right == 0.0)
			{
				cout << "Divide by 0!" << endl;
				Clear();
			}
			else
			{
				value = left / right;
				sdata.Push(value);
			}
			break;
		}
	}
	else Clear();
}


void Calculator::Clear()	
{
	while (!sdata.isEmpty())
	{
		sdata.Init();
	}
	while (!oprtor.isEmpty())
	{
		oprtor.Init();
	}
}


void Calculator::Run()
{
	char ch = '#', zh, op;
	double value;
	oprtor.Push(ch);
	cin.get(ch);
	while (!oprtor.isEmpty() && ch != '=')
	{
		if (isdigit(ch))
		{
			double num = 0;
			while (cin.get(ch) && isdigit(ch))
				num = num * 10 + (ch - '0');
			if (ch == '.')
			{
				double f = 0;
				int i = 1;
				while (cin.get(ch) && isdigit(ch))							//如果是数据，压入堆栈
				{
					if (i > 6)
						continue;
					f += pow(0.1, i++)*(ch - '0');
				}
				num += f;
			}
			sdata.Push(num);
		}
		else if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '(' && ch != ')')
		{
			cout << "表达式不合法！" << endl;
			return;
		}
		else
		{
			if (oprtor.Pop(zh) == false)
			{
				cout << "Error!" << endl;
				return;
			}

			if (isp(zh) < icp(ch))
			{
				oprtor.Push(ch);						//符号优先级大，则继续压入
				cin.get(ch);
			}
			else if (isp(zh) > icp(ch))
			{
				oprtor.Pop(op);
				DoOperator(op);
			}
			else
			{
				oprtor.Pop(op);
				if (op == '(')
					cin.get(ch);
			}
		}
	}
	if (ch == '=')
	{
		oprtor.Pop(op);
		DoOperator(op);
		sdata.Pop(value);
		cout << value << endl;
	}
}

int main()
{
	Calculator cal;
	cout << "输入一个算术表达式，以 = 结束，支持 + - * / ( )" << endl;
	cal.Run();
	system("pause");
	return 0;
}