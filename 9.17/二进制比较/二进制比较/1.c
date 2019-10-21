#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int a, int m[32])
{
	int i = 0;
	while (a > 0)
	{
		m[i++] = a % 2;
		a /= 2;
	}
}
int main()
{
	int i;
	int count = 0;
	int a = 0, b = 0;
	int m[32] = { 0 };
	int n[32] = { 0 };
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	f(a, m);
	f(b, n);
	for (i = 0; i < 32; i++)
	{
		if (m[i] != n[i])
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}