#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int a)
{
	int n = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			n++;
		}
		a = a / 2;
	}
	return n;
}
int main()
{
	int a = 0;
	int b;
	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf("%d", &a);
	b = f(a);
	printf("%d", b);
	return 0;
}