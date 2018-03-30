//for（ ； ；）在语法上是正确的，表示死循环;“；”不能省略
 
#include <iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cin>>n;
	for (i=0;i<=n;i+=1)
	sum =sum+i;
	cout<<sum<<endl;
	return 0;
 } 
