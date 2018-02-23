#include <iostream>
#include <cmath>//使用函数时不要忘了加 
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a+b<<"\n";
	cout<<a-b<<"\n";
	cout<<a*b<<"\n";
	cout<<a/b<<"\n";
	cout<<a%b<<"\n";
	//以上是简单的加减乘除以及求余运算
	
	
	cout<<pow(a,b)<<"\n"; //a的b次方 
	cout<<exp(a)<<"\n";  //e的a次方 
	cout<<log(a)<<"\n";//lna 
	cout<<log10(a)<<"\n";//log10 a 
	cout<<sin(a)<<"\n";//sin a
	cout<<abs(a)<<endl;//求得是整数的绝对值。fabs()求得是浮点数的绝对值。
	
	
	//以下是双目运算，自增自减运算
	/*
	a+=b  a=a+b
	a-=b  a=a-b
	a=10  n=a++=11 a=10 ,m=a--=9 a=10
	a=10  n=++a=11 a=11 ,m=--a=9 a=9
	*/ 
	 
	 
	return 0;
 } 
