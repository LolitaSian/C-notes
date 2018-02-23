#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=9;i>0;i--)//i从1开始，到9结束，每次循环+1 
	{
		for(j=9;j>=i;j--) 
		{
		cout<<j<<"×"<<i<<"="<<j*i<<'\t' ;
		}
		cout<<'\n';
	 } 
	return 0;
 } 
