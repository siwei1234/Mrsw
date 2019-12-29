#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
	int n = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != 0)
		{
			nums[n] = nums[i];
			n++;
		}
	}
	for (int i = n; i < numsSize; i++)
	{
		nums[i] = 0;
	}
}
int main()
{
	int arr[10] = { 0,2,2,0,4,8,9,6,3,20};
	moveZeroes(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}