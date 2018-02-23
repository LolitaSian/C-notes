#include<iostream>
using namespace std;
class date
{
	private:
		int year,month,day;
	public:
		date()
		{
			year=2018;
			month=1;
			day=26;
		}
		void showymd()
		{
			cout<<year<<"-"<<month<<"-"<<day<<endl;
		}
		void showmdy()
		{
			char *m[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Sep","Oct","Nov","Dec"};
			cout<<m[month]<<","<<day<<","<<year<<endl;
		}
		date(int y,int m,int d);
		/*用month[13]会显示[Error] too many initializers for 'char [500]'
		因为str[]只是一个字符串数组，而你对其给它赋了很多初始值，并且是字符串型的,所以会报错。
		定义一个字符串指针数组就可以解决，改为：char *str[]={……};*/
}; 
date::date(int y,int m,int d)
{
	year=y;
	month=(m>0&&m<13)?m:1;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if(d>0&&d<32)
			day=d;
		else day=26;
	} 
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>0&&d<31)
			day=d;
		else day=26;
	}
	else if(m=2)
	{
		if((y%400==0)||(y%100!=0&&y%4==0))
		{
			if(d>0&&d<30)
				day=d;	
			else day=26;
		}
		else
		{
			if(d>0&&d<29)
				day=d;
			else day=26;
		}
	}
}
int main()
{
	date a;
	a.showmdy();
	a.showymd();
	date b(2008,52,55);
	b.showmdy();
	date c(2021,5,16);
	c.showymd();
	return 0;
}
