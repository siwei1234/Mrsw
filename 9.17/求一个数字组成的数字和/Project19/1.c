#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int  i, a = 0, a1, a2, a3, a4;
	int sn = 0;
	scanf("%d", &a);
	a1 = a * 10 + a;
	a2 = a * 100 + a1;
	a3 = a * 1000 + a2;
	a4 = a * 10000 + a3;
	sn = a + a1 + a2 + a3 + a4;
	printf("%d\n", sn);
	return 0;
}