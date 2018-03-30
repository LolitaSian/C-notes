#include <iostream>
using namespace std;
int main()
{
	double sum=1.0,single=1.0;
	int n=1;
	while(single>=1.0E-7)//1.0×10的-7次方 
	{
		single=single/n;
		sum=sum+single;
		n=n+1;
	}
	 cout<<"e的近似值为："<<sum<<endl; 
	return 0;
 } 
