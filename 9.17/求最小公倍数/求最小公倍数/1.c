#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	int c, d;
	c = a >= b ? a : b;
	d = a <= b ? a : b;
	int n = c;
	while (1)
	{
		if (n%d == 0 && n%c == 0)
		{
			printf("%d", n); 
			break;
		}
		n++;
	}
	return 0;
}