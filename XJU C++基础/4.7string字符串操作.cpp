 /*
������������:
Heavy rains are pushing water levels beyond the limit.
Sluice gates at Three Gorges Dam opened to discharge water.
��ʼ���������ű�ʾ���뽫���Ǻϲ�Ϊһ�����֣�Ȼ��������еġ�Heavy���滻Ϊ��Strong���������ʾ��������ı���
 */
 #include <iostream>  
 #include <string>//������string���͵�ͷ�ļ�
  
using namespace std;  
int main()  
{
	string text1="Heavy rains are pushing water levels beyond the limit.";
	string text2="Sluice gates at Three Gorges Dam opened to discharge water.";
	string text3;
	text3=text1+text2;
	int k;
	k=text3.find("Heavy");//����heavy���ҵ�֮�󷵻�H���ڵ�λ�ã�����λ�ø�ֵk 
	text3.erase(k,sizeof"Heavy"-1);//ɾ����kλ�ÿ�ʼɾ����Heavy��-1���ַ������ȣ���Ϊ������\0 
	text3.insert(k,"Strong");//k���� Strong���� 
	cout<<text3<<endl;
	return 0 ;
	
 } 
/*
1. ��ȡ�Ӵ�
       s.substr(pos, n)    ��ȡs�д�pos��ʼ������0����n���ַ����Ӵ���������
       s.substr(pos)        ��ȡs�дӴ�pos��ʼ������0����ĩβ�������ַ����Ӵ���������

2. �滻�Ӵ�
       s.replace(pos, n, s1)    ��s1�滻s�д�pos��ʼ������0����n���ַ����Ӵ�

3. �����Ӵ�
       s.find(s1)         ����s�е�һ�γ���s1��λ�ã������أ�����0��
       s.rfind(s1)        ����s�����γ���s1��λ�ã������أ�����0��
       s.find_first_of(s1)       ������s1������һ���ַ���s�е�һ�γ��ֵ�λ�ã������أ�����0��
       s.find_last_of(s1)       ������s1������һ���ַ���s�����һ�γ��ֵ�λ�ã������أ�����0��
       s.fin_first_not_of(s1)         ����s�е�һ��������s1�е��ַ���λ�ã������أ�����0��
       s.fin_last_not_of(s1)         ����s�����һ��������s1�е��ַ���λ�ã������أ�����0��
*/
