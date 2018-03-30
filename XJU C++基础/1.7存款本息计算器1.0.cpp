 #include<iostream>
#include<cmath>//使用函数就要加上这个语句。 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;//double双精度实数 
	cin>>money>>years>>rate;
	sum=money*pow((1+rate),years);
	//乘方也可以用pow（X,Y）函数表示X的Y次方。X，Y均为双精度实数。
	//使用的函数都在C++的cmath中，所以使用时要加上#include<cmath> 
	cout<<sum;
	return 0;

  } 
