#include <iostream>
#include<string>

using namespace std;

void Next(string p,int next[],int length)
{
	int k = 0;
	next[0] = 0;
	for(int i = 1 ; i < length ; i++)
	{
		while( k > 0 && p[i] != p[k] )
		{
			k = next[k-1];
		}
		if(p[k] == p[i])
		{
			k = k + 1;
		}
		next[i] = k;
	}
}

void KMP(string P,string T)
{
	int length_P = P.length();
	int length_T = T.length();
	int i,j = 0;
	int* next = new int[length_P];
	Next(P , next , length_P);
	for(i = 0;i < length_T;i++)
	{
		while(j > 0 && P[j] != T[i])
		{
			j = next[j-1];
		}
		if(P[j] == T[i])
		{
			j = j + 1;
		}
		if(j == length_P)
		{	
			cout<<(i - length_P + 2)<<"-"<<(i - length_P + 1 + j)<<"   ";
			j = next[j-1];
		}
	}
	cout<<endl;
}

int main()
{
	string p,t;
	cout<<"输入目标串：";
	cin>>t;
	cout<<"输入模式串：";
	cin>>p;
	cout<<"模式串在目标串中出现的位置分别为：";
	KMP(p,t);
	return 0;
}
