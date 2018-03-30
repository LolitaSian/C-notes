 #include<iostream>
 using namespace std;
 int main()
 {
 	int o,n;
 	cin>>o;
 	switch(o/10)//表达式可以是整形、字符型、枚举型，布尔型 ,
	 /*其中加上break后可以 跳过后面的case语句 
	 default可以代表后边的所有情况*/
	{
		case 10:n=5;break;
		case 9:n=5;break;//可以简化为case10：case9：n=5； 
		case 8:n=4;break;
		case 7:n=3;break;
		case 6:n=2;break;
		default :
		n=1; break;
	 } 
	 cout<<n;
 	return 0;

  } 
