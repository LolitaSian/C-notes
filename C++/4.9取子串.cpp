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
	char str[101],a[101];
	int length;
	int q,c;//q开始字符，c长度
	int i,j;
	cout<<"请输入字符串"<<endl;
	cin.getline(str,101) ;
	length=0; 
	while(str[length]!=0)
	{
		length++;
	 } //求出字符串长度
	cout<<"字符串长度为："<<length<<endl;
	cout<<"请输入子字符串起始位置额长度"<<endl;
	cin>>q>>c;
	
	while(q!=0&&c!=0)
	{
		j=0;//截取的子串从a[0]开始
		for(i=q-1;i<=q-1+c&&i<length;i++) //i从q开始，也就是str[q-1] 
		{
			a[j]=str[i];
			j++;
		}
		a[j]='\0';//在子串结尾放置结束标志 
		cout<<a<<endl;
		
		//进入下一轮循环 
		cout<<"请输入子字符串起始位置额长度"<<endl;
		cin>>q>>c;	
	 } 

	return 0; 
 } 

