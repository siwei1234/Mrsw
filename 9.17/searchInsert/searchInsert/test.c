#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
	int i = 0;
	int size = numsSize;
	while (size)
	{
		if (target <= nums[i])
		{
			break;
		}
		i++;
		size--;
	}
	if (size == 0)
		return numsSize;
	return i;
}
int main()
{
	int arr[] = { 1,3,5,6 };
	printf("%d",searchInsert(arr, 4, 7));
}