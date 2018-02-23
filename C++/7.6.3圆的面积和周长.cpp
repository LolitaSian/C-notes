#include <iostream>
using namespace std;
void circle(double r,double *plength,double *parea )
{
	*plength=2*r*3.1415926;
	*parea=r*r*3.1415926;
}
int main()
{
	double r,length,area;
	cout<<"请输入圆的半径："<<endl;
	cin>>r;
	circle(r,&length,&area);
	cout<<"已知半径为："<<r<<endl;
	cout<<"面积为："<<area<<" 周长为："<<length<<endl;
	 
	return 0;
}
