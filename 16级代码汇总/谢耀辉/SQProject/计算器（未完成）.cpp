#include <iostream>
#include <cmath>
#include <cctype>
#include "SQtemplate.h"

using namespace std;

class Calculator
{
	Stack<double> sdata;					//���ݶ�ջ
	Stack<char> oprtor;						//���Ŷ�ջ
	double left, right;
	bool Get2Operands();					//��ջ���˳�����������
	void DoOperator(char op);			//�γ�����ָ��
public:
	Calculator() {}
	void Run();
	void Clear();									//��ն�ջ
	friend int isp(char op);					//�Ƚ�ջ�ڷ������ȼ�
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

bool Calculator::Get2Operands()				//������ջ��ȡ��������
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
				while (cin.get(ch) && isdigit(ch))							//��������ݣ�ѹ���ջ
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
			cout << "���ʽ���Ϸ���" << endl;
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
				oprtor.Push(ch);						//�������ȼ��������ѹ��
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
	cout << "����һ���������ʽ���� = ������֧�� + - * / ( )" << endl;
	cal.Run();
	system("pause");
	return 0;
}