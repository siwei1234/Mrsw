#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("�������������֣�\n");
	scanf("%d%d", &a, &b);
	int c = (a & b) + ((a ^ b) >> 1);
	printf("%d", c);
	return 0;
}