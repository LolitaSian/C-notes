#include<stdio.h>
#include<stdlib.h>
/* 结构体指针方法 */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person *a) 
{
	person *b=a; //不能写*a=*b；
	printf("%s %d %s\n",b->name,b->age,b->sex);
}

void save(person *a)
{
	FILE *fp=fopen("D:\\Sian\\C++\\HGU&ZNU C补充\\13.demo\\13.demo.txt","a");//文件指针打开文件
	if(!fp) //fp为空，没打开文件 
		printf("打开失败\n"); 
	if(fp) //即fp!=NULL 
	{
		fprintf(fp,"姓名：%s\n",a->name);
		fprintf(fp,"年龄：%d\n",a->age);
		fprintf(fp,"性别：%s\n",a->sex);
		fprintf(fp,"----------------\n");
	} 
	fclose(fp);//文件关闭，不关闭容易造成数据损失 
} 
int main()
{
	printf("输入姓名，年龄，性别："); 
	person *b=(person *)malloc(sizeof(person));
	scanf("%s %d %s",&b->name,&b->age,&b->sex);
	save(b);
	print(b);
	return 0;
}
