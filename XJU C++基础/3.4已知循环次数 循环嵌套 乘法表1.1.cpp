#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=9;i>0;i--)//i��1��ʼ����9������ÿ��ѭ��+1 
	{
		for(j=9;j>=i;j--) 
		{
		cout<<j<<"��"<<i<<"="<<j*i<<'\t' ;
		}
		cout<<'\n';
	 } 
	return 0;
 } 
