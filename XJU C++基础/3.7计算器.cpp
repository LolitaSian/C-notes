#include <iostream>
using namespace std;
int main()
{
	cout<<"���������ʽ"<<endl;
	double a,b;
	char y,char1[20]="������0 ������",char2[20]="�޷�����";
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
		default ://�������������
		cout<<char2<<endl; 
	 } 
 return 0; 
 } 
