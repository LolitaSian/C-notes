
  #include<iostream>
  #include<cmath>
 using namespace std;
 int main()
 {
 	cout<<"�����������ε�������abc"<<endl; 
	double a,b,c,m,area;
	cin>>a>>b>>c;
	m=(a+b+c)/2.0;
	area=sqrt(m*(m-a)*(m-b)*(m-c));//��ƽ�� 
	cout<<"�����ε����Ϊ"<<area<<"\n" ;
 	return 0;

  } 
/*�û����������ε������߳�a,b,c,���ú��׹�ʽ���������ε������
���У�a,b,c�������ε����ߣ�����Ϊʵ���� */
