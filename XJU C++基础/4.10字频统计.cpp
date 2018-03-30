/*
输入一系列英文单词(单词之间用空格隔开)，用“xyz"表示输入结束。
统计各单词出现的次数(单词不区分大小写)，对单词按字典顺序进行排序后输出单词和词频。
运行结果： 
请输入一系列英语单词，以xyz表示输入结束
Do you see the star,the little star ? xyz
词频统计结果如下:
， 1
?  1
DO 1
…… 
*/

#include <iostream>  
#include <cstring> 
using namespace std;
struct WordList //字典结构体 
{char word[20];//使用次数 
int freq;} ;//使用次数

int main()  
{
	WordList list[1000];//结构体数组，最多可使用1000个单词 .
	int N;//实际单词数量
	int i,j,k;
	char a[20];//临时存放输入的单词
	
	cout<<"输入一系列英文单词(单词之间用空格隔开)，用“xyz”表示输入结束。"<<endl; 
	cin>>a;
	while (strcmp(a,"xyz")!=0)//a和xyz不相等
	{
		for(i=0;i<N;i++)
		{
			if(strcmp(list[i].word,a)==0)
			{
				list[i].freq++;
				break;
			}
		
		}
		if(i>=N)
		{
			strcpy(list[i].word,a);//添加单词 
			list[i].freq=1;//词频为1 
			N++;//单词数+1 
		}
		cin>>a;
	} 
	//对词典进行排序：
	for(i=0;i<N-1;i++) 
	{
		if(strcmp(list[j].word,list[k].word)<0)
		{
			k=j;
		}
	}
	if(k!=i)
	{
		WordList tmp;
		tmp=list[i];
		list[i]=list[k];
		list[k]=tmp;
	}
	//---------输出结果------------
	cout<<"词频统计结果如下:"<<endl;//输出
	for(i=0;i<N;i++)
	cout<<list[i].word<<"\t"<<list[i].freq<<endl;

	return 0;
}
/*
1.数据结构。本题中每个单词有两条信息要记录，一是单词本身，二是单词的出现次数，即使1次，所以可以用结构体。
2.查找。每输入一个单词，要在已有单词序列中查找，找到次数加1，找不到则添加一个新单词，次数置1。
3.选择排序。先将待排序序列分成有序部分和无序部分，重复地从无序部分中找出最大的元素，放在有序部分的最后，
直到无序部分只有一个元素。如果有N个元素要排序，这样的选择过程只需要N-1次。


1.输入单词word ;
2.如果word否为结束标志xyz; 转4，否则继续;
3.顺序查找word是否在词典中。
若已存在词典中，则将对应的词频加1，返回0;
若词典中不存在该单词，则向词典中添加新的单词，返回0;
4.对词典进行排序;
5.输出词典内容。
*/
