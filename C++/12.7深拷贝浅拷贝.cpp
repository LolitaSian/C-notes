#include<iostream>
using namespace std;
class miao
{
private: 
	int n,*a;
public:
	miao();
	miao(int n,int *A);
	~miao(){delete a;}
	void setfirst(int m);
	void show(); 
};
miao::miao()
{
	n=10;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
}
miao::miao(int n,int *A)
{
	this->n=n;
	this->a=new int[n];
	int *p,*q;
	p=a;
	q=A;
	for(int i=0;i<n;i++)
	{
		*p=*q;
		p++;
		q++;
	}
}
void miao::show()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void miao::setfirst(int m)
{
	a[0]=m;
}
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int num=10;
	miao m1,m2(num,arr);
	m1.show();
	m2.show();
	cout<<"……………………………………"<<endl;
	m1=m2;//在这里等号是浅拷贝，即复制了数值也复制了指针、使用深拷贝可以只改变数据成员 
	m1.show();
	m2.show();
	cout<<"……………………………………"<<endl;
	m2.setfirst(5);
	m1.show();
	m2.show();
}
