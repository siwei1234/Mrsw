#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int arr[][3], int key, int* x, int* y, int curx, int cury) 
{
	if (curx < 0 && cury > 2) 
	{
		return -1;
	}
	if (arr[curx][cury] == key)
	{
		*x = curx;
		*y = cury;
	}
	else if (arr[curx][cury] < key)
	{
		f(arr, key, x, y, curx, cury + 1);
	}
	else
	{
		f(arr, key, x, y, curx - 1, cury);
	}
}
int main()
{
	int x = -1, y = -1;
	int a = 0;
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	printf("请输入你要查询的数字：\n");
	scanf("%d", &a);
	f(arr, a, &x, &y, 2, 0);
	printf("%d	%d", x, y);
	return 0;
}