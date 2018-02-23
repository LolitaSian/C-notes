#include<iostream>
using namespace std;
class Date
{
	private:
		int year,month,day;
	public:
		//构造函数的函数名必须与类名相同 
		//构造函数没有返回值 
		//其功能是将对象中的所有数据成员进行初始化，一般由一 系列赋值语句构成 
		//由系统在声明对象时自动调用 
		Date():year(1900),month(1),day(1) //无参构造函数
		{
		}  
		Date(int yy,int mm = 1,int dd = 1);//默认参数构造函数 
		Date(Date &d):year(d.year),month(d.month),day(d.day) //日期对象参数构造函数 
		{
		}
		//Date(char *ps); //字符串日期构造函数 
		void show()
		{
			cout<<year<<"-"<<month<<" "<<day<<endl;
		}
		//函数名是：类名前面加“ ~ ”符号 
		//析构函数不得返回任何值 不得带有任何参数 
		//其主要功能是在撤销对象之前进行一些善后处理工作 由系统自动调用
		~Date() 
		{
			cout << "撤销日期对象"<<endl;
		}
}; 
Date::Date(int yy,int mm,int dd):year(1900),month(1),day(1) //判断年月日合法性。 
{
	if (yy>=1900&&yy<=9999) 
	year = yy; 
	else { return; } 
	if (mm>=1&&mm<=12) 
	month = mm; 
	else 
	{ 
		year=yy;
		return;
	} 
	if (dd>=1&&dd<=31) 
	day = dd; 
	else 
	{ 
		year=yy;
		month=mm;
		return; 
	}
};
int main()
{
	Date date1;//调用无参构造函数 
	date1.show();
	
	Date date2(2006);//调用默认参数构造函数 
	date2.show();
	
	Date date3(2006,2);//调用默认参数构造函数 
	date3.show();
	
	Date date4(2006,2,5);//调用默认参数构造函数 
	date4.show();
	
	Date date5(2006,22,5);//调用默认参数构造函数 
	date5.show();
	
	Date date6(2006,2,95);//调用默认参数构造函数 
	date6.show();
	
	Date date7(date4);//调用日期对象参数构造函数 
	date7.show();
	
	return 0;
}
