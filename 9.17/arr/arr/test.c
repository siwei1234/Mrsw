#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void merge(int* arr1, int* arr2, int size1, int size2)
{
	int end1 = size1 - 1;
	int end2 = size2 - 1;
	int end = size1 + size2 - 1;
	while (end1 >= 0 || end2 >= 0)
	{
		if (arr1[end1] < arr2[end2])
		{
			arr1[end--] = arr2[end2--];
		}
		else
		{
			arr1[end--] = arr1[end1--];
		}
	}
	while (end2 >= 0)
	{
		arr1[end--] = arr2[end2--];
	}
}
int main()
{
	int arr1[] = { 1,2,3,0,0,0 };
	int arr2[] = { 2,5,6 };
	merge(arr1, arr2, 3, 3);
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}