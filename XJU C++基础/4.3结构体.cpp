/*编写程序，按照通讯录格式录入联系人信息并按照输入的反序显示联系人信息。
通讯录内容要求:
姓名
性别
联系电话1
联系电话2
*/
#include <iostream>
using namespace std;
int main()
{ 
    struct telelist {char name[8]; char sex; char num1[5]; char num2[5];} /*定义结构体类型*/list1[3];/*结构体数组有3个元素*/
	int i;
	for(i=0;i<=2;i++)
	cin>>list1[i].name>>list1[i].sex>>list1[i].num1>>list1[i].num2;//顺序输入 
	for(i= 2 ;i >= 0;i--)
	cout<<list1[i].name<<"/"<<list1[i].sex<<"/"<<list1[i].num1<<"/"<<list1[i].num2<<endl;//逆序数出 
	return 0;
}
/*
结构体类型定义方法：
struct Date{int year,month,day}；  date结构体有三个整形成员 
同一结构体的成员不能同名，但可与其它变量同名 

结构体变量声明方法：
定义结构体类型后声明struct Date today;类型date，属于该类型的变量today 
定义结构体类型同时声明，可以省略结构体名：struct Date{int year,month,day;} today; 

结构体变量初始化方法
struct Date today={2015,2,20};today变量中三个成员初始值为2015.2.20

结构体变量使用方法
today.year= 2015
today.month=2
today.day= 20 

结构体变量所占内存大小
，中国大学MOOC
语句格式
sizeof(类型名)或者sizeof(变量名)
struct SHAPE1 {char name; int x;int y;char classification;};
sizeof(SHAPE1) //14*4= 16
struct SHAPE2 {char name; double x; int y; char classification;};
sizeof(SHAPE2) //8*2+4*2=24 
struct SHAPE3 {char name; double X; double y;char classification;};
sizeof(SHAPE3) //8*4= 32

结构体数组定义方法
struct Date manydates[30] ;date是结构体名称， manydates结构体数组名[]←为数组个数。manydates[3]就是有三个 


结构体数组初始化方法
struct Date manydates[30]={{2015,1,1},{2015,2,17},{2015,3,8} };//30个元素，给前三个赋值 
struct Date manydates[]={ {2015,1,1}，{2015,2,17},{2015,3,8} };//三个元素全部赋值 

结构体数组使用方法
manydates[i].year=2015 对第i个元素成员year赋值，注意数组下标不能越界 
manydates[i].month=2
manydates[i].day=20
*/
