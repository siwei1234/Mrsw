#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int d = 0;
	while (a < n)
	{
		c = b;
		b = a;
		a = b + c;
	}
	d = a - c;
	if ((n - d) > (a - n))
	{
		return a - n;
	}
	else
		return n - d;
}
int main()
{
	int n = 0;
	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf("%d", &n);
	int a = f(n);
	printf("%d", a);
	return 0;
}