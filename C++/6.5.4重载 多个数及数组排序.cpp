#include<iostream>
#include<cstring>
using namespace std;
void sort(double &a,double&b)
{
	double mid;
	if(a>b)
	{
		mid=a;
		a=b;
		b=mid;
	}
}//重载函数给两个数排序
void sort(double &a,double &b,double &c)
{
	sort(a,b);
	sort(a,c);//此时a为三个数中最小的数 
	sort(b,c); 
}//重载函数给三个数从小到大排序 
void sort(double &a,double &b,double &c,double &d)
{
	sort(a,b,c);
	sort(a,d);
	sort(b,c,d);
}
void sort(double a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			sort(a[j],a[j+1]);
		}
	}
}//对数组进行从小到大冒泡排序
int mystrcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
	{	i++;	}
	return s1[i]-s2[i];//ASCII码值 
}
void sort(char s1[],char s2[])
{
	if (mystrcmp(s1,s2)>0)
	{
		char t[50];
		strcpy(t,s1);//把s1中的内容复制给t ;需要头文件#include<cstring> 
		strcpy(s1,s2); 
		strcpy(s2,t);
	}
}
const int COL=20;
void sort(char a[][COL] ,int n)
{
	for (int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			sort(a[j],a[j+1]);
		}
	}
}
int main()
{
    //2个、3个、4个实数排序
	double a=22.8,b=115,c=33.2,d=-10.9;
	sort(c,d);
	cout<<c<<" "<<d<<endl;
	sort(b,c,d);
	cout<<b<<" "<<c<<" "<<d<<endl;
	sort(a,b,c,d);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl; 
	double v[]={18,9.3,3.5,5.6,10,8,9,10.5,29,20.9,8.6-5.4,-3,-1,19 };
	sort(v,15);
	for(int i=0;i<15;i++)
	if(i==0)
	{
	    cout<<v[i] ;
	}
	else
	{
	    cout<<" "<<v[i] ;
	}
	cout<<endl;
	char s[] [COL]={"Chinese","President","Xi","Jinping","has","urged","all","the","citizens","to","plant","trees","and","make","the","land","more","beautiful"};
	sort(s,18);
	for(int i=0;i<18;i++)
	{
		if(i==0) cout<<s[i] ;
		
		else cout<<" "<<s[i] ;

	}
	cout<<endl;
	return 0;
}
