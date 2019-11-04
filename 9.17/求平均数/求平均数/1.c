#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入连个数字：\n");
	scanf("%d%d", &a, &b);
	int c = (a & b) + ((a ^ b) >> 1);
	printf("%d", c);
	return 0;
}