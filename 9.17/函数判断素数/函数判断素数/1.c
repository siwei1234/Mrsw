#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("��������\n"); break;
		}
	}
	if (i == n)
	{
		printf("������\n");
	}
	return 0;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	f(a);
	return 0;
}