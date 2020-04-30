#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize) {
	int* ret = (int*)malloc(sizeof(int)*k);
	*returnSize = k;
	for (int i = 0; i < k; i++)
	{
		int min = i;
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		swap(&arr[i], &arr[min]);
		ret[i] = arr[i];
	}
	return ret;
}

int main()
{
	int size;
	int* arr[] = { 5,7,8,9 };
	int* ret = getLeastNumbers(arr, 4, 2, &size);
	for (int i = 0; i < size; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}
