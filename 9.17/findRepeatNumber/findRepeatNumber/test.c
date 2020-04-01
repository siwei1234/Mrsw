#include<stdio.h>
#include<malloc.h>
int findRepeatNumber(int* nums, int numsSize) {
	int min = nums[0];
	int max = nums[0];
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] < min)
			min = nums[i];
		if (nums[i] > max)
			max = nums[i];
	}
	int rand = max - min + 1;
	int* count = (int*)malloc(sizeof(int)*rand);
	memset(count, 0, sizeof(int)*rand);
	for (int i = 0; i < numsSize; i++)
	{
		count[nums[i] - min]++;
	}
	int ret = -1;
	for (int i = 0; i < rand; i++)
	{
		if (count[i] > 1)
		{
			ret = i + min;
			break;
		}
	}
	free(count);
	return ret;
}
int main()
{
	int arr[] = { 2,3,1,0,2,5,3 };
	printf("%d", findRepeatNumber(arr, 7));
	return 0;
}