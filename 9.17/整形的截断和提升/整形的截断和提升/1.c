#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d\n", a, b, c);
	char e = -128;
	printf("%u\n", e);
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}