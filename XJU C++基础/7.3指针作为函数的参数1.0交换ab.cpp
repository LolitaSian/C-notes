#include<iostream> 
#include<iomanip> 
using namespace std;  
int swap(int *xp,int *yp)
{
	int t;
	t=*xp;
	*xp=*yp;
	*yp=t;
}
int main()
{
	int x=2,y=3;
	cout<<"����֮ǰ:x="<<x<<" y="<<y<<endl;
	swap(&x,&y);
	cout<<"����֮��:x="<<x<<" y="<<y<<endl;
	return 0;
}
