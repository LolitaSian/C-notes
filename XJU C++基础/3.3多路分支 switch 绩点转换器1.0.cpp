 #include<iostream>
 using namespace std;
 int main()
 {
 	int o,n;
 	cin>>o;
 	switch(o/10)//���ʽ���������Ρ��ַ��͡�ö���ͣ������� ,
	 /*���м���break����� ���������case��� 
	 default���Դ����ߵ��������*/
	{
		case 10:n=5;break;
		case 9:n=5;break;//���Լ�Ϊcase10��case9��n=5�� 
		case 8:n=4;break;
		case 7:n=3;break;
		case 6:n=2;break;
		default :
		n=1; break;
	 } 
	 cout<<n;
 	return 0;

  } 
