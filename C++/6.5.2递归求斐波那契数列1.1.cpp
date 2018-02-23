#include<iostream>
using namespace std;
long re(long a,long b , int n)//当前项n，a前两项，b前一项 
{
	return n<=1? a:re(b,a+b,n-1) ;
}

int main()
{
	cout<<"请输入求斐波那契函数前多少项："<<endl;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		cout<<re(1,1,j)<<" ";
	} 
	return 0;
}
