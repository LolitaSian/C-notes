  #include<iostream>
  #include<cmath>
 using namespace std;
 int main()
 {
 	//分段函数用？运算符
	int x,y;
	cin>>x;
	y=(x>=0?1:0);
	cout<<"y="<<y<<endl;
	//如果x大于等于0显示1，反之显示0 
 	
 	//等号运算符从右向左计算 
	//逗号运算符从左向右计算 
	int m=1,n=2,p;
	p=(m+1,n+2) ;
	cout<<"p="<<p<<endl;
	//先算m+1再算n+2，最后将n+2赋值给p
	cout<<p; 
	
	return 0;

  } 
