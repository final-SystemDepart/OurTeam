#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define ZERO 1E-6

using namespace std;

/* 十进制转二进制 */

/* 整数部分 */
void db_integer(long n)
{
	if (n > 0)
	{
		db_integer(n / 2);
		cout << n%2;
	}
}
/* 小数部分 */
void db_decimal(double m)
{
	if (m > ZERO)
	{
		m = m * 2;
		cout << (long)m;
		db_decimal(m - (long)m);
	}
}

void dec_to_bin(double num)
{
	db_integer((long)num);
	if (num - (long)num > ZERO)			//判断是否有小数
	{
		putchar('.');
		db_decimal(num - (long)num);
	}
	cout << endl;
}

/* 二进制转十进制 */
void bin_to_dec()
{
	double integer = 0.0;	//整数部分
	double decimal = 1.0;		//小数部分
	int signal = 1;			//正负号
	int flag = 0;				//状态标志
	while (flag != 3)
	{
		switch (flag)
		{
		case 0:				/* flag==0：第一个字符，可以是负号或小数点，也可以是0或1  */
			switch (getchar())
			{
			case '1':
				flag = 1;
				integer = 1;
				break;
			case '0':
				flag = 1;
				break;
			case '-':
				flag = 1;
				signal = -1;
				break;
			case '.':
				flag = 2;
				break;
			default:
				flag = 3;		/* 遇非法字符（包括回车）结束输入	 */
			}
			break;
		case 1:				/* flag==1：整数部分，可以是0或1，也可以是小数点	 */
			switch (getchar())
			{
			case '1':
				integer = integer * 2 + 1;
				break;
			case '0':
				integer = integer * 2;
				break;
			case '.':
				flag = 2;
				break;
			default:
				flag = 3;		/* 遇非法字符（包括回车）结束输入 */
			}
			break;
		case 2:				/* flag==2：小数部分，可以是0或1 */
			decimal = decimal / 2;
			switch (getchar())
			{
			case '1':
				integer += decimal;
				break;
			case '0':
				break;
			default:
				flag = 3;		/* 遇非法字符（包括回车）结束输入	 */
			}
		}
	}
	cout << integer * signal << endl;
}

int main()
{
	while (1)
	{
		cout << "1. 十进制 -> 二进制\n2. 二进制 -> 十进制\n0. 退出\n请选择：" << endl;
		int s;
		cin >> s;
		switch (s)
		{
		case 1:
			double num;
			cout << "请输入一个十进制数：";
			cin >> num;
			while (cin.fail())
			{
				while (getchar() != '\n')
					continue;
				cin.clear();
				cout << "输入错误！请重新输入：";
				cin >> num;
			}
			if (num < 0)
			{
				putchar('-');
				num = -num;
			}
			cout << "转换成二进制数为：";
			dec_to_bin(num);
			break;
		case 2:
			cout << "请输入二进制数：";
			while (getchar() != '\n')					//吞掉换行符
				continue;
			bin_to_dec();
			break;
		case 0:
			exit(0);
			return 0;
		default:
			while (getchar() != '\n')
				continue;
			cin.clear();
			cout << "Error!" << endl;
			break;
		}
		cout << endl;
	}
}
