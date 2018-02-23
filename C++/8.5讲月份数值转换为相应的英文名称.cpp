#include<iostream>
using namespace std;
char *monthname(int n)
{
	static char *month[]=
	{
		"wrong",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	return (n>=1&&n<=12)?month[n]:month[0];//除了1-12，其他数都返回【0】 
}
int main()
{
	int n;
	cin>>n;
	cout<<n<<"-"<<monthname(n);
	return 0;
}
