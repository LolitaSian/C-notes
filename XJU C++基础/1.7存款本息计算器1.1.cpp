#include<iostream>
#include<cmath>//使用函数就要加上这个语句。 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;//double双精度实数 
	cin>>money>>years>>rate;
	while(money>0)//循环语句 
	{
		sum=money*pow((1+rate),years);//计算 
		cout<<sum<<endl;//显示 
		cin>>money>>years>>rate;//再输入，然后重新再判断while条件。 
	}
	return 0;

  } 
