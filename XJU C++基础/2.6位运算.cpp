#include <iostream>
using namespace std ;
int main()
{
	int a=0x69;//0x��ʾ��16������ 
	int b=0x5E;
	int c ;
	
	cout<<uppercase; //�����ʮ���������е���ĸΪ��д
	
	cout<<dec<<a<<"\t"<<hex<<a<<endl;//dec�趨���������ʮ���������hex�趨���������ʮ����������
	 
	cout<<dec<<b<<"\t"<<hex<<b<<endl;
	
	c=a&b;//��λ���롱,&&�߼��� 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=ab;//��λ���򡱣�||�߼��� 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a^b;//��λ����� 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=~a;//��λ��ȡ����
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a<<2;//����2
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a>>2;//����2
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	cout<<dec;//�ָ�ʮ������� 
	
	 

	return 0;

}
