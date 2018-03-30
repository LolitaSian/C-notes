#include<iostream>
using namespace std;
void move(char m,char n)
{
	cout<<m<<" → "<<n<<endl;
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		move(a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);//借助c将n-1个盘子从a移动到b 
		move(a,c);
		hanoi(n-1,b,a,c);//借助a将n-1个盘子从b移动到c 
	}
}
int main()
{
	int n;
	cout<<"请输入盘子数"<<endl;
	cin>>n;
	cout<<"移动"<<n<<"个盘子的过程："<<endl;
	hanoi(n,'A','B','C') ;
	return 0;
 } 
