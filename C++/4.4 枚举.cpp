

#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{
	enum color{red,yellow,blue};
	int first,second,t;
	for(first=red;first<blue;first+=1)
	{
	    for(second=first+1;second<=blue;second+=1)
		{
		    for(int i=0;i<2;i++)
			    {
			    	if(i==0)
			    	t=first;
			    	if(i==1)
			    	t=second;
			    	
				switch(t)
				{
				case red: cout<<"red"<<"\t"; break;
				case yellow: cout<<"yel1ow"<<"\t"; break;
				case blue: cout<<"blue"<<"\t"; break; 
				}
				}
				cout<<"\n";
		}
	}
	cout<<"\n";

	return 0;  
}
/*
枚举定义方法：
语句格式enum <枚举类型名>{枚举常量表};

例如enum Week{Sun,Mon,Tes,Wed,Thu,Fri,Sat};//Sun=O,Mon= 1,Tes=2,Wed=3,Thu=4,Fri=5,Sat=6。
就是如果不给元素赋值，则每个元素默认从0开始逐个加一 
enum Coin {PENNY= 1,NICKEL=5,DIME= 10,QUARTER=25,HALF_DOLLAR= 50,DOLLAR=100};
如果赋值则就是赋值的数 
enum Color {red,yellow,blue= 1,white,black};//red=O,yellow= 1,blue= 1,white=2,black=3 
没有赋值的从0开始 ，赋值的就是赋值的数，赋值之后的项从赋值项+1

★★★枚举常量是整形的

变量声明方法：
语句格式
enum <枚举类型名> <枚举变量列表>;
声明时机
定义枚举类型后声明enum COLOR background,foreground;background,foreground是color的变量 
定义枚举类型同时声明enum Week {Sun=7,Mon=1,Tes,Wed,Thu,Fri,Sat} begin,end;begin,end是week的变量 


enum Week {Sun=7,Mon= 1,Tes,Wed,Thu,Fri,Sat} begin,end;
cin> >background;//直接输入枚举变量，错误
begin=1;//整数赋给枚举变量，错误
begin=Mon;//将枚举常量赋给枚举变量，正确
begin= end;//相同类型的枚举变量赋值正确
begin=(Week)1;//整数强制类型转换后赋给枚举变量，正确
int a=begin;//将枚举变量赋给整型变量，正确
int b=Sun;//将枚举常量赋给整型变量，正确
cout<<begin//可以直接输出枚举变量，正确，但是输出的是数值不是变量名
cout<<begin+end；//可以进行运算，正确 
*/ 

