#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target) {
	static int ret[2] = { 0 };
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				ret[0] = i;
				ret[1] = j;
				return ret;
			}
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 2,7,5,6 };
	int* ret = twoSum(arr, 4, 9);
	printf("%d,%d", ret[0], ret[1]);
	return 0;
}