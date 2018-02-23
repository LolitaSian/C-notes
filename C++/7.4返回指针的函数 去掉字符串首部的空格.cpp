#include<iostream>
using namespace std;
char* noblank(char* str)
{
	while(*str==' ') str++; 
	return str;
}
int main()
{
	char *s1=(char*)"   using namespace std;";
	char *s2;
	s2=noblank(s1);
	cout<<s2<<endl;
	return 0;
}
