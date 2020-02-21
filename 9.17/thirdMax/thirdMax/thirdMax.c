#include<stdio.h>
int thirdMax(int* nums, int numsSize) {
	int max = nums[0];
	int min = nums[0];
	int count = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (max < nums[i])
			max = nums[i];
		if (min > nums[i])
			min = nums[i];
	}
	int max2 = min;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] > max2 && nums[i] < max)
			max2 = nums[i];
	}
	if (max2 != max)
		count++;
	int max3 = min;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] > max3 && nums[i] < max2)
			max3 = nums[i];
	}
	if (max3 != max2)
		count++;
	if (count == 2)
		return max3;
	return max;
}
int main()
{
	int arr[] = { 1,2,2,2,3 };
	printf("%d", thirdMax(arr, 5));
}