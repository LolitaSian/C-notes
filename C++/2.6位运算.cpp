#include <iostream>
using namespace std ;
int main()
{
	int a=0x69;//0x表示是16进制数 
	int b=0x5E;
	int c ;
	
	cout<<uppercase; //输出的十六进制数中的字母为大写
	
	cout<<dec<<a<<"\t"<<hex<<a<<endl;//dec设定后面的数以十进制输出，hex设定后面的数以十六进制数出
	 
	cout<<dec<<b<<"\t"<<hex<<b<<endl;
	
	c=a&b;//按位”与”,&&逻辑与 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=ab;//按位“或”，||逻辑或 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a^b;//按位“异或” 
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=~a;//按位“取反”
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a<<2;//左移2
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	c=a>>2;//右移2
	cout<<dec<<c<<"\t"<<hex<<c<<endl;
	
	cout<<dec;//恢复十进制输出 
	
	 

	return 0;

}
