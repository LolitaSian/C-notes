#include <iostream>
#include <cmath>//ʹ�ú���ʱ��Ҫ���˼� 
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
	//�����Ǽ򵥵ļӼ��˳��Լ���������
	
	
	cout<<pow(a,b)<<"\n"; //a��b�η� 
	cout<<exp(a)<<"\n";  //e��a�η� 
	cout<<log(a)<<"\n";//lna 
	cout<<log10(a)<<"\n";//log10 a 
	cout<<sin(a)<<"\n";//sin a
	cout<<abs(a)<<endl;//����������ľ���ֵ��fabs()����Ǹ������ľ���ֵ��
	
	
	//������˫Ŀ���㣬�����Լ�����
	/*
	a+=b  a=a+b
	a-=b  a=a-b
	a=10  n=a++=11 a=10 ,m=a--=9 a=10
	a=10  n=++a=11 a=11 ,m=--a=9 a=9
	*/ 
	 
	 
	return 0;
 } 
