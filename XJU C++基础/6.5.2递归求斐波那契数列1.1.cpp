#include<iostream>
using namespace std;
long re(long a,long b , int n)//��ǰ��n��aǰ���bǰһ�� 
{
	return n<=1? a:re(b,a+b,n-1) ;
}

int main()
{
	cout<<"��������쳲���������ǰ�����"<<endl;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		cout<<re(1,1,j)<<" ";
	} 
	return 0;
}
