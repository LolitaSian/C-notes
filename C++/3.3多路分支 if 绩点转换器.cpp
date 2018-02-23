 #include<iostream>
 using namespace std;
 int main()
 {
 	int c,j;
 	cin>>c;//ÊäÈë³É¼¨ 
 	if(c>=90&&c<=100)
	 	j=5;
 	if(c>=80&&c<90)
	 	j=4;
 	if(c>=70&&c<80)
	 j=3;
 	if(c>=60&&c<70)
 	 	j=2;
 	if(c<60)
 		j=1;

 	cout<<j<<endl;
 	
 	return 0;

  } 
