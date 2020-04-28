#include<stdio.h>
int maxSubArray(int* nums, int numsSize) {
	int ret = nums[0];
	int sum = nums[0];
	for (int i = 1; i < numsSize; i++)
	{
		sum += nums[i];
		if (sum < nums[i])
			sum = nums[i];
		if (sum > ret)
			ret = sum;
	}
	return ret;
}
int main()
{
	int nums[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	printf("%d\n", maxSubArray(nums, sizeof(nums) / sizeof(int)));
	return 0;
}