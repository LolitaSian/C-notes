/*
��д�����ܹ����������ʵ��x��n������x��n�η�����
����Ҫ��:
1.����O Oʱ���������
2.(x<0��n<=0)��(x<=0��1/n��Ϊ����)ʱ����ʾ��������󡱲������û���������
3.������㲢��ʾx��n�η����������û���������
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,n;
	cout<<"���������x��ָ��n"<<endl;

	while(1) 
	{ 
	cin>> x>>n;
	if (x==0 && n==0)
	    {cout<<"�������"<<endl;break;/*break����������Сѭ�� */}
	else
	
    	if((x<0&&n<=0)||(x<=0&&1/n!=int(1/n)))
	    {cout<<"�����������������"<<endl;continue; }//continue��������֮�����俪ʼ�µ�ѭ�� 

	cout<<"x��n�η�="<<pow(x,n)<<endl;
	} 
	return 0;
 } 
 
 
  
