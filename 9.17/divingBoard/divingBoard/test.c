#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* divingBoard(int shorter, int longer, int k, int* returnSize) {
	if (k == 0)
	{
		*returnSize = 0;
		return;
	}
	int* ret = (int*)malloc(sizeof(int)*(k + 1));
	if (shorter == longer)
	{
		*returnSize = 1;
		ret[0] = shorter * k;
		return ret;
	}
	*returnSize = k + 1;
	int tmp = longer - shorter;
	for (int i = 0; i <= k; i++)
	{
		ret[i] = shorter * k + tmp * i;
	}
	return ret;
}

int main()
{
	int returnSize;
	int* ret = divingBoard(5, 6, 10, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}