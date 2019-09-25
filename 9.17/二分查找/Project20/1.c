#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0, right = sizeof(a) / sizeof(a[0]) - 1, mid, i;
	printf("请输入你要查询的数：\n");
	scanf("%d", &i);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] < i)
		{
			left = mid + 1;
		}
		else if (a[mid] > i)
		{
			right = mid - 1;
		}
		else if (a[mid] == i)
		{
			printf("%d", mid); break;
		}
	}
	if(left>right)
	{
		printf("很遗憾，没找到。");
	}
	return 0;
}