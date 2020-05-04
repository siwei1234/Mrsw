#include<stdio.h>
#include<malloc.h>
int sum = 0;
void mergesort(int* nums, int* ret, int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) >> 1;
	mergesort(nums, ret, begin, mid);
	mergesort(nums, ret, mid + 1, end);
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;
	while (begin1 <= mid)
	{
		while (begin2 <= end)
		{
			if (nums[begin1] > nums[begin2])
			{
				begin2++;
			}
			else
				break;
		}
		sum += begin2 - mid - 1;
		begin1++;
	}
	begin1 = begin;
	begin2 = mid + 1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (nums[begin1] <= nums[begin2])
		{
			ret[index++] = nums[begin1++];
		}
		else
		{
			ret[index++] = nums[begin2++];
		}
	}
	if (begin1 <= end1)
	{
		while (begin1 <= end1)
			ret[index++] = nums[begin1++];
	}
	else
	{
		while (begin2 <= end2)
			ret[index++] = nums[begin2++];
	}
	memcpy(nums + begin, ret + begin, sizeof(int)*(end - begin + 1));
}
int reversePairs(int* nums, int numsSize) {
	sum = 0;
	int* ret = (int*)malloc(sizeof(int)*numsSize);
	mergesort(nums, ret, 0, numsSize - 1);
	return sum;
}

int main()
{
	int* nums[] = { 4,5,6,7 };
	reversePairs(nums, 4);
	printf("%d\n", sum);
	return 0;
}