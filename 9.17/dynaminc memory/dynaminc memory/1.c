#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	printf("请输入所开辟空间的大小：\n");
//	scanf("%d", &n);
//	int *p = (int*)malloc(n * sizeof(int));
//	if (NULL != *p)
//	{
//		printf("开辟成功\n");
//	}
//	free(p);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入所开辟空间的大小：\n");
//	scanf("%d", &n);
//	int *p = (int*)calloc(n, sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	return 0;
//}
int main()
{
	int n = 0;
	printf("请输入所开辟空间的大小：\n");
	scanf("%d", &n);
	int *p = (int*)malloc(n * sizeof(int));
	if (NULL != *p)
	{
		printf("开辟成功\n");
	}
	printf("请输入新的大小：\n");
	scanf("%d", &n);
	p = (int*)realloc(p, n * sizeof(int));
	if (NULL != *p)
	{
		printf("开辟成功\n");
	}
	free(p);
	return 0;
}