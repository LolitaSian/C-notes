#include<iostream> 
#include<windows.h>
using namespace std;
class clock
{
private://数据成员一般私有，函数成员一般为公有。 
	int second, minute, hour;
public:
	void set(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	};//类内定义跟普通自定义函数一样。 
	void showtime()
	{
		cout << hour << " : " << minute << " : " << second;
	};
	void run();
	void Report_Time();
	void alarm(int h,int m,int s);
};

void clock::run()
{
	int i;
	for (i = 0; i<10; i++)//运行十秒 
	{
		second++;
		if (second == 60)
		{
			second = 0;
			minute++;
			if (minute == 60)
			{
				minute = 0;
				hour++;
				if (hour == 24)
				{
					hour = 0;
				}
			}
		}
		cout << '\r';//不换行，返回当前行的首位 
		Sleep(1000); //暂停程序运行1000毫秒即1秒 
		showtime();
	}
}

void clock::Report_Time()
{
	showtime();
	if (minute == 0 && second == 0)
	{
		for (int i = 0; i<hour; i++)
		{
			cout << "\007";//响铃的SACII码 
			Sleep(1000);
		}
	}
}

void clock::alarm(int h,int m,int s)
{
	cout<<"在"<<h<<"小时"<<m<<"分"<<s<<"秒之后响铃"<<endl;
	for (int i=0;i<=h;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k<=s;k++)
			{
				Sleep(1000);
			}
		}
	}
	cout<<'\007';
}

int main()
{
	cout<<"请输入、小时、分、秒（时数不足用0代替）" <<endl; 
	int  h,m,s;
	cin>>h>>m>>s;
	clock c; 
	c.alarm(h,m,s);//几秒之后响铃 
	return 0;
}
