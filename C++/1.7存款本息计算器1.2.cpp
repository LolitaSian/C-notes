#include<iostream>
#include<cmath>//使用函数就要加上这个语句。 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;
 	cout<<"请输入本金，年数，利息。三个数字之间用空格隔开。"<<endl; 
	cin>>money>>years>>rate;
	while(money>0)
	{
		sum=money*pow((1+rate),years);
		cout<<"金额为"<<endl;
		cout<<sum<<endl;
		cout<<endl; 
		cout<<"请输入本金，年数，利息。三个数字之间用空格隔开。"<<endl; 
		cin>>money>>years>>rate;
	}
	return 0;

  } 
  
  /*总结：
  1.其他常见函数
  三角函数tan(x),sin(x),cos(x)
  e的x次方exp（e），即pow（e，x）
  平方根：sqrt(x),绝对值fabs(x)
  loge x:log(x)
  log10 x: log10(x)
  2.while循环体 
  */
