#include<stdio.h>


int missingNumber(int* nums, int numsSize) {
	int right = numsSize - 1;
	int left = 0;
	while (left < right)
	{
		int mid = (left + right) >> 1;
		if (nums[mid] == mid)
			left = mid + 1;
		else
			right = mid;
	}
	if (nums[left] == left)
		return numsSize;
	return left;
}

int main()
{
	int nums[] = { 0,1 };
	missingNumber(nums, 2);
	return 0;
}