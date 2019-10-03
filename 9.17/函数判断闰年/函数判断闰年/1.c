#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}
int main()
{
	int n;
	printf("请输入年份：\n");
	scanf("%d", &n);
	f(n);
	return 0;
}