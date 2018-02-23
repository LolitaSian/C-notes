#include<iostream>
#include <string.h>
#include <stdio.h>
/*设计一个学生类Student,由它依次派生出本科生、研究生类
学生类包括学号、姓名、年龄、班级等变量以及显示特征信息show函数
本科生类新增辅导员classteacher变量以及显示特征信息show函数
硕士生新增导师tutor和课题project变量以及显示特征信息*/
using namespace std;
class student
{
	private:
		char name[10];
		char classname[20];
		int schooln,age;
	public:
		student(char name[],char classname[],int schooln,int age)
		{
			strcpy(this->name,name);
			strcpy(this->classname,classname);
			this->schooln=schooln;
			this->age=age; 
		}
		void show()
		{
			cout<<name<<" "<<classname<<" "<<schooln<<" "<<age<<endl;
		}
		~student(){cout<<"撤销了学生"<<name<<endl;}
}; 
class bks:public student
{
	private:
		char classteacher[20];
	public:
		bks(char name[],char classname[],int schooln,int age,char *classteacher):student(name,classname,schooln,age)
		{
			strcpy(this->classteacher,classteacher);
		}
		void showbk()
		{
			student::show();
			cout<<"本科辅导员是："<<classteacher<<endl; 
		}
}; 
class yjs:public bks
{
	private:
		char tutor[20],project[50];
	public:
		yjs(char name[],char classname[],int schooln,int age,char *classteacher,char *tutor,char *project):bks(name,classname,schooln,age,classteacher)
		{
			strcpy(this->tutor,tutor);
			strcpy(this->project,project);
		}
		void showyj()
		{
			bks::showbk();
			cout<<"研究生导师及课题："<<tutor<<" "<<project<<endl; 
		}
};
int main()
{
	cout<<"学生a："<<endl; 
	student a("Sian","一班",001,20);
	a.show();
	cout<<"——————————————"<<endl;
	cout<<"学生b："<<endl; 
	bks b("Lily","生物",002,22,"AAA");
	b.showbk();
	cout<<"——————————————"<<endl;
	cout<<"学生c："<<endl; 
	yjs c("Jerry","物理",003,25,"Alex","SSS","《永动喵》");
	c.showyj(); 
	cout<<"——————————————"<<endl;
	return 0;
}
