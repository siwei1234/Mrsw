#include<stdio.h>
int pivotIndex(int* nums, int numsSize) {
	int ret = -1;
	int left = 0;
	int right = 0;
	for (int i = 1; i < numsSize; i++)
	{
		right += nums[i];
	}
	for (int i = 0; i < numsSize; i++)
	{
		if (left == right)
		{
			ret = i;
			break;
		}
		if (i != numsSize - 1)
		{
			left += nums[i];
			right -= nums[i + 1];
		}
	}
	return ret;
}
int main()
{
	int arr[] = {1,1,1,1,1,1};
	printf("%d", pivotIndex(arr, 6));
}