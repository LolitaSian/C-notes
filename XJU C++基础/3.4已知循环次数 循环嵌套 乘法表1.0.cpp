#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=1;i<=9;i++)//i��1��ʼ����9������ÿ��ѭ��+1 
	{
		for(j=1;j<=i;j++) 
		{
		cout<<i<<"��"<<j<<"="<<j*i<<'\t' ;
		}
		cout<<'\n';
	 } 
	return 0;
 } 
