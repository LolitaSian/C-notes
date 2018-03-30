#include<iostream>
using namespace std;
void move(char m,char n)
{
	cout<<m<<" �� "<<n<<endl;
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		move(a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);//����c��n-1�����Ӵ�a�ƶ���b 
		move(a,c);
		hanoi(n-1,b,a,c);//����a��n-1�����Ӵ�b�ƶ���c 
	}
}
int main()
{
	int n;
	cout<<"������������"<<endl;
	cin>>n;
	cout<<"�ƶ�"<<n<<"�����ӵĹ��̣�"<<endl;
	hanoi(n,'A','B','C') ;
	return 0;
 } 
