#include <iostream>
using namespace std;
int main()
{
    char ctr[10];
	int i=0;
	cin>>ctr;
	while(ctr[i]!='\0')
	{
	ctr[i]=ctr[i]-32;
	i=i+1;
	}
	cout<<ctr<<endl;
	return 0;
}
//定义一维数组时候可以不写数组长度，但是要有初始化值
 //a[]={0，1,2,3,4} 
 //数组不能整体赋值不能整体输入输出 
 
