#include <iostream>
using namespace std;
int main()
{
    char ctr[10];
	int i=0;
	cin>>ctr;
	while(ctr[i]!='\0')
	{
	ctr[i]=ctr[i]-32;
	i=i+1;
	}
	cout<<ctr<<endl;
	return 0;
}
//����һά����ʱ����Բ�д���鳤�ȣ�����Ҫ�г�ʼ��ֵ
 //a[]={0��1,2,3,4} 
 //���鲻�����帳ֵ��������������� 
 
