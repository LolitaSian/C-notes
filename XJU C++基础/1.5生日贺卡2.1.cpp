 #include<iostream>
 using namespace std;
 int main()
 {
 	char name1[20] ;
 	char name2[20]; 
    cin.getline(name1,20);
	cin.getline(name2,20);//生日贺卡2.0改进。仅以回车作为字符串输入结束。 
	
	cout<<"#############################"<<endl;
	cout<<endl;
	cout<<name1<<endl;
	cout<<endl;
	cout<<"Happy birthday to you！！！"<<endl;
	cout<<endl;
	cout<<"       Sincerely yours "<<name2<<endl;
	cout<<endl;
	cout<<"#############################"<<endl;		 
	return 0;
  } 
