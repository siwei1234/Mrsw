#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[2][3] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++) 
	{
		printf("&arr1[%d]=%p\n", i, &arr1[i]);
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("&arr2[%d][%d]=%p\n", i, j, &arr2[i][j]);
		}
	}
	return 0;
}