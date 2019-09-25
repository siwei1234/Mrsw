#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, a[10];
	int *p=a;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
		scanf("%d", p++);
	p = a;
	for (i = 0; i < 10; i++,p++)
		printf("%d\t", *p);
	system("pause");
	return 0;
}