#include <iostream>
/*����һԪ���η��̵�a,b,c����ϵ������һԪ���η���
ax2+bx+c=0.���������(������)*/
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double deerta,x1,x2;
	cout<<"������a b c��ֵ"<<endl; 
	cin>>a>>b>>c;
	deerta=pow(b,2.0)-4*a*c;
	
	if(deerta<0)
	{cout<<"�˷�����ʵ��"<<endl;}
	
	else if (deerta==0) //��C++��=�Ǹ�ֵ��==���ж��Ƿ���� 
	{x1=((-b)+sqrt(deerta))/(2.0*a);
	cout<<"���̵ĸ�Ϊx="<<x1<<endl;  } 
	
	else if (deerta>0) 
	{x1=(-b+sqrt(deerta))/(2.0*a);
	x2=(-b-sqrt(deerta))/(2.0*a);
	cout<<"���̵���������"<<endl<<"X1="<<x1<<endl<<"X2="<<x2<<endl;} 
	
	return 0;
 } 
