#include<stdio.h>
int findUnsortedSubarray(int* nums, int numsSize) {
	int flag = 0;
	int left = 0;
	int right = 0;
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] > nums[j])
			{
				left = i;
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	flag = 0;
	for (int i = numsSize - 1; i > 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (nums[i] < nums[j])
			{
				right = i;
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	if (left == right)
		return 0;
	return right - left + 1;
}
int main()
{
	int arr[] = { 2,3,1,4,5 };
	printf("%d", findUnsortedSubarray(arr, 5));
	return 0;
}