/*��д���򣬰���ͨѶ¼��ʽ¼����ϵ����Ϣ����������ķ�����ʾ��ϵ����Ϣ��
ͨѶ¼����Ҫ��:
����
�Ա�
��ϵ�绰1
��ϵ�绰2
*/
#include <iostream>
using namespace std;
int main()
{ 
    struct telelist {char name[8]; char sex; char num1[5]; char num2[5];} /*����ṹ������*/list1[3];/*�ṹ��������3��Ԫ��*/
	int i;
	for(i=0;i<=2;i++)
	cin>>list1[i].name>>list1[i].sex>>list1[i].num1>>list1[i].num2;//˳������ 
	for(i= 2 ;i >= 0;i--)
	cout<<list1[i].name<<"/"<<list1[i].sex<<"/"<<list1[i].num1<<"/"<<list1[i].num2<<endl;//�������� 
	return 0;
}
/*
�ṹ�����Ͷ��巽����
struct Date{int year,month,day}��  date�ṹ�����������γ�Ա 
ͬһ�ṹ��ĳ�Ա����ͬ������������������ͬ�� 

�ṹ���������������
����ṹ�����ͺ�����struct Date today;����date�����ڸ����͵ı���today 
����ṹ������ͬʱ����������ʡ�Խṹ������struct Date{int year,month,day;} today; 

�ṹ�������ʼ������
struct Date today={2015,2,20};today������������Ա��ʼֵΪ2015.2.20

�ṹ�����ʹ�÷���
today.year= 2015
today.month=2
today.day= 20 

�ṹ�������ռ�ڴ��С
���й���ѧMOOC
����ʽ
sizeof(������)����sizeof(������)
struct SHAPE1 {char name; int x;int y;char classification;};
sizeof(SHAPE1) //14*4= 16
struct SHAPE2 {char name; double x; int y; char classification;};
sizeof(SHAPE2) //8*2+4*2=24 
struct SHAPE3 {char name; double X; double y;char classification;};
sizeof(SHAPE3) //8*4= 32

�ṹ�����鶨�巽��
struct Date manydates[30] ;date�ǽṹ�����ƣ� manydates�ṹ��������[]��Ϊ���������manydates[3]���������� 


�ṹ�������ʼ������
struct Date manydates[30]={{2015,1,1},{2015,2,17},{2015,3,8} };//30��Ԫ�أ���ǰ������ֵ 
struct Date manydates[]={ {2015,1,1}��{2015,2,17},{2015,3,8} };//����Ԫ��ȫ����ֵ 

�ṹ������ʹ�÷���
manydates[i].year=2015 �Ե�i��Ԫ�س�Աyear��ֵ��ע�������±겻��Խ�� 
manydates[i].month=2
manydates[i].day=20
*/
