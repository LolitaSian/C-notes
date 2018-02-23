#include <iostream>
/*输入一元二次方程的a,b,c三个系数，解一元二次方程
ax2+bx+c=0.输出两个根(含复根)*/
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double deerta,x1,x2;
	cout<<"请输入a b c的值"<<endl; 
	cin>>a>>b>>c;
	deerta=pow(b,2.0)-4*a*c;
	
	if(deerta<0)
	{cout<<"此方程无实根"<<endl;}
	
	else if (deerta==0) //在C++中=是赋值，==是判断是否相等 
	{x1=((-b)+sqrt(deerta))/(2.0*a);
	cout<<"方程的根为x="<<x1<<endl;  } 
	
	else if (deerta>0) 
	{x1=(-b+sqrt(deerta))/(2.0*a);
	x2=(-b-sqrt(deerta))/(2.0*a);
	cout<<"方程的两个根是"<<endl<<"X1="<<x1<<endl<<"X2="<<x2<<endl;} 
	
	return 0;
 } 
