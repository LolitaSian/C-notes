/*
˼·��չ
���ʵ�ֳ����һ�����У������������������,ͬʱʵ�ִ�д��Сд��ĸ�ļ�����?
*/
#include<iostream>
#include <stdio.h>
using namespace std;
#define Mc_Ascii_A        65  /*��д��ĸA��ascii��*/
#define Mc_Ascii_a        97  /*Сд��ĸa��ascii��*/
int main()
{
	char chr1[100] = { 0 };
	int k,i;
	cin>>chr1;
	cin >> k;
	
	for (i = 0; i < 100; i++)
	{
		if (Mc_Ascii_a <= chr1[i] && chr1[i] <= Mc_Ascii_a + 25) /*�����Сд��ĸ*/
		{
			chr1[i] = (chr1[i] - Mc_Ascii_a + 1 + k) % 26 + Mc_Ascii_a - 1;
			continue;
		}
		if (Mc_Ascii_A <= chr1[i] && chr1[i] <= Mc_Ascii_A + 25) /*����Ǵ�д��ĸ*/
			chr1[i] = (chr1[i] - Mc_Ascii_A + 1 + k) % 26 + Mc_Ascii_A - 1;
	}
	cout << chr1;
}
