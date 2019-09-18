#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	int c;
	c = a;
	a = b;
	b = c;
	printf("%d,%d",a, b);
	getchar();
	return 0;
}