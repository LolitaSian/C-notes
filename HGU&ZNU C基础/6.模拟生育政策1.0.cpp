#include<stdio.h>
#include<time.h>//����time���� 
#include<stdlib.h>//������������� 
int main()
{
	//ģ��һ��Է�һ������������ 
	//�����к�ż��Ů��
	int boy=0,girl=0; 
	srand( (unsigned)time(NULL) ); 
	for(int i=0;i<10000;i++)
	{
		if(rand()%2==1)
		{
			boy++;
		}
		else
		{
			girl++;
			if(rand()%2==1) boy++;
			else girl++;
		}
	} 
	printf("boy=%d\ngirl=%d",boy,girl);
	return 0;
} 
