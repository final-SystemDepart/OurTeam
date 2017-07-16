// 强制转换.cpp : 定义控制台应用程序的入口点。
//十转二：A+
//二转十：不支持太多位
//注释：有 较多
//命名：B+ 有缩写
//#include "stdafx.h"
#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void result(int n, int i,int a[],int b[])						//用于输出转换后的结果
{
	i--;														//在循环结束时多自增了一次
	n--;														//同上
	if (i == -1)												//确保小数点后至少有一位
	{
		i = 0;
		b[0] = 0;
	}
	if (n == -1)												//确保小数点后至少有一位
	{
		n = 0;
		a[0] = 0;
	}
	if (i > 5)													//保留六位小数
	{
		i = 5;
	}
	for (; n >= 0; n--)											//整数部分倒序输出
	{
		cout << a[n];
	}
	cout << ".";												//输出小数点
	for (int j = 0; i >= j; j++)								//小数部分正序输出
	{
		cout << b[j];
	}
	cout << endl;
}
int main()
{
	double bin;											//表示二进制
	double dec;											//表示十进制
	double ingeter;										//表示整数
	double small;										//表示小数
	int inge[1000];										//用数组表示整数部分各个位置上的数字
	int sma[1000];										//小数
	double way;											//选择的方式；
	int ingeter_1;
	while (1)
	{
		cout << "1表示十进制转换成二进制，2表示二进制转换成十进制，0表示退出。请选择：";
		cin >> way;
		if (way == 1)
		{
			cout << "请输入十进制数：";
			cin >> dec;
			ingeter = floor(dec);								//floor函数用来取整数，返回值为double类型
			small = dec - ingeter;								//减去整数得小数部
			ingeter_1 = ingeter;								//强制转换成int类型，以便使用%取各个位置上的数；
			int n = 0;
			while (ingeter_1 != 0)
			{
				int num = ingeter_1 % 2;						//num表示各个位置上的数值
				inge[n] = num;
				ingeter_1 = ingeter_1 / 2;
				n++;
			}
			int i = 0;
			while (small != 0)
			{
				int num = small * 2;								//将10进制小数转换成2进制
				sma[i] = num;
				small = small * 2 - num;
				i++;
			}
			cout << "转换成二进制后的结果为：";
			result(n, i, inge, sma);
		}

		/*二进制转换成十进制*/
		if (way == 2)
		{
			int flag = 1;
			cout << "请输入二进制数：";
			cin >> bin;
			ingeter = floor(bin);								//floor函数用来取整数，返回值为double类型
			small = bin - ingeter;								//减去整数得小数部分
			ingeter_1 = ingeter;								//强制转换成int类型，以便使用%取各个位置上的数；
			int n = 0;
			int bin_inge = 0;
			while (ingeter_1 != 0)
			{
				int num = ingeter_1 % 10;						//num表示各个位置上的数值
				if (num > 1)									//二进制中不存在2
				{
					cout << "输入数据有误！" << endl;
					flag = 0;
					break;
				}
				inge[n] = num*pow(2, n);
				ingeter_1 = ingeter_1 / 10;
				bin_inge = bin_inge + inge[n];
				n++;
			}
			int i = 0;
			double bin_small = 0;
			while (small != 0)
			{
				int k = i;
				small = small * 10;
				int num = (int)small;
				if (small > 3&&i <= 6)
				{
					cout << "输入数据有误！" << endl;
					flag = 0;
					break;
				}
				double m = 0.5;										//1/2的n次方
				for (; k > 0; k--)
				{
					m = m*m;
				}
				bin_small = bin_small + num*m;
				i++;
				small = small - (int)small;
			}
			dec = bin_small + bin_inge;
			if (flag == 1)
			{
				cout << "转换成十进制后的结果为：" << dec << endl;
			}

		}
		if (way == 0)
			break;
		if (way != 1 && way != 2)
		{
			cout << "输入指令有误！";
		}
		system("pause");
	}
	return 0;
}
