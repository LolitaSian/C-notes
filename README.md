# Basical Learning notes
### 这个readme是写的C语言补充辣！
####介绍一下两个文件夹
C++ | C补充
------ | ------  
C++的代码和pdf | C语言的一些补充  

# 1.printf
　　printf函数称为格式输出函数，其关键字最末一个字母f即为“格式”(format)之意。在%后面跟有各种格式字符，以说明输出数据的类型、形式、长度、小数位数等。如：
“%d”表示按十进制整型输出；
“%lf”或者“%f”表示按十进制小数型输出；
“%c”表示按字符型输出等。

**%f和%lf分别是float类型和double类型用于格式化输入输出时对应的格式符号。**
其中：

符号 | 名称 | 备注
-------- | -------- | ---------
%d | decimal | 输出十进制有符号int型
%u | unsigned | 输出十进制无符号int型
%f | float | 
%lf | double |
%e | exponent | 标准指数形式输出浮点数


- 在用于输出时:float类型可以使用%lf格式，但不会有任何好处。double类型如果使用了%f格式可能会导致输出错误。
- 在用于输入时:double 类型使用了%f格式，会导致输入值错误。float类型使用double类型不仅会导致输入错误，还可能引起程序崩溃。

**print 格式修饰符 ：%h数据类型**
> h代表数据占据的最小列宽。h为正数右对齐，左边补空格，h为负数，坐对齐，右边补空格。

```
#include <stdio.h>
int main()
{
    int a=88,b=89,c=30;
    double d=1.23;
    printf("%d %d %d\n",a,b,d); //输出：88 89 2061584302
    printf("%d,%d\n",a,b);//输出：88,89 
    printf("%f %lf %f\n",a,b,d);//输出：0.000000 0.000000 1.230000
    printf("%c,%c,%c,%c\n",a,b,c,d); //输出：X,Y,□,? 
    printf("a=%d,b=%d",a,b);//输出：a=88,b=89
    
    //————分割线————
	double PI=3.1415926;//小数点后有七位
	printf("%f\n",PI);//输出：3.141593 
	printf("%lf\n",PI);//输出：3.141593 
	printf("%.2f\n",PI);//输出：3.14
	printf("%.10f\n",PI);//输出：3.1415926000
    return 0;
}
```
***
# 2.scanf
　　scanf("",&)输入要与双引号内形式保持一致。
***
- 使用getchar();
　　getchar()是以行缓冲方式输入数据的，即用户在用getchar()从键盘输入字符时，程序并未直接读取用户输入，而是在用户按回车键以后将输入字符先放入到输入缓冲队列中，然后再从缓冲队列中读取字符。读入回车符或EOF会结束输入。
　　getchar()函数要求用户从键盘输入的数据必须按回车，只有用户按了回车键以后才对用户输入到缓冲区中的数据进行一次性处理，并且只要用户按了回车键就对用户输入到缓冲区中的数据进行处理。
- 使用%c;
　　％ｃ也会读入空格和回车，所以适当时候可以在scanf之前加一个getchar读取回车。或者为了避免将输入缓冲区中的空白字符（空格、回车换行符、Tab键）作为有效字符读入，可以在%c前面加一个空格。
```
#include <stdio.h>
int main()
{
    char ch1, ch2;
    ch1 = getchar();
    printf("ch1=%c\n", ch1);
    ch2 = getchar();
    printf("ch2=%c\n", ch2);
    return 0;
}
```

所以上述程序段中想让ch1ch2输出ab，输入“a回车”会直接结束程序，ch1读入a，ch2读入回车。输入“ab回车”才会输出ab。
*** 
# 4.宏定义和const常量
```
#include<stdio.h>//编译预处理
#define PI 3.14 //宏定义，也是编译预处理，不需要分号 
int main()
{
	double r;
	const double R=1.5; //之后无法修改它的值 
	scanf("%lf",&r);
	double s=PI*r*r;
	printf("%lf",s);
	
}  
```
***

# 5.标准库math.h常用
 名称 | 函数 
 -------- | -------
 指数 | exp (); pow ( , );sqrt ()
 对数 | log ()以e为底的对数;log10 ()
绝对值 |  fabs ()
 三角函数 | sin(),cos(),tan()
取上整 | ceil ();   
取下整 | floor ();   
取余 |  modf (  , );  fmod ( , )


- modf (  , )用法：得数返回小数部分，函数中指针返回整数部分。
```
#include<stdio.h>
int main()
{
	double x, fractpart, intpart;
	x = 8.123456;
	fractpart = modf(x, &intpart);
	printf("Integral part = %lf \n", intpart); //Integral part = 8.000000
	printf("Fraction Part = %lf", fractpart);  //Fraction Part = 0.123456
} 
```
***
# 6.rand()函数及srand()函数
　　C库函数中系统提供了两个函数用于产生随机数：srand()和rand()。
**函数一：** int rand(void)；返回一个[0,RAND_MAX]间的随机整数。RAND_MAX 的值应至少为32767。
**函数二：** void srand(unsigned seed)；参数seed是rand()的种子，用来初始化rand()的起始值。
**srand和rand()配合使用产生伪随机数序列。**

- rand函数在产生随机数前，需要系统提供的生成伪随机数序列的种子，rand根据这个种子的值产生一系列随机数。如果系统提供的种子没有变化，每次调用rand函数生成的伪随机数序列都是一样的。
- srand(unsigned seed)通过参数seed改变系统提供的种子值，从而可以使得每次调用rand函数生成的伪随机数序列不同，从而实现真正意义上的“随机”。通常可以利用系统时间来改变系统的种子值，即srand(time(NULL))，可以为rand函数提供不同的种子值，进而产生不同的随机数序列

**产生一定范围随机数的通用表示公式**
      要取得[a,b)的随机整数，使用(rand() % (b-a))+ a （结果值含a不含b）。
      要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a （结果值含a和b）。
      要取得(a,b]的随机整数，使用(rand() % (b-a))+ a + 1 （结果值不含a含b）。
      （总的来说，通用公式：a + rand() % n ；其中的a是起始值，n是整数的范围）
      要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
      要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。
```
#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
int main(int argc, char* argv[])
{	srand( (unsigned)time(NULL) );//一般用系统时间做种子
	int i;
	for(i=0;i<10;i++)//生成十个随机数
	{
	int y= rand() %100;
	double x=(double )rand()/RAND_MAX;
	printf("\n%d %lf %d", y,x, RAND_MAX);	
	}
	return 0;
}
```
# 7.break continue
break是跳出本轮循环，continue是进入下一轮循环。
```
#include<stdio.h>
int main()
{
	int a=7;
	while(a>1)
	{
		a--;
		if(a==3)
		{
			continue;
		} 
		printf("%d ",a);
	}
	return 0;
}//输出：6 5 4 2 1 
———————————————————————
#include<stdio.h>
int main()
{
	int a=7;
	while(a>1)
	{
		a--;
		if(a==3)
		{
			break;
		} 
		printf("%d ",a);
	}
	return 0;
}//输出：6 5 4 
```

