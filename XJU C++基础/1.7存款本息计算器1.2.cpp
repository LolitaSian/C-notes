#include<iostream>
#include<cmath>//ʹ�ú�����Ҫ���������䡣 
 using namespace std;
 int main()
 {
 	double money,years,rate,sum;
 	cout<<"�����뱾����������Ϣ����������֮���ÿո������"<<endl; 
	cin>>money>>years>>rate;
	while(money>0)
	{
		sum=money*pow((1+rate),years);
		cout<<"���Ϊ"<<endl;
		cout<<sum<<endl;
		cout<<endl; 
		cout<<"�����뱾����������Ϣ����������֮���ÿո������"<<endl; 
		cin>>money>>years>>rate;
	}
	return 0;

  } 
  
  /*�ܽ᣺
  1.������������
  ���Ǻ���tan(x),sin(x),cos(x)
  e��x�η�exp��e������pow��e��x��
  ƽ������sqrt(x),����ֵfabs(x)
  loge x:log(x)
  log10 x: log10(x)
  2.whileѭ���� 
  */
