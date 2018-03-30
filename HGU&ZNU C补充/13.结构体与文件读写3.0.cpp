#include<stdio.h>
#include<stdlib.h>
/* 读取数据 */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void read(person a[],int n)
{
	FILE *fp=fopen("D:\\Sian\\C++\\HGU&ZNU C补充\\13.demo\\13.stu.txt","r");//文件指针打开文件
	if(!fp) //fp为空，没打开文件 
		printf("打开失败\n"); 
	if(fp) //即fp!=NULL 
	{
		char aa[20];
		for(int i=0;i<n;i++)
		{
			fscanf(fp,"姓名：%s\n",a[i].name);
			fscanf(fp,"年龄：%d\n",&a[i].age);
			fscanf(fp,"性别：%s\n",a[i].sex);
			fscanf(fp,"----------------\n",aa[20]);
		}
	} 
	fclose(fp);//文件关闭，不关闭容易造成数据损失 
} 
void print(person a)
{
	printf("姓名：%s\n",a.name);
	printf("年龄：%d\n",a.age);
	printf("性别：%s\n",a.sex);
	printf("----------------\n");
}
int main()
{
	printf("人物信息：\n"); 
	person a[5];
	read(a,5);
	for(int i=0;i<5;i++)
		print(a[i]);
	return 0;
}
