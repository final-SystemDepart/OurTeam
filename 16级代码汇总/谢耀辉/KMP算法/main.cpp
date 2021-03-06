#include <stdio.h>
#include "kmp-algo.h"

using namespace std;

int main()
{
	string text;
	string subtext;
	printf("输入模板字符串：");
	cin >> text;
	printf("输入子串：");
	cin >> subtext;
	printf("\nText = %s\n", text.data());
	printf("Subtext = %s\n\n", subtext.data());
	int result = kmpSearch(text, subtext);
	if (result == False)
		printf("找不到子串 \"%s\"\n", subtext.data());
	else
	{
		printf("子串第一次出现的位置是：%d\n", result);
		printf("%s\n", text.data());
		for (int i = 1; i < result; i++)
			printf(" ");
		printf("∧\n");
	}
	getchar();
	getchar();
	return 0;
}
