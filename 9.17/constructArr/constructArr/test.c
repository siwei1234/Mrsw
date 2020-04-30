#include<stdio.h>
#include<malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructArr(int* a, int aSize, int* returnSize) {
	if (a == NULL || aSize <= 1)
	{
		*returnSize = 0;
		return a;
	}
	int* ret = (int*)malloc(sizeof(int)*aSize);
	*returnSize = aSize;
	ret[0] = 1;
	for (int i = 1; i < aSize; i++)
	{
		ret[i] = ret[i - 1] * a[i - 1];
	}
	int tmp = 1;
	for (int i = aSize - 2; i >= 0; i--)
	{
		tmp *= a[i + 1];
		ret[i] *= tmp;
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int size;
	int* ret = constructArr(arr, 5, &size);
	for (int i = 0; i < size; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}
