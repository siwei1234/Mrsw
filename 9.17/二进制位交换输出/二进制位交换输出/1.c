#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int a = 0;
	printf("���������֣�\n");
	scanf("%d", &a);
	printf("ż��λΪ��\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((a >> i) & 1));
	}
	printf("\n����λΪ��\n");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", ((a >> i) & 1));
	}
	return 0;
}