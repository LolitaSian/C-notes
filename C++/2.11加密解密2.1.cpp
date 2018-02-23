/*
思路扩展
如何实现程序的一次运行，可以输入多组数据内,同时实现大写和小写字母的加密呢?
*/
#include<iostream>
#include <stdio.h>
using namespace std;
#define Mc_Ascii_A        65  /*大写字母A的ascii码*/
#define Mc_Ascii_a        97  /*小写字母a的ascii码*/
int main()
{
	char chr1[100] = { 0 };
	int k,i;
	cin>>chr1;
	cin >> k;
	
	for (i = 0; i < 100; i++)
	{
		if (Mc_Ascii_a <= chr1[i] && chr1[i] <= Mc_Ascii_a + 25) /*如果是小写字母*/
		{
			chr1[i] = (chr1[i] - Mc_Ascii_a + 1 + k) % 26 + Mc_Ascii_a - 1;
			continue;
		}
		if (Mc_Ascii_A <= chr1[i] && chr1[i] <= Mc_Ascii_A + 25) /*如果是大写字母*/
			chr1[i] = (chr1[i] - Mc_Ascii_A + 1 + k) % 26 + Mc_Ascii_A - 1;
	}
	cout << chr1;
}
