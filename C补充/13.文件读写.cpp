#include<stdio.h>
#include<stdlib.h>
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person b)
{
	person a=b;
	printf("结构体：%s %d %s\n",a.name,a.age,a.sex);
	person *c=&a; 
	printf("指　针：%s %d %s\n",c->name,c->age,c->sex);
}
void print(person *b)
{
	person *a=b; //不能写*a=*b；
	printf("%s %d %s\n",b->name,b->age,b->sex);
}
int main()
{
	printf("输入第一个人姓名，年龄，性别："); 
	person a;
	scanf("%s %d %s",&a.name,&a.age,&a.sex);
	print(a);
	printf("输入第二个人姓名，年龄，性别："); 
	person *b=(person *)malloc(sizeof(person));
	scanf("%s %d %s",&b->name,&b->age,&b->sex);
	print(b);
	return 0;
} 
