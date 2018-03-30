#include<iostream> 
using namespace std;  
double average(int s[],int n,int *max,int *min)
{
	double sum=s[0];
	*max=s[0];
	*min=s[0];
	for(int i=1;i<n;i++)
	{
		sum+=s[i];
		if(*max<s[i]) *max=s[i];
		if(*min>s[i]) *min=s[i];
 	}
 	return sum/n;
}
int main()
{
	int s[100],n,max,min,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	double ave=average(s,n,&max,&min);
	cout<<"Æ½¾ùÖµ="<<ave<<endl;
	cout<<"max="<<max<<" min="<<min<<endl; 
	return 0;
	
}
