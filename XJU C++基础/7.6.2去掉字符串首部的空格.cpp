#include<iostream>     
using namespace std;  
void noblank(char s[])
{
	int k,j;
	k=0;
	while(s[k]==' ') k++;//计算空格数 
	j=k;
	while(s[j]!='\0')
	{
		s[j-k]=s[j];
		j++; 
	}
	s[j-k]='\0';
}

int main() 
{
    char str[100];
    cin.getline(str,100);
    cout<<"去掉空格之前"<<str<<endl;
	noblank(str);
	cout<<"去掉空格之后"<<str<<endl;

	return 0;
}
