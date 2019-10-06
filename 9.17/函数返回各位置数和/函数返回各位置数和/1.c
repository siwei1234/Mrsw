#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int digitsum(int n)
{
	int b = 0;
	if (n > 9)
	{
		b = n % 10 + digitsum(n / 10);
	}
	else
	{
		b = n % 10;
	}
	return b;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	a = digitsum(a);
	printf("%d", a);
	return 0;
}