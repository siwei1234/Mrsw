#include<stdio.h>
#include<malloc.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findContinuousSequence(int target, int* returnSize, int** returnColumnSizes) {
	int** ret = (int**)malloc(sizeof(int*)*target);
	int* count = (int*)malloc(sizeof(int)*target);
	int i = 1;
	int index = 0;
	int t = target;
	while (t > 0)
	{
		t -= i++;
	}
	while (t < target && i >2)
	{
		t += --i;
		if (t % i == 0)
		{
			ret[index] = (int*)malloc(sizeof(int)*i);
			for (int j = 0; j < i; j++)
			{
				ret[index][j] = t / i + j;
			}
			count[index++] = i;
		}
	}
	*returnSize = index;
	*returnColumnSizes = count;
	return ret;
}
int main()
{
	int returnSize;
	int* returnColumnSizes;
	int** ret = findContinuousSequence(9, &returnSize, &returnColumnSizes);
	for (int i = 0; i < returnSize; i++)
	{
		for (int j = 0; j < returnColumnSizes[i]; j++)
		{
			printf("%d	", ret[i][j]);
		}
		printf("\n");
	}
	return 0;
}