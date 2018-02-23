#include<iostream>
using namespace std;
class pet
{
	public:
		virtual void speak()//加上virtual是虚函数，派生类中virtual可以省略
		//不加virtual，派生类不能修改基类对象 
		{
			cout<<"宠物怎么叫呢？"<<endl; 
		}
};
class cat:public pet
{
	public:
		void speak()
		{
			cout<<"喵喵喵"<<endl; 
		}
};
int main()
{
	pet a,*b,*c;
	cat m;
	//使用派生类直接赋值不能改变几类 
	a=m;
	a.speak();
	//使用指针可以改变基类 
	b=&m,
	b->speak();
	c=new cat;
	c->speak();
	//引用也可以改变 
	pet &d=m;
	d.speak();
}
