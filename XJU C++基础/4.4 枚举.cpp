

#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{
	enum color{red,yellow,blue};
	int first,second,t;
	for(first=red;first<blue;first+=1)
	{
	    for(second=first+1;second<=blue;second+=1)
		{
		    for(int i=0;i<2;i++)
			    {
			    	if(i==0)
			    	t=first;
			    	if(i==1)
			    	t=second;
			    	
				switch(t)
				{
				case red: cout<<"red"<<"\t"; break;
				case yellow: cout<<"yel1ow"<<"\t"; break;
				case blue: cout<<"blue"<<"\t"; break; 
				}
				}
				cout<<"\n";
		}
	}
	cout<<"\n";

	return 0;  
}
/*
ö�ٶ��巽����
����ʽenum <ö��������>{ö�ٳ�����};

����enum Week{Sun,Mon,Tes,Wed,Thu,Fri,Sat};//Sun=O,Mon= 1,Tes=2,Wed=3,Thu=4,Fri=5,Sat=6��
�����������Ԫ�ظ�ֵ����ÿ��Ԫ��Ĭ�ϴ�0��ʼ�����һ 
enum Coin {PENNY= 1,NICKEL=5,DIME= 10,QUARTER=25,HALF_DOLLAR= 50,DOLLAR=100};
�����ֵ����Ǹ�ֵ���� 
enum Color {red,yellow,blue= 1,white,black};//red=O,yellow= 1,blue= 1,white=2,black=3 
û�и�ֵ�Ĵ�0��ʼ ����ֵ�ľ��Ǹ�ֵ��������ֵ֮�����Ӹ�ֵ��+1

����ö�ٳ��������ε�

��������������
����ʽ
enum <ö��������> <ö�ٱ����б�>;
����ʱ��
����ö�����ͺ�����enum COLOR background,foreground;background,foreground��color�ı��� 
����ö������ͬʱ����enum Week {Sun=7,Mon=1,Tes,Wed,Thu,Fri,Sat} begin,end;begin,end��week�ı��� 


enum Week {Sun=7,Mon= 1,Tes,Wed,Thu,Fri,Sat} begin,end;
cin> >background;//ֱ������ö�ٱ���������
begin=1;//��������ö�ٱ���������
begin=Mon;//��ö�ٳ�������ö�ٱ�������ȷ
begin= end;//��ͬ���͵�ö�ٱ�����ֵ��ȷ
begin=(Week)1;//����ǿ������ת���󸳸�ö�ٱ�������ȷ
int a=begin;//��ö�ٱ����������ͱ�������ȷ
int b=Sun;//��ö�ٳ����������ͱ�������ȷ
cout<<begin//����ֱ�����ö�ٱ�������ȷ���������������ֵ���Ǳ�����
cout<<begin+end��//���Խ������㣬��ȷ 
*/ 

