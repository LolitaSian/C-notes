#include<iostream>
using namespace std;
int main()
{
cout<<"����һ����λ��"<<endl;
int n,m;
int a,b,c,d,e;
cin>>n;
a=n%10;
b=n/10%10;
c=n/100%10;
d=n/1000%10;
e=n/10000%10;
m=a*10000+b*1000+c*100+d*10+e;
cout<<"������Ϊ"<<m <<endl; 
return 0;
}
