#include<iostream>
using namespace std;
int find(int a[],int i, int j,int x)
{
	int n=j-i+1;//���������Ԫ�صĸ���
	if(n==0)
	{
		return -1;//������û��Ԫ�أ�����-1 
	}
	else
	{
		int m=(j+i)/2;//����м�Ԫ�ص��±�
		if(x==a[m]) 
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
	int n=10,x;
	cin>>x;
	cout<<find(a,0,n-1,x)<<endl;//���Ҫ���ҵ����������е��±� 
}
