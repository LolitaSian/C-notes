#include<stdio.h>
#include<stdlib.h>
/* �ṹ��ָ�뷽�� */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person *a) 
{
	person *b=a; //����д*a=*b��
	printf("%s %d %s\n",b->name,b->age,b->sex);
}

void save(person *a)
{
	FILE *fp=fopen("D:\\Sian\\C++\\HGU&ZNU C����\\13.demo\\13.demo.txt","a");//�ļ�ָ����ļ�
	if(!fp) //fpΪ�գ�û���ļ� 
		printf("��ʧ��\n"); 
	if(fp) //��fp!=NULL 
	{
		fprintf(fp,"������%s\n",a->name);
		fprintf(fp,"���䣺%d\n",a->age);
		fprintf(fp,"�Ա�%s\n",a->sex);
		fprintf(fp,"----------------\n");
	} 
	fclose(fp);//�ļ��رգ����ر��������������ʧ 
} 
int main()
{
	printf("�������������䣬�Ա�"); 
	person *b=(person *)malloc(sizeof(person));
	scanf("%s %d %s",&b->name,&b->age,&b->sex);
	save(b);
	print(b);
	return 0;
}
