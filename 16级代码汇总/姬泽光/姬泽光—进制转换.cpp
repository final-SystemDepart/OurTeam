// 强制转换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void result(int n, int i, int a[], int b[])						//用于输出转换后的结果
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

void dec_to_bin(double dec)								//十进制变成二进制函数
{
	int ingeter_1;
	double ingeter;										//表示整数
	double small;										//表示小数
	int inge[1000];										//用数组表示整数部分各个位置上的数字
	int sma[1000];										//小数
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

void bin_to_dec(string in_str)
{
	int point_flag = 0;											//用于确认是否有小数点
	int num_flag = 0;											//用于确认数据是否规范
	double  bin_ing[1000];										//二进制整数位上的每个数字
	double  bin_sma[1000];										//二进制小数位上的每个数字
	double sum_ing = 0;											//sum_ing表示整数部分的值
	double sum_sma = 0;											//初始化sum_sma，另其等于小数部分的值
	int i;														//定义一个循环变量
	int j;														//j用于确定小数点的位置
	for (i = 0; i < in_str.size(); i++)							//搜索是否有小数点
	{
		if (in_str[i] == '.')									//如果有，那么将这个字符段分为小数和整数两段分别计算
		{
			point_flag = 1;											//flag为真表示有，为假则没有
			j = i;
			j++;
			break;
		}
		else
			j = in_str.size() + 1;								//为了与j++保持一致
	}
	for (i = 0; i < j - 1; i++)
	{
		if (in_str[i] >= '2')
		{
			num_flag = 1;
			break;
		}
		if ((in_str[i] >= '0') && (in_str[i] <= '9'))		//读取每一个数字放入到整数数组中；
		{
			bin_ing[i] = in_str[i] - '0';
			sum_ing = sum_ing + bin_ing[i] * pow(2, (j - i - 2));	//计算整数部分的值
		}
	}
	double m = 0.5;
	int k = 1;													//k表示该数字所在的位数，用于作为转换成10进制时的0.5的指数
	for (i = j; i < in_str.size(); i++)
	{
		if (in_str[i] >= '2')
		{
			num_flag = 1;
			break;
		}
		if ((in_str[i] >= '0') && (in_str[i] <= '9'))
		{
			bin_sma[i] = in_str[i] - '0';
			sum_sma = sum_sma + bin_sma[i] * pow(m, k);
			k++;
		}
	}
	if (num_flag == 0)
	{
		/*如果直接输出sum，则会以科学计数法的形式输出，所以一个数字一个数字的输出*/
		if (sum_ing == 0)											//如果整数部分为零，则整数部分输出0；
		{
			cout << '0';
		}
		int ing_num;											//ing_num表示整数部分的每个位置上的数字
		ing_num = (int)sum_ing;
		double num[1000];										//num表示每个位置上的数字
		i = 0;
		while (ing_num != 0)									//利用循环取出整数部分的数字
		{
			num[i] = ing_num % 10;
			ing_num = ing_num / 10;
			i++;
		}
		for (int k = i - 1; k >= 0; k--)										//倒序输出整数位上的数字
		{
			cout << num[k];
		}
		if (point_flag == 1)												//如果输入的是小数，在整数输出完后 输出小数点
		{
			cout << '.';
		}
		int small_num;											//small_num表示小数部分每个位置上的数字
		while (sum_sma != 0)
		{
			sum_sma = sum_sma * 10;
			small_num = floor(sum_sma);
			cout << small_num;
			sum_sma = sum_sma - small_num;
		}
	}
	else
	{
		cout << "输入数据有误！";
	}
	cout << endl;
}

int main()
{
	double way;											//选择的方式；
	while (1)
	{
		cout << "用1表示十进制转换成二进制，2表示二进制转换成十进制，0表示退出。请选择：";
		cin >> way;
		/*十进制转换成二进制*/
		if (way == 1)
		{
			double dec;
			cout << "请输入十进制数：";
			cin >> dec;
			dec_to_bin(dec);
		}
		/*二进制转换成十进制*/
		if (way == 2)
		{
			string bin_str;
			cout << "请输入二进制数：" << endl;
			std::cin >> bin_str;
			bin_to_dec(bin_str);
		}
		if (way == 0)
			break;
		if (way != 1 && way != 2)
		{
			cout << "输入指令有误！";
		}
	}
	return 0;
}