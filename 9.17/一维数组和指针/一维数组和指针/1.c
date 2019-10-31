#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str1[] = "hello";
	char str2[] = "hello";
	char *str3 = "hello";
	char *str4 = "hello";
	if (str1 == str2)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	if (str3 == str4)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}