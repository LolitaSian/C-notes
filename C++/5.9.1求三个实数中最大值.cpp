#include<iostream>
using namespace std;
int max(int a[])
{
	int x=a[0];
	for(int i=0;i<3;i++)
	{
		if(x<a[i])
		{
			x=a[i];
		}
		
	}
	return x;
 } 
 int main()
 {
 	int a[3];
 	for (int i=0;i<3;i++)
 	{
 		cin>>a[i];
	}
	
	cout<<max (a);
	
	
	return 0;
	 
 }
