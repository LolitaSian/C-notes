 #include<iostream>
#include<cmath>//ʹ�ú�����Ҫ���������䡣 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;//double˫����ʵ�� 
	cin>>money>>years>>rate;
	sum=money*pow((1+rate),years);
	//�˷�Ҳ������pow��X,Y��������ʾX��Y�η���X��Y��Ϊ˫����ʵ����
	//ʹ�õĺ�������C++��cmath�У�����ʹ��ʱҪ����#include<cmath> 
	cout<<sum;
	return 0;

  } 
