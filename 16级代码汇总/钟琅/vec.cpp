#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
bool Comp(const int &a,const int &b)
	{
		return a>b;
	}

//迭代器实现排序
template<class T,class InputIterator,class OutputInterator>
void mySort(InputIterator first,InputIterator last,OutputInterator result)
{
	vector<T>s;
	for(;first!=last;++first)
	{
		s.push_back(*first);
	}
	sort(s.begin(),s.end());
	copy(s.begin(),s.end(),result);
}

int main()
{
	//size()
	vector<int>vec;
	for(int i=0;i<=9;i++)
	{
		vec.push_back(i);
	}
	cout<< "容器大小为: "<<vec.size()<<endl<<endl;
	cout<<"容器中的数据分别为：";
	for(int i=0;i<=9;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl<<endl;

	//插入数据insert()
	cout<<"分别输入数据a和b（在第b个元素后面插入a）:";
	int a,b;
	cin>>a>>b;
	cout<<endl;
	vec.insert(vec.begin()+b,a);
	cout<<"插入数据后容器中的数据分别为：";
	for(int i=0;i<=10;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl<<endl;

	//sort()
	vector<int>::iterator first=vec.begin();
	vector<int>::iterator last=vec.end();
	sort(first,last,Comp);
	cout<<"从大到小排列：";
	for(int i=0;i<=10;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl<<endl;

	//reverse()
	cout<<"将元素翻转:";
	reverse(first,last);
	for(int i=0;i<=10;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl<<endl;

	//erase()
	cout<<"输入x,y,删除第x到y间的元素：";
	int x,y;
	cin>>x>>y;
	cout<<endl;
	vec.erase(first+x,first+y-1);
	cout<<"删除后的容器中的元素：";
	for(int i=0;i<=10-(y-x-1);i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl<<endl;

	//resize()
	vec.resize(100);
	cout<<"容器的容量为："<<vec.capacity();
	cout<<endl<<endl;

	//迭代器实现
	cout<<"迭代器实现排序";cout<<endl;
	cout<<"输入多个整型数（回车--Ctrl+z--回车 结束输入）：";
	mySort<int>(istream_iterator<int>(cin),istream_iterator<int>(),ostream_iterator<int>(cout," "));

	return 0;
}