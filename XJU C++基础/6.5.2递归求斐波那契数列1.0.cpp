#include<iostream>
using namespace std;
long re(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return re(n-1)+re(n-2);
	}
}

int main()
{
	cout<<"��������쳲���������ǰ�����"<<endl;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		cout<<re(j)<<" ";
	} 
	return 0;
}
