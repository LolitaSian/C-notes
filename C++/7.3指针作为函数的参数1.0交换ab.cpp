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
	cout<<"交换之前:x="<<x<<" y="<<y<<endl;
	swap(&x,&y);
	cout<<"交换之后:x="<<x<<" y="<<y<<endl;
	return 0;
}
