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
		cout << "\r           \r";//不换行，返回当前行的首位，然后输出一堆空格覆盖原数据，再返回首位 
		Sleep(1000); //暂停程序运行1000毫秒即1秒 
		showtime();
	}
}

void clock::Report_Time()
{
	if (minute == 0 && second == 0)
	{
		for (int i = 0; i<hour; i++)
		{
			cout << "\007";//响铃的SACII码 
			Sleep(1000);
		}
	}
}

int main() 
{ 
    clock XJTU_Big_Ben; 
	XJTU_Big_Ben.set(0,0,0); 
	cout<<"钟表设置的时间：\n"<<endl;;
	XJTU_Big_Ben.showtime(); 
	XJTU_Big_Ben.Report_Time(); 
	XJTU_Big_Ben.run();//运行十秒
	system("pause"); 
	XJTU_Big_Ben.set(9,59,50); 
	cout<<"\n钟表设置的时间：\n"<<endl; 
	XJTU_Big_Ben.showtime(); 
	cout<<endl; //显示设置的时间 
	XJTU_Big_Ben.run(); 
	XJTU_Big_Ben.Report_Time(); 
	cout<<endl; 
	cout<<"运行十秒之后的时间："<<endl; 
	XJTU_Big_Ben.showtime(); 
	cout<<endl; 
	clock x;
	x= XJTU_Big_Ben;
	x.showtime();
	cout<<"//同类对象之间可以整体赋值"<<endl;
	return 0; 
}
