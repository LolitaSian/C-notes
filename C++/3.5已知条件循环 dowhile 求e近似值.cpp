#include <iostream>
using namespace std;
int main()
{
	double sum=1.0,single=1.0;
	int n=1;
	do
	{
		single=single/n;
		sum=sum+single;
		n++;
	}while(single>=1.0e-7);
	cout <<"e的近似值为："<<sum<<endl; 
	return 0;
 } 
