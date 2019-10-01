#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[5] = { 1,22,34,56,91 };
	int n = 0, b, c;
	scanf("%d", &n);
	b = a[n] / 10;
	c = a[n] % 10;
	if (a[n] < 10)
	{
		printf("one %d", c);
	}
	else if (b == c)
	{
		printf("tow %d\n", c);
	}
	else
	{
		printf("one %d one %d", b, c);
	}
	return 0;
}