/*<����> <������>[<�������ʽ1>][<�������ʽ2>];
����
int score[60][3]�� ��ʾ��180��Ԫ�� 
const int N=10,M=3; ����30�� 
double point[N][M];

����ʽ
<����> <������>[<����>][<����>]={<���ʽ1>,<���ʽ2>...}
��ʼ����ʽ
ȫ��Ԫ��
int A[3][3]={1,2,3,4,5,6,7,8,9}; �������� 
int A[][3]={1,2,3,4,5,6,7,8,9}; ֻ������3�� 
int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};  �ܺ����ֵ��������� 
����Ԫ��
int B[3][3]={1,2,3}; ֻ������ÿһ�е�һ��Ԫ�� 
int B[3][3]={{1,2},{4,5},{7,8};  ֻ����ÿһ��ǰ���� 
��ά�������ƽ�����꣬��0��ʼ��a[1][1]��ʾ�ڶ��еڶ��еĵ㡣
��λ�����������������ꡣ 
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

