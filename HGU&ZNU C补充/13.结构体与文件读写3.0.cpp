#include<stdio.h>
#include<stdlib.h>
/* ��ȡ���� */
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void read(person a[],int n)
{
	FILE *fp=fopen("D:\\Sian\\C++\\HGU&ZNU C����\\13.demo\\13.stu.txt","r");//�ļ�ָ����ļ�
	if(!fp) //fpΪ�գ�û���ļ� 
		printf("��ʧ��\n"); 
	if(fp) //��fp!=NULL 
	{
		char aa[20];
		for(int i=0;i<n;i++)
		{
			fscanf(fp,"������%s\n",a[i].name);
			fscanf(fp,"���䣺%d\n",&a[i].age);
			fscanf(fp,"�Ա�%s\n",a[i].sex);
			fscanf(fp,"----------------\n",aa[20]);
		}
	} 
	fclose(fp);//�ļ��رգ����ر��������������ʧ 
} 
void print(person a)
{
	printf("������%s\n",a.name);
	printf("���䣺%d\n",a.age);
	printf("�Ա�%s\n",a.sex);
	printf("----------------\n");
}
int main()
{
	printf("������Ϣ��\n"); 
	person a[5];
	read(a,5);
	for(int i=0;i<5;i++)
		print(a[i]);
	return 0;
}
