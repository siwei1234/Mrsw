#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exchange(int* nums, int numsSize, int* returnSize) {
	int* ret = (int*)malloc(sizeof(int)*numsSize);
	*returnSize = numsSize;
	int begin = 0;
	int end = numsSize - 1;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] % 2 == 1)
		{
			ret[begin++] = nums[i];
		}
		else
		{
			ret[end--] = nums[i];
		}
	}
	return ret;
}
int main()
{
	int returnSize;
	int nums[] = { 1,2,3,4,5,6 };
	int* ret = exchange(nums, 6, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}