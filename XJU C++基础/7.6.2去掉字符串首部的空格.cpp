#include<iostream>     
using namespace std;  
void noblank(char s[])
{
	int k,j;
	k=0;
	while(s[k]==' ') k++;//����ո��� 
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
    cout<<"ȥ���ո�֮ǰ"<<str<<endl;
	noblank(str);
	cout<<"ȥ���ո�֮��"<<str<<endl;

	return 0;
}
