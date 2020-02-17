#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target) {
	int* ret = (int*)malloc(8);
	ret[0] = -1;
	ret[1] = -1;
	if (numsSize == 0)
		return ret;
	int left = 0;
	int right = numsSize - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (nums[mid] == target)
		{
			int index = mid;
			while (index > 0 && nums[index] == nums[index - 1])
				index--;
			ret[0] = index;
			index = mid;
			while (index < numsSize - 1 && nums[index] == nums[index + 1])
				index++;
			ret[1] = index;
			break;
		}
		if (nums[mid] > target)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return ret;
}
int main()
{
	int arr[] = {1};
	int* ret = searchRange(arr, 1, 1);
	printf("%d,%d", ret[0], ret[1]);
	return 0;
}