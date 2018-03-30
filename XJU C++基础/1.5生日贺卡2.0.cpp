 #include<iostream>
 using namespace std;
 int main()
 {
 	char name1[20] ;
 	char name2[20];//或者可以写成char name1[20]，name2[20]； 
 	    //char代表字符串，name1是变量名，[20]代表可输入的字符串最大长度，即限制字数。
 	    //char先写出来是声明语句，必须先声明后使用。 
    cin >>name1;
	cin >>name2;//或写为cin>>name1>>name2;
	    //cin>>代表输入，cout<<代表输出
    
    //程序正文
	cout<<"#############################"<<endl;
	cout<<endl;//空行
	cout<<name1<<endl;
	cout<<endl;
	cout<<"Happy birthday to you！！！"<<endl;
	cout<<endl;
	cout<<"       Sincerely yours "<<name2<<endl;
	cout<<endl;
	cout<<"#############################"<<endl;
	    /*运行的时候，输入name1按空格或者回车输入name2，再按空格即可出现你写的程序贺卡。 
	    但是你输入带空格的人名时候会失败。因为cin>>是以空格、回车、tab键作为分隔的，即
		遇到这三个键的时候就认为输入结束了。
		解决：用“cin.getline（s，20）；”语句，可理解为按行输入。相对的“cin>>s[20]” 
		语句为按词输入。区别是，cin.getline ()仅以回车最为输入结束。*/ 
		 
	return 0;
  } 
