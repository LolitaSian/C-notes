#include<stdio.h>
#include<stdlib.h>
/* 普通函数方法 */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person a)
{
	person b=a;
	printf("结构体显示：%s %d %s\n",b.name,b.age,b.sex);
	person *c=&a; 
	printf("指　针显示：%s %d %s\n",c->name,c->age,c->sex);
}
void save(person a)
{
	FILE *fp=fopen("13.名单.txt","a");//文件指针打开文件
	if(fp!=NULL)
	{
		fprintf(fp,"姓名：%s\n",a.name);
		fprintf(fp,"年龄：%d\n",a.age);
		fprintf(fp,"性别：%s\n",a.sex);
		fprintf(fp,"----------------\n");
	} 
	fclose(fp); 
} 
int main()
{
	printf("输入姓名，年龄，性别："); 
	person a;
	scanf("%s %d %s",&a.name,&a.age,&a.sex);
	save(a);
	print(a);
	return 0;
}
