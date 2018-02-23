/*虚数类相加减，判定相等*/
#include<iostream>
using namespace std;
class xs
{
	private:
		double a,b;//定义虚数的实部a和虚部 b
	public:
		xs(double x=0,double y=0):a(x),b(y){};
		double real(){return a;}
		double imag(){return b;}
		xs operator +(xs&);
		xs operator +(double );
		bool operator ==(xs);
		~xs(){};
};
xs xs::operator +(xs &m)
{
	xs tmp;
	tmp.a=a+m.a;
	tmp.b=b+m.b;
	return tmp;
}
xs xs::operator +(double m)
{
	xs tmp;
	tmp.a=a+m;
	tmp.b=b;
	return tmp;
}
bool xs::operator ==(xs n)
{
	if(a==n.a&&b==n.b)
		return true;
	else
		return false;
}
int main()
{
	cout<<"输入两个虚数的实部和虚部："<<endl;
	int x,y,z,w;
	cin>>x>>y>>z>>w;
	xs n1(x,y),n2(z,w),sum;
	cout<<"n1="<<n1.real()<<"+"<<n1.imag()<<"i"<<endl;
	cout<<"n2="<<n2.real()<<"+"<<n2.imag()<<"i"<<endl;
	if(n1==n2)
	{
		cout<<"两虚数相等"<<endl;
	 } 
	else
	{
		cout<<"两虚数不相等"<<endl; 
	 } 
	sum=n1+n2;
	cout<<"sum="<<sum.real()<<"+"<<sum.imag()<<"i"<<endl;
	double n3;
	cout<<"输入一个double类型数字："; 
	cin>>n3;
	sum=sum+n3;
	cout<<"sum="<<sum.real()<<"+"<<sum.imag()<<"i"<<endl;
	
	return 0;
} 
