
#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{  
    char str[101]; //最后有\0占一个字符 
    int length=0,d=0,x=0,s=0,q=0;//length 长度，d大写，x小写，s数字，q其他
	int i;
	cin.getline(str,101);
	i=0;
	while(str[i]!=0)
	{
		length+=1;
		if(str[i]>='A'&&str[i]<='Z')
		{	d=d+1;	}
		else if (str[i]>='a'&&str[i]<='z')
		{	x=x+1;	}
		else if (str[i]>='0'&&str[i]<='9')
		{	s=s+1;	}
		else
		{	q=q+1;	}
		i++;
	}
	
	cout<<"字符串总长度："<<length<<endl; 
	cout<<"大写字母个数："<<d<<endl; 
	cout<<"小写字母个数："<<x<<endl; 
	cout<<"数字个数："<<s<<endl; 
	cout<<"其他字符个数："<<q<<endl; 
	 
    
    return 0; 
}
/*
cin > > <字符数组名>，只能输入单词;
因为“>>”以空格、tab键、回车为分隔符，遇到空格认为是一项数据的结束。
cin是输入流对象，它有一个成员函数getline()可以读取带空格的一行字符串。
基本使格式为:cin.getline(<字符数组名>,<字符长度>);
例如:char sentence[100]; //字符数组大小100，可以输入99个字符 
     cin.getline(sentence,99);可以输入最长99(回车结束)的字符串，中间可以有空格。
*/
