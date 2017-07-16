// iMP.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
#include<string>
using namespace std;
void get_next(string tar_str, int next[])								//根据已匹配的字符数目来确定往后移动多少个距离
{
	int i = 0;
	next[0] = -1;
	int j = -1;
	while (i < tar_str.size())											//寻找子字符串，即确定匹配个数和移动个数的关系
	{
		if (j == -1 || tar_str[i] == tar_str[j])						//j=-1表示尚未开始匹配
		{
			i++;
			j++;
			next[i] = j;												//如果相同，记下此时的j的值即为移动距离
		}
		else
		{
			j = next[j];												//不等就往前推，寻找相等的情况
		}
	}
}
void iMP(string in_str,string tar_str)
{
	int flag = 0;								//匹配是否成功的标识
	int i = 0, j = -1;
	int next[1000];								//移动位置与匹配个数的关系数组
	get_next(tar_str, next);
	for (i = 0; i < in_str.size(); i++)							//利用双循环匹配,多次输出不同位置上的结果
	{
		for (j = 0; j < tar_str.size(); )
		{
			if (in_str[i] == tar_str[j])						//判断各个位置是否相等
			{
				if ((j == tar_str.size() - 1))			/*如果模式串的最后一位也相等了，那么就算是匹配成功了*/
				{
					cout << "首字符出现位置：" << i + 2 - tar_str.size() << endl;
					flag = 1;								/*匹配成功标识变为1*/
				}
				else
				{
					i++;								//继续往后比对
				}
				j++;
			}
			else
			{
				j = next[j];							//比对不成功，利用get_next函数寻找移动位置
			}
		}
	}
	if (flag == 0)
		cout << "匹配失败！" << endl;
}

int main()
{
	string in_str;
	cout << "请输入主字符串：";
	cin >> in_str;
	string tar_str;
	cout << "请输入模式串：";
	cin >> tar_str;
	iMP(in_str, tar_str);
    return 0;
}

