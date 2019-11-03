#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入连个数字：\n");
	scanf("%d%d", &a, &b);
	int c = a >= b ? a : b;
	int d = a <= b ? a : b;
	double e = (c - d) / 2.0 + d;
	printf("%lf", e);
	return 0;
}