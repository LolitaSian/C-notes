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
	cout<<"������Բ�İ뾶��"<<endl;
	cin>>r;
	circle(r,&length,&area);
	cout<<"��֪�뾶Ϊ��"<<r<<endl;
	cout<<"���Ϊ��"<<area<<" �ܳ�Ϊ��"<<length<<endl;
	 
	return 0;
}
