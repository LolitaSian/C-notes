/*实现一个学生成绩信息类Info,包括的特征信息有学号Id、姓名Name、
程序设计课程成绩Programming、计算机网络课程成绩Network、数据库课程成绩Database,总分Total等内容
要求能够输入多名学生的信息并显示。*/
#include<iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
class info
{
private:
	int Id;
	char Name[20];
	int Programming,Network,Database,Total;
public:
	void set(int id,char *name,int p,int n,int d);
	void show();
	int gettotal() {return Total;}
	int getid() {return Id;}
	int getp() {return Programming;}
	int getn() {return Network;}
	int getd() {return Database;}
};
void info::set(int id,char *name,int p,int n,int d)
{
	Id=id;
	strcpy(Name,name);
	Programming=p;
	Network=n;
	Database=d;
	Total=p+n+d;
}
void info::show()
{
	cout<<Id<<'\t';//'\t'tab
	cout<<Name<<'\t';
	cout<<Programming<<'\t';
	cout<<Network<<'\t';
	cout<<Database<<'\t';
	cout<<Total<<endl;
}
int main()
{
	int num;
	cin>>num;
	info *student=new info[num];
	//输入
	for (int i=0;i<num;i++)
	{
		int id,p,n,d;
		char name[20];
		cin>>id>>name>>p>>n>>d;
		student[i].set(id,name,p,n,d);
	}
	//按照总分数从低到高排序
	for (int i=0;i<num-1;i++)
	{
		for (int j=0;j<num-i-1;j++)
		{
			if (student[j].gettotal()>student[j+1].gettotal())
			{
				info mid=student[j];
				student[j]=student[j+1];
				student[j+1]=mid;
			}
		}
	}
	//输出
	cout<<"学号 | 姓名 | 程序设计 | 计算机网络 | 数据库 | 总分"<<endl;
	for (int i=0;i<num;i++)
	{
		student[i].show();
	}
}
