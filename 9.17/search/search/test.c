#include<stdio.h>
int search(int* nums, int numsSize, int target) {
	if (numsSize == 0)
		return -1;
	int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		int mid = (left + right) >> 1;
		if (nums[mid] > nums[right])
			left = mid + 1;
		else
			right = mid;
	}
	if (nums[0] <= target && right != 0)
	{
		left = 0;
		while (left <= right)
		{
			int mid = (left + right) >> 1;
			if (nums[mid] > target)
				right = mid - 1;
			else if (nums[mid] < target)
				left = mid + 1;
			else
				return mid;
		}
		return -1;
	}
	else
	{
		left = numsSize - 1;
		while (right <= left)
		{
			int mid = (left + right) >> 1;
			if (nums[mid] > target)
				left = mid - 1;
			else if (nums[mid] < target)
				right = mid + 1;
			else
				return mid;
		}
		return -1;
	}
}

int main()
{
	int nums[] = { 1,3 };
	search(nums, 2, 3);
	return 0;
}