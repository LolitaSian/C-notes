/*
���ֲ��ҵĵݹ��㷨
�㷨����: find
�㷨����:
����n����������������a����x,
����x��a�е��±�; ���Ҳ���������-1.
��i,j��ʾ�����ҵ�����*/
#include<iostream>
using namespace std;
int find(int a[],int i,int j, int x)//i��ʼԪ�أ�j��ֹԪ�� 
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
