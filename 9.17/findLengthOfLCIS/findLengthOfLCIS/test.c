#include<stdio.h>
int findLengthOfLCIS(int* nums, int numsSize) {
	if (numsSize == 0)
		return 0;
	int count = 1;
	int ret = 1;
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] > nums[i - 1])
		{
			count++;
			if (count > ret)
				ret = count;
		}
		else
		{
			count = 1;
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 0,1,2,5,4,2,3 };
	printf("%d", findLengthOfLCIS(arr, 7));
	return 0;
}