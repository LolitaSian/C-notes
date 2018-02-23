 #include<iostream>
 using namespace std;
 int main()
 {
 	int o,n;
 	cin>>o;
 	switch(o/5)
	{
		case 20:
		case 19:
		case 18:n=5;break;
		case 17:n=4.5;break;
		case 16:n=4;break;
		case 15:n=3.5;break;
		case 14:n=3;break;
		case 13:n=2.5;break;
		case 12:n=2;break;

		default :
		n=1; break;
	 } 
	 cout<<n;
 	return 0;

  } 
