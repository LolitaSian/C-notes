 #include<iostream>
 using namespace std;
 int main()
 {
 	char name1[20] ;
 	char name2[20];//���߿���д��char name1[20]��name2[20]�� 
 	    //char�����ַ�����name1�Ǳ�������[20]�����������ַ�����󳤶ȣ�������������
 	    //char��д������������䣬������������ʹ�á� 
    cin >>name1;
	cin >>name2;//��дΪcin>>name1>>name2;
	    //cin>>�������룬cout<<�������
    
    //��������
	cout<<"#############################"<<endl;
	cout<<endl;//����
	cout<<name1<<endl;
	cout<<endl;
	cout<<"Happy birthday to you������"<<endl;
	cout<<endl;
	cout<<"       Sincerely yours "<<name2<<endl;
	cout<<endl;
	cout<<"#############################"<<endl;
	    /*���е�ʱ������name1���ո���߻س�����name2���ٰ��ո񼴿ɳ�����д�ĳ���ؿ��� 
	    ������������ո������ʱ���ʧ�ܡ���Ϊcin>>���Կո񡢻س���tab����Ϊ�ָ��ģ���
		��������������ʱ�����Ϊ��������ˡ�
		������á�cin.getline��s��20��������䣬�����Ϊ�������롣��Եġ�cin>>s[20]�� 
		���Ϊ�������롣�����ǣ�cin.getline ()���Իس���Ϊ���������*/ 
		 
	return 0;
  } 
