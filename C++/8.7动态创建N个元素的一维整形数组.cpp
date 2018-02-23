#include <iostream>
using namespace std;
int  main()
{
	int m,n,j=0;
	char *p,a;
	cin>>m>>n;
	p=new char[n*(m+1)];
	if(p==NULL)
    {
        return 0;
    }
	else
    {
        for(int i=0;i<n*(m+1);i++)
        {
            cin>>a;
            if(sizeof(a)-1<m&&j<n)
            {
            	p[j]=a;
            	j++;
			}
        }
    }
} 
