/*<类型> <数组名>[<常量表达式1>][<常量表达式2>];
例如
int score[60][3]； 表示有180个元素 
const int N=10,M=3; 点有30个 
double point[N][M];

语句格式
<类型> <数组名>[<行数>][<列数>]={<表达式1>,<表达式2>...}
初始化方式
全部元素
int A[3][3]={1,2,3,4,5,6,7,8,9}; 三行三列 
int A[][3]={1,2,3,4,5,6,7,8,9}; 只标明了3列 
int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};  很好区分的三行三列 
部分元素
int B[3][3]={1,2,3}; 只给明了每一行第一个元素 
int B[3][3]={{1,2},{4,5},{7,8};  只给了每一行前两列 
二维数组就是平面坐标，从0开始。a[1][1]表示第二行第二列的点。
三位数组就是立方体的坐标。 
*/

#include <iostream>
using namespace std;
int main()
{
	char month[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int m;
	cin>>m;
	if(m>0&&m< 13)
	cout<<month[m- 1];
	else
	cout<<"The month is wrong";
	return 0;
}

