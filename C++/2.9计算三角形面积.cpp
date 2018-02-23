
  #include<iostream>
  #include<cmath>
 using namespace std;
 int main()
 {
 	cout<<"请输入三角形的三条边abc"<<endl; 
	double a,b,c,m,area;
	cin>>a>>b>>c;
	m=(a+b+c)/2.0;
	area=sqrt(m*(m-a)*(m-b)*(m-c));//开平方 
	cout<<"三角形的面积为"<<area<<"\n" ;
 	return 0;

  } 
/*用户输入三角形的三条边长a,b,c,利用海伦公式计算三角形的面积。
其中，a,b,c是三角形的三边，可能为实数。 */
