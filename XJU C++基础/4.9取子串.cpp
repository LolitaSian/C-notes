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
	char str[101],a[101];
	int length;
	int q,c;//q��ʼ�ַ���c����
	int i,j;
	cout<<"�������ַ���"<<endl;
	cin.getline(str,101) ;
	length=0; 
	while(str[length]!=0)
	{
		length++;
	 } //����ַ�������
	cout<<"�ַ�������Ϊ��"<<length<<endl;
	cout<<"���������ַ�����ʼλ�ö��"<<endl;
	cin>>q>>c;
	
	while(q!=0&&c!=0)
	{
		j=0;//��ȡ���Ӵ���a[0]��ʼ
		for(i=q-1;i<=q-1+c&&i<length;i++) //i��q��ʼ��Ҳ����str[q-1] 
		{
			a[j]=str[i];
			j++;
		}
		a[j]='\0';//���Ӵ���β���ý�����־ 
		cout<<a<<endl;
		
		//������һ��ѭ�� 
		cout<<"���������ַ�����ʼλ�ö��"<<endl;
		cin>>q>>c;	
	 } 

	return 0; 
 } 

