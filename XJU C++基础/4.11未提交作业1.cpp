#include <iostream>  
#include <cstring>  
using namespace std;  
struct p
{
	char s[50],n[20];
	int g;
 } list[5],x;
int main()  
{
	int i,j;
	for(i=0;i<5;i++)
	{
		cin>>list[i].s>>list[i].n>>list[i].g;
	}
	for(i=0;i<5;i++)//5次冒泡排序
	{
		for(j=0;j<5-i;j++)//一次冒泡中需要比较的次数，i=0时候比较5次 
		{
			if(list[j].g<list[j+1].g)
			{

			x=list[j];
			list[j]=list[j+1];
			list[j+1]=x;
			 } 
		 } 
	 } 
	
	for(i=0;i<5;i++)
	{
		cout<<list[i].s<<" "<<list[i].n<<" "<<list[i].g<<endl;
	}
	
	return 0;
}

