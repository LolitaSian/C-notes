/*this相当于“我”。 
this,本对象的指针
访问成员
this->成员
*this,本对象
访问成员
(*this).成员
常用场合
类中成员和成员函数的形参同名时
成员函数需要返回指针或本对象时*/
#include<iostream>
using namespace std;
class point
{
private:
	double x,y;
public:
	void set(double x,double y)
	{
		this->x=x;
		(*this).y=y;//两种表达方式都可以，用于区分形参和本对象的参数 
	}
	void show()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	} 
	
};
int main()
{
	cout<<"输入两点坐标x，y："<<endl;
	int a,b,c,d; 
	cin>>a>>b>>c>>d;
	point m,n;
	m.set(a,b);
	n.set(c,d);
	m.show();
	n.show();
	return 0;
}
