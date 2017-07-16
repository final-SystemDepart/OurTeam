// 表达式的简单计算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<double>num_stk;			//数字栈
stack<char>opr_stk;				/*运算符号栈*/


void oprate()
{
	char op = opr_stk.top();		//取出运算符号栈中的顶部的运算符参与计算
	double a, b, res;			//运算时取出两个数字参与计算
	a = num_stk.top();			//取出第一个
	num_stk.pop();				//删去数字栈顶的元素，从而取出第二个
	b = num_stk.top();
	num_stk.pop();
	switch (op)					//对运算符号进行分类计算
	{
	case'+':
		res = a + b;
		break;
	case'-':
		res = a - b;
		break;
	case'*':
		res = a * b;
		break;
	case'/':
		res = a / b;
		break;
	default:							//如果是数字则直接结束不运算
		break;
	}
	opr_stk.pop();					//删去运算过的运算符
	num_stk.push(res);				//将运算结果放到栈顶，以便后续计算 
}

int opr_rank(char x)					//运算符号优先级判断函数
{
	if (x == '(')
		return 0;
	if (x == '+')
		return 1;
	if (x == '-')
		return 2;
	if (x == '*')
		return 3;
	if (x == '/')
		return 4;
}

int main()
{
	int i;
	double x = 0;						//x表示表达式中的数					
	string in_str;
	cout << "请输入表达式：" << endl;
	cin >> in_str;
	for (i = 0; i < in_str.size(); i++)
	{ 
		if ((in_str[i] >= '0')&&(in_str[i] <= '9'))
		{
			x = x * 10 + in_str[i]-'0';				//如果字符串中的数字是12 第一位是1 第二位是2所以 要用1*10+2 即：x*10+x 
			if (i == in_str.size() - 1)			//采用判断输入数字时，会忽略最后的数，所以单列出来，单独输入  
			{
				num_stk.push(x);
			}
			
		}
													//如果字符不为数字，就是运算符号，遇到运算符号要把数字放到数字栈中，然后读取运算符
		else                              
		{
			if (x)
			{
				num_stk.push(x);					//非末位数字推入栈中
				x = 0;								//重新归零
			}
			if (opr_stk.empty())					//如果符号栈为空 则读取一个符号
			{
				opr_stk.push(in_str[i]);
			}
			else if ((in_str[i] == '(')||(in_str[i] == '（'))
			{
				opr_stk.push(in_str[i]);
				
			}
			else if ((in_str[i] == ')') || (in_str[i] == '）'))
			{
				while (opr_stk.top() != '(')
				{
					oprate();								//在存入前括号后，重新进行判断，就相当于先算括号内的，所以遇到后括号时，就已经进行过二级运算了
				}
				opr_stk.pop();								//删除前括号
			}
			else if (opr_rank(in_str[i]) <= opr_rank(opr_stk.top()))//两个相邻的符号进行优先级比较，如果后一个没前一个优先级高 则进行运算
			{
				oprate();
				opr_stk.push(in_str[i]);
			}
			else
				opr_stk.push(in_str[i]);
		}
	}
	while (!opr_stk.empty())
		oprate();
	double res = num_stk.top();
	cout << res << endl;
    return 0;
}