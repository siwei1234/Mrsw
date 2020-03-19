#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
	if (numsSize == 0)
	{
		*returnSize = 0;
		return NULL;
	}
	int* ret = (int*)malloc(sizeof(int) * (numsSize - k + 1));
	*returnSize = numsSize - k + 1;
	for (int i = 0; i <= numsSize - k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (j == 0)
				ret[i] = nums[i];
			else
			{
				if (ret[i] < nums[i + j])
				{
					ret[i] = nums[i + j];
				}
			}
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,3,-1,-3,5,3,6,7 };
	int returnSize;
	int* ret = maxSlidingWindow(arr, 8, 3, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d ", ret[i]);
	}
	return 0;
}