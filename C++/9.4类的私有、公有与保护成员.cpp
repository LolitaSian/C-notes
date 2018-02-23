#include<iostream>
using namespace std;
class Fraction
{
	protected:
		int a;//分子
	//private:私有的成员在别的地方不允许调用 
	    int b;//分母
	    int divisor(int p,int q);//求最大公约数 
	public:
	    void set(int aa,int bb);//设置分子分母 
		void show();//显示分数 
		Fraction add(Fraction u);//一个分数加另一个分数
 
};
//设置分子、分母 
void Fraction:: set(int aa,int bb) 
{ 
    a=aa; 
	if (bb!=0) //分母有效性检验 
	    b=bb; 
	else //分母无效时显示0 
	{ 
	    a=0; 
		b=1; 
	} 
} 
//显示分数 
void Fraction::show() 
{ 
    cout<<a<<"/"<<b; 
}
//分数相加 
Fraction Fraction::add(Fraction u) 
{ 
    int tmp;
	Fraction v;
	v.a=a*u.b+b*u.a;   //分子 
	v.b=b*u.b;//分母 
	tmp=divisor(v.a ,v.b);//计算分子、分母的公约数 
	v.a=v.a/tmp;//约去公约数 
	v.b=v.b/tmp;//约去公约数 
	return v; //返回结果
}
class Real:public Fraction //定义一个新的类 ，在新的实数类中引用分数类的私有成员b，不允许  
{ 
    public: void show_real() 
	{ 
	    cout<<a<<'/'<<b<<'='<<a/(double)b<<endl; 
	} 
};

int main()
{
    int a,b,c,d;
    cout<<"请输入两个分数的分子分母"<<endl;
    cin>>a>>b>>c>>d;
     
     
    return 0; 
} 
