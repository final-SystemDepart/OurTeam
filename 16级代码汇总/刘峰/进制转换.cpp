#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
#ifndef __STACKTP_H__  
#define __STACKTP_H__  
template<typename T>  
class Stack  
{  
public:  
    Stack();  
    bool IsFull();  
    bool IsEmpty();  
    bool Push(const T &x);  
    bool Pop(T &x);  
    int Lenth();  
    void Show();  
private:  
    enum{MAX = 10}; 
    T item[MAX];  
    int top;  
};    
template<typename T>  
Stack<T>::Stack()  
{  
    top = 0;  
}  
template<typename T>  
bool Stack<T>::IsFull()  
{  
    return top == MAX;  
}  
template<typename T>  
bool Stack<T>::IsEmpty()  
{  
    return top == 0;  
}  
template<typename T>  
bool Stack<T>::Push(const T &x)  
{  
    if (IsFull())  
    {  
        std::cout << "the stack is full!" << std::endl;  
        return false;  
    }  
    item[top++] = x;  
    return true;  
}  
template<typename T>  
bool Stack<T>::Pop(T &x)  
{  
    if ( IsEmpty() )  
    {  
        std::cout << "the stack is empty!" << std::endl;  
        return false;  
    }  
    x = item[--top];  
    return true;  
}  
template<typename T>  
int Stack<T>::Lenth()  
{  
    return top;  
}  
template<typename T>  
void Stack<T>::Show()  
{  
    for (int i = 0; i < top; ++i)  
    {  
        std::cout << item[i] << " ";  
    }  
    cout << std::endl;  
}  
#endif  
void ZhuangHuan10to2()
{
	double x,m;
	int count=0;
	cout<<"请输入要转换的实数：";
	cin>>x;
	int n=(int)x;
	m=x-n;
	Stack<int> s1;
	int a;
	while(n>0)
	{    a=n%2;
		s1.Push(a);
		n/=2;
		count++;
	}
	cout<<"转换后的数为：";
	
	for(int j=1;j<=count;j++){
		cout<<s1.Pop(a);}
	
	cout<<".";
	while(m!=0)
	{
		   int q;
		   q=(int)(m*2);
			cout<<q;
			m=m*2-q;
		
	}
}


void ZhuangHuan2to10()
{
 Stack<char> s2;
 Stack<char> s3;
  int sum1=0;
  int l=0,h=0;
  double sum2=0.0;
  char ch;
  cout<<"输入2进制数：";
  cin>>ch;
  while(ch!='.')
  {
	 s2.Push(ch);
	 l++;
	  cin>>ch;
  }
  for(int i=0;i<l;i++)
  {
	 s2.Pop(ch);
	  sum1=sum1+(ch-48)*pow(2.0,i);
  }
  cin>>ch;
  while(ch!='#')
  {
	  s3.Push(ch);
	  h++;
	  cin>>ch;
  }
  for(int j=h;j>0;j--)
  {
	  s3.Pop(ch);
	  sum2=sum2+(ch-48)*pow(2.0,-j);
  }
  cout<<"转换后的数为:"<<sum1+sum2<<endl<<endl;
}
int main()
{
	ZhuangHuan10to2();
	ZhuangHuan2to10();
	return 0;
}