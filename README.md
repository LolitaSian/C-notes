# Basical Learning notes
### 这个readme是写的C语言补充辣！
#### 介绍一下两个文件夹

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
%s |string | 字符串
%c  | char |单个字符
%p| |指针的值
%x | |无符号以小写十六进制表示的整数
%X | |无符号以大写十六进制表示的整数
%o  | |无符号以八进制表示的整数
%g | |自动选择合适的表示法


- 在用于输出时:float类型可以使用%lf格式，但不会有任何好处。double类型如果使用了%f格式可能会导致输出错误。
- 在用于输入时:double 类型使用了%f格式，会导致输入值错误。float类型使用double类型不仅会导致输入错误，还可能引起程序崩溃。

<font color="red">另外：</font>在C中，使用bool型需要头文件stdbool.h

**print 格式修饰符 ：%h数据类型**
例如int num，占5字符，右对齐。
> print("%5d",num); 5代表数据占据的最小列宽。h为正数右对齐，左边补空格，h为负数，左对齐，右边补空格。
**在C++中** 则使用cout<<stew(5)<<num;（需要iomanip）头文件

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

- 使用getchar();
　　getchar()是以行缓冲方式输入数据的，即用户在用getchar()从键盘输入字符时，程序并未直接读取用户输入，而是在用户按回车键以后将输入字符先放入到输入缓冲队列中，然后再从缓冲队列中读取字符。读入回车符或EOF会结束输入。
　　getchar()函数要求用户从键盘输入的数据必须按回车，只有用户按了回车键以后才对用户输入到缓冲区中的数据进行一次性处理，并且只要用户按了回车键就对用户输入到缓冲区中的数据进行处理。
- 使用%c;
　　%ｃ也会读入空格和回车，所以适当时候可以在scanf之前加一个getchar读取回车。或者为了避免将输入缓冲区中的空白字符（空格、回车换行符、Tab键）作为有效字符读入，可以在%c前面加一个空格。
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
# 3.宏定义和const常量
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

# 4.标准库math.h常用

名称 | 函数 
--- |---
指数 | exp (); pow ( , );sqrt () 
对数 | log ()以e为底的对数;log10 () 
绝对值 | fabs () 
三角函数 | sin(),cos(),tan() 
取上整 | ceil ()
取下整 | floor ()
取余 | modf ( , ); fmod ( , )


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

#  5.rand()函数及srand()函数
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
*** 

# 6.break continue
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
# 7.字符串
　　C语言中虽然有string.h这个头文件，但是不像C++，可以直接用string a来声明一个字符串。

- 字符串char str[100]的输入用scanf("%s",str)
- 所有字符串都是字符数组，但是字符数组不一定是字符串
- 字符串结尾为\0
##### <font color="red">另外</font> ：申请动态数组的方法也和C++不一样。（详细看12（五））
> 　　动态数组是指在声明时没有确定数组大小的数组，可以根据用户需要，有效利用存储空间。

　　**通俗的说** 就是你平时做数组题，int a[100]，可能你根本用不到100，多定义的这些空间是占内存的，**再比如有的题：** 输入有两行，第一行是一个数n，确定确定数组长度，第二行是数组的n个数据。
```
//——————————————C++方法：——————————————
int n;
cin>>n;    //输入n
int *a=new int [n];     //声明动态数组
//——————————————C方法：——————————————
int n;
scanf("%d", &N);
int *a = (int *) malloc(n * sizeof(int));   

      //seizeof()是C/C++中的一个操作符，可以判断某种变量类型占几个字节
```
***

