#include <iostream>
using namespace std;
int main()
{
	cout<<"请输入计算式"<<endl;
	double a,b;
	char y,char1[20]="除数是0 无意义",char2[20]="无法计算";
	cin>>a>>y>>b;
	switch(y)
	{
		case '+' :
		cout<<a<<y<<b<<"="<<a+b<<endl;break;
		case '-' :
		cout<<a<<y<<b<<"="<<a-b<<endl;break;
		case '*' :
		cout<<a<<y<<b<<"="<<a*b<<endl;break;
		case '/' :
			if (b==0)
			{cout<<char1<<endl;}	
			else
			{cout<<a<<y<<b<<"="<<a/b<<endl;	}
			break;
		default ://以上情况都不是
		cout<<char2<<endl; 
	 } 
 return 0; 
 } 
