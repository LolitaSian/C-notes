#include<stdio.h>
#include<stdlib.h>
/* ��ͨ�������� */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person a)
{
	person b=a;
	printf("�ṹ����ʾ��%s %d %s\n",b.name,b.age,b.sex);
	person *c=&a; 
	printf("ָ������ʾ��%s %d %s\n",c->name,c->age,c->sex);
}
void save(person a)
{
	FILE *fp=fopen("13.����.txt","a");//�ļ�ָ����ļ�
	if(fp!=NULL)
	{
		fprintf(fp,"������%s\n",a.name);
		fprintf(fp,"���䣺%d\n",a.age);
		fprintf(fp,"�Ա�%s\n",a.sex);
		fprintf(fp,"----------------\n");
	} 
	fclose(fp); 
} 
int main()
{
	printf("�������������䣬�Ա�"); 
	person a;
	scanf("%s %d %s",&a.name,&a.age,&a.sex);
	save(a);
	print(a);
	return 0;
}
