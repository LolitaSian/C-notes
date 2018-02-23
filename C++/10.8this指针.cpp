#include<iostream>
using namespace std;
class number
{
	private:
		int x,y;
	public:
		number()
		{
			x=0,y=0;
		}
		number(int a)
		{
			x=a;
		}
		number(int a,int b)
		{
			this->x=a;
			this->y=b;
		}
		void show()
		{
			//int x=5; 如果有这一句，那么第一个输出就是5，this的输出不变 
			cout<<"x,y"<<'\t'<<x<<" "<<y<<endl;
			cout<<"this->x"<<'\t'<<this->x<<endl;
			cout<<"this->y"<<'\t'<<this->y<<endl;
			cout<<"(*this).x"<<'\t'<<(*this).x<<endl;
			cout<<"(*this).y"<<'\t'<<(*this).y<<endl;
		}
};
int main()
{
	number a;
	a.show();
	number b(12);
	b.show();
	number c(7,8);
	c.show();
	return 0;
} 
