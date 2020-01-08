#include<stdio.h>
//void rotate(int* nums, int numsSize, int k) {
//	k = k % numsSize;
//	while (k)
//	{
//		int tmp = nums[numsSize - 1];
//		for (int i = numsSize - 1; i > 0; i--)
//		{
//			nums[i] = nums[i - 1];
//		}
//		nums[0] = tmp;
//		k--;
//	}
//}
void reverse(int* nums, int left, int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}
void rotate(int* nums, int numsSize, int k) {
	k %= numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	rotate(arr, 7, 3);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}