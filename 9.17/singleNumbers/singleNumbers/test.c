#include<stdio.h>
#include<malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize) {
	int tmp = 0;
	for (int i = 0; i < numsSize; i++)
	{
		tmp ^= nums[i];
	}
	tmp = tmp & (-1 * tmp);
	int* ret = (int*)calloc(2, sizeof(int));
	*returnSize = 2;
	for (int i = 0; i < numsSize; i++)
	{
		if ((nums[i] & tmp) == 0)
		{
			ret[0] ^= nums[i];
		}
		else
		{
			ret[1] ^= nums[i];
		}
	}
	return ret;
}
int main()
{
	int nums[10] = { 1,1,2,2,3,3,4,4,5,6 };
	int size;
	int* ret = singleNumbers(nums, 10, &size);
	for (int i = 0; i < size; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}