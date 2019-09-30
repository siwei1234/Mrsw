#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int n)
{
	if (n < 3)
	{
		return n;
	}
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int a = 0, b;
	scanf("%d", &a);
	b = f(a);
	printf("%d", b);
	return 0;
}