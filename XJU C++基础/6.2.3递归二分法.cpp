/*
二分查找的递归算法
算法名称: find
算法功能:
在有n个整数的有序数组a中找x,
返回x在a中的下标; 若找不到，返回-1.
用i,j表示待查找的区间*/
#include<iostream>
using namespace std;
int find(int a[],int i,int j, int x)//i起始元素，j终止元素 
{
	int n=j-i+1;
	if(n==0)
	{
		return -1;
	} 
	else
	{
		int m=(i+j)/2;
		if (x==a[m]);
		{
			return m;
		}
		else 
		{
			if(x<a[m])
			{
			    return find(a,i,m-1,x);
			}
			else 
			{
			    return find(a,m+1,j,x);
			}
		}
    }
}
int main()
{
	int a[]={2,4,6,8,10,12,14,16,18,20};
	int n=10;
	int x;
	cin>>x;
	cout<<find(a,0,n-1,x)<<endl;
}
