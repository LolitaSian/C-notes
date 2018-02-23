 /*
设有两个句子:
Heavy rains are pushing water levels beyond the limit.
Sluice gates at Three Gorges Dam opened to discharge water.
开始由两个符号表示，请将它们合并为一段文字，然后查找其中的“Heavy”替换为“Strong”，最后显示处理过的文本。
 */
 #include <iostream>  
 #include <string>//包含了string类型的头文件
  
using namespace std;  
int main()  
{
	string text1="Heavy rains are pushing water levels beyond the limit.";
	string text2="Sluice gates at Three Gorges Dam opened to discharge water.";
	string text3;
	text3=text1+text2;
	int k;
	k=text3.find("Heavy");//查找heavy，找到之后返回H所在的位置，并把位置赋值k 
	text3.erase(k,sizeof"Heavy"-1);//删除从k位置开始删除“Heavy”-1个字符串长度，因为后面有\0 
	text3.insert(k,"Strong");//k插入 Strong单词 
	cout<<text3<<endl;
	return 0 ;
	
 } 
/*
1. 截取子串
       s.substr(pos, n)    截取s中从pos开始（包括0）的n个字符的子串，并返回
       s.substr(pos)        截取s中从从pos开始（包括0）到末尾的所有字符的子串，并返回

2. 替换子串
       s.replace(pos, n, s1)    用s1替换s中从pos开始（包括0）的n个字符的子串

3. 查找子串
       s.find(s1)         查找s中第一次出现s1的位置，并返回（包括0）
       s.rfind(s1)        查找s中最后次出现s1的位置，并返回（包括0）
       s.find_first_of(s1)       查找在s1中任意一个字符在s中第一次出现的位置，并返回（包括0）
       s.find_last_of(s1)       查找在s1中任意一个字符在s中最后一次出现的位置，并返回（包括0）
       s.fin_first_not_of(s1)         查找s中第一个不属于s1中的字符的位置，并返回（包括0）
       s.fin_last_not_of(s1)         查找s中最后一个不属于s1中的字符的位置，并返回（包括0）
*/
