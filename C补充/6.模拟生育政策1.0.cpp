#include<stdio.h>
#include<time.h>//调用time函数 
#include<stdlib.h>//调用随机数函数 
int main()
{
	//模拟一万对夫妇一孩半生育政策 
	//奇数男孩偶数女孩
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
