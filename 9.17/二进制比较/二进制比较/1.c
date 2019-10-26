#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	int i;
	int n = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		{
			n++;
		}
	}
	printf("%d", n);
}