#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[100] = { 0 };
	int num;
	printf("�����������ĸ�����\n");
	scanf("%d", &num);
	printf("���������֣�\n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	int ret = a[0];
	for (int i = 1; i < num; i++)
	{
		ret ^= a[i];
	}
	printf("%d", ret);
	return 0;
}