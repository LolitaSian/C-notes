
#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{  
    char str[101]; //�����\0ռһ���ַ� 
    int length=0,d=0,x=0,s=0,q=0;//length ���ȣ�d��д��xСд��s���֣�q����
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
	
	cout<<"�ַ����ܳ��ȣ�"<<length<<endl; 
	cout<<"��д��ĸ������"<<d<<endl; 
	cout<<"Сд��ĸ������"<<x<<endl; 
	cout<<"���ָ�����"<<s<<endl; 
	cout<<"�����ַ�������"<<q<<endl; 
	 
    
    return 0; 
}
/*
cin > > <�ַ�������>��ֻ�����뵥��;
��Ϊ��>>���Կո�tab�����س�Ϊ�ָ����������ո���Ϊ��һ�����ݵĽ�����
cin����������������һ����Ա����getline()���Զ�ȡ���ո��һ���ַ�����
����ʹ��ʽΪ:cin.getline(<�ַ�������>,<�ַ�����>);
����:char sentence[100]; //�ַ������С100����������99���ַ� 
     cin.getline(sentence,99);���������99(�س�����)���ַ������м�����пո�
*/
