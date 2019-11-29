#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(char* str)
{
	while (*str != '-')
	{
		str++;
	}
	str++;
	int a = *str - 48;
	str++;
	int b = *str - 48;
	while (*str != '-')
	{
		str++;
	}
	str++;
	int c = *str - 48;
	str++;
	int d = *str - 48;
	return ((a * 10 + b) - 1) * 30 + (c * 10 + b);
}
int main()
{
	char* p = "2019-06-06";
	int ret = f(p);
	printf("%d", ret);
	return 0;
}