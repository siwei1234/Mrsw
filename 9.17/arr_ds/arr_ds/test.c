#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(int* arr, size_t arrsize, size_t num)
{
	size_t des = 0;
	size_t src = 0;
	while (src < arrsize)
	{
		if (arr[src] != num)
		{
			arr[des++] = arr[src++];
		}
		else
		{
			src++;
		}
	}
	return des;
}
int main()
{
	int a[] = { 0,1,2,5,4,2,6 };
	int ret = f(a, 7, 2);
	printf("%d", ret);
	return 0;
}