#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int a = 0;
	printf("请输入数字：\n");
	scanf("%d", &a);
	printf("偶数位为：\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((a >> i) & 1));
	}
	printf("\n奇数位为：\n");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", ((a >> i) & 1));
	}
	return 0;
}