#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int n)
{
	if (n > 1)
	{
		return n * f(n - 1);
	}
	return 1;
}
int fa(int n)
{
	int m = 1;
	while (n > 1)
	{
		m = m * n;
		n--;
	}
	return m;
}
int main()
{
	int n = 0;
	int a;
	printf("请输入你要求的数字：");
	scanf("%d", &n);
	a = f(n);
	printf("%d\n", a);
	a = fa(n);
	printf("%d\n", a);
	return 0;
}