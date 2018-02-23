/*
编写程序，能够根据输入的实数x和n，计算x的n次方根。
具体要求:
1.输入O O时，程序结束
2.(x<0且n<=0)或(x<=0且1/n不为整数)时，显示“输入错误”并允许用户继续输入
3.否则计算并显示x的n次方根并允许用户继续输入
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,n;
	cout<<"请输入底数x和指数n"<<endl;

	while(1) 
	{ 
	cin>> x>>n;
	if (x==0 && n==0)
	    {cout<<"程序结束"<<endl;break;/*break可以跳出该小循环 */}
	else
	
    	if((x<0&&n<=0)||(x<=0&&1/n!=int(1/n)))
	    {cout<<"输入错误，请重新输入"<<endl;continue; }//continue可以跳过之后的语句开始新的循环 

	cout<<"x的n次方="<<pow(x,n)<<endl;
	} 
	return 0;
 } 
 
 
  