#  8.C语言优先级
同一优先级的运算符，运算次序由结合方向所决定。
**简单记就是：** ！ > 算术运算符 > 关系运算符 > && > || > 赋值运算符
详细戳：[C语言优先级百度百科](https://baike.baidu.com/item/%E8%BF%90%E7%AE%97%E7%AC%A6%E4%BC%98%E5%85%88%E7%BA%A7/4752611?fr=aladdin)。

# 9.递归
 **优点：**
1. 简洁
2. 递归的实现明显要比循环简单得多。（虽然我个人觉得循环简单）

**缺点：**
1. 效率低下。
3. 数值过大可能会栈溢出。


***

# 10.assert
　　assert()是一个在assert.h中定义的宏，用来验证“不应该”发生的情况是否的确不会发生。需要头文件assert.h，用于在**debug**过程中检测程序正确性。assert()的功能就是验证assert后括号内表达式值的真假，当该表达式的值为真时，它什么也不做。反之，则立即终止程序的执行，并报告错误，但是不会对错误采取其他处理措施。相对于条件语句，assert不会影响程序执行效率。

```
int a=20;
while(a>=10)
{
	a--;
}
assert(a<10);
```
　　在上边程序中，assert就是检测a是否小于10，以防止在while循环中出现问题。如果a大于等于10的话，assert就会起作用，报错。例如下边：
```
int a=20;
while(a>=10)
{
	a--;
}
assert(a<10);
```
***
# 11.函数
　　**对于形参和实参的理解：** 看下面代码
```
int max(int m;int n)
{
	//函数体
}
int main()
{
	int a=5,b=10;
	int c=1,d=2;
	max(a,b);
	max(c,d);
}
```
　　自定义函数中的**m，n**就是形参，main函数中的**a，b，c，d**就是实参。**我是这么理解的（为了方便记忆）**：自定义函数可以传入不同的参数，也就是**m，n**只是一个形式，它们代指可以传入函数的数据类型，因此只是形式上的参数，成为形参；而**abcd**在实际应用中是不同的，它们被称为实参。

##### 内联函数：
　　内联函数是指**用inline关键字修饰的函数**。在类内定义的函数被默认成内联函数。内联函数从源代码层看，有函数的结构，而在编译后，却不具备函数的性质。

　　**内联函数不是在调用时发生控制转移，而是在编译时将函数体嵌入在每一个调用处。编译时，类似宏替换。**

##### 重载函数：
　　重载函数**具有相同的函数名**，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。

***
# 12.指针
（一）基础问题：
　　**int *p=a**带\*即声明指针。p是指向a的指针，可以理解为p就是a的别名。&为取地址符。
```
#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("a=%d\n",a);  //输出 a=5
	printf("p=%d\n",*p); //输出 p=5
	printf("地址1=%d\n",p);  //输出 地址1=6618700
	printf("地址2=%d\n",&a); //输出 地址2=6618700
	printf("地址3=%d",&p);   //输出 地址3=6618688
}
```
　　上边地址1和2可以看到**p**就是**a**的地址，输出a=p=5 可以看出***p**就是**a**。而地址3是输出**p**本身的地址，也就是说**p**是有自己的地址，但是**p**的值是**a**的地址。
（二）指针在函数中的应用
　　**指针在函数中作为形参，可以改变实参的值。**
```
#include<stdio.h>
int swap(int *p1,int *p2)
{
	int mid=*p1;
	*p1=*p2;
	*p2=mid;
} 
int main()
{
	int a=5,b=10;
	printf("a=%d,b=%d\n",a,b);
	int *a1=&a,*b1=&b;
	swap(a1,b1);
	printf("a=%d,b=%d\n",a,b);
}
/*输出：
a=5,b=10
a=10,b=5
*/
```
　　**如果用普通int变量做形参，则不会改变实参的值。**
```
#include<stdio.h>
int swap(int p1,int p2)
{
	int mid=p1;
	p1=p2;
	p2=mid;
} 
int main()
{
	int a=5,b=10;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
}
/*输出：
a=5,b=10
a=5,b=10
*/
```
　　**其实，讲真用&（取地址符）做更简单。**
```
#include<stdio.h>
int swap(int &p1,int &p2)
{
	int mid=p1;
	p1=p2;
	p2=mid;
} 
int main()
{
	int a=5,b=10;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
}
/*输出：
a=5,b=10
a=10,b=5
*/
```
（三）数组在函数中的传参
　　数组传入函数的时候传入的是数组的首地址，所以数组不需要指针形参，就可以改变实参的值。
```
#include<stdio.h>
int Arr(int arr[])
{
	for(int i=0;i<5;i++)
	{
		arr[i]+=1;
	}
} 
int main()
{
	int a[5]={0,1,2,3,4};
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	} //输出 0 1 2 3 4
	printf("\n");
	Arr(a);
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	} //输出 1 2 3 4 5
}
```
　　此外，数组中各元素的地址也可以用a表示，例如**&a[0]**就是**a** ，**a[10]**就是**a+10** 。
（四）函数指针的定义
　　　函数返回值类型 （*指针函数名）（形参列标）
```
int (*max)(int a,int b)
{
	//函数体
}
```
（五）动态数组

语言 |  C | C++
--- | --- | ---
 声明方式 | int *p=(int *)malloc(sizeof(int)*n); 　　|　int  *p=new int [n]
 释放方式 | free(p);  　　|　delete p;

　　C语言中声明语句的意思是申请一个int类型的动态数组，sizeof(int)\*n的意思是一个数组元素所占字节大小为一个int型大小，一共有n个数组元素，就是sizeof(int)\*n。free(p)是动态申请的空间，使用完要释放掉。
　　**例如**：n=10，你要建立数组a[n]， 就写为int \*a=(int \*)malloc(sizeof(int)\*n)，然后建立出来的数组就是a[10]。

# 13.文件读写
　　fopen函数是打开一个文件。必须用FILE声明一个文件指针，然后文件指针=fopen（文件名,使用文件方式）。例如 FILE *fp=fopen("demo.txt","文件使用方式"); 

　　<font color="red">注意：</font>如果fopen第一个参数只写文件名，那就是在当前目录下打开文件，如果要打开其他地方的文件，需要写上文件目录+文件名，并且一定要使用转义字符讲文件目录转换成字符串。例如：D:\Sian\demo.txt就要写成 D:\\Sian\\demo.txt
 　　记得关闭文件，防止数据丢失。

文件使用方式 | 含义 |备注
-----|-------
r(read) | 只读
w(write)|只写|创建或打开，覆盖原有文件
a(append)|只追加  |创建或打开，在文件末追加
r+ w+ a+| 读写 |同前三项
t(text)|文本文件方式打开| 可省略不写
b(binary)|二进制文件方式打开


- 凡用“r”打开一个文件时，该文件必须已经存在，且只能从该文件读出。
- 用“w”打开的文件只能向该文件写入。若打开的文件不存在，则以指定的文件名建立该文件，若打开的文件已经存在，则将该文件删去，重建一个新文件。
- 若要向一个已存在的文件追加新的信息，只能用“a”方式打开文件。如果指定文件不存在则尝试创建该文件。
- 在打开一个文件时，如果出错，fopen将返回一个空指针值NULL。在程序中可以用这一信息来判别是否完成打开文件的工作，并作相应的处理。**因此常用fp!=NULL来验证文件是否打开。**
