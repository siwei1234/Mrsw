#include<stdio.h>
int maximumProduct(int* nums, int numsSize) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[j] < nums[i])
			{
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < numsSize - 1; j++)
		{
			if (nums[j] > nums[numsSize - i - 1])
			{
				int tmp = nums[numsSize - i - 1];
				nums[numsSize - i - 1] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	int ret = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];
	int sum;
	if (nums[0] < 0 && nums[1] < 0)
	{
		sum = nums[0] * nums[1] * nums[numsSize - 1];
		if (sum > ret)
			ret = sum;
	}
	return ret;
}
int main()
{
	int arr[] = { 1,5,8,6,2,86 };
	printf("%d", maximumProduct(arr, 6));
	return 0;
}