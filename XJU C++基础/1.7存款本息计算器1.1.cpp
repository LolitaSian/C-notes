#include<iostream>
#include<cmath>//ʹ�ú�����Ҫ���������䡣 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;//double˫����ʵ�� 
	cin>>money>>years>>rate;
	while(money>0)//ѭ����� 
	{
		sum=money*pow((1+rate),years);//���� 
		cout<<sum<<endl;//��ʾ 
		cin>>money>>years>>rate;//�����룬Ȼ���������ж�while������ 
	}
	return 0;

  } 
