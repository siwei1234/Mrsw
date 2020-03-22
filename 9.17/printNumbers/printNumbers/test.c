#include<stdio.h>
#include<math.h>
#include<malloc.h>
int pows(int n, int k)
{
	int ret = 1;
	while (k)
	{
		ret *= n;
		k--;
	}
	return ret;
}
int* printNumbers(int n, int* returnSize) {
	int sum = pows(10, n) - 1;
	int* ret = (int*)malloc(sizeof(int) * sum);
	*returnSize = sum;
	for (int i = 0; i < sum; i++)
	{
		ret[i] = i + 1;
	}
	return ret;
}
int main()
{
	int returnSize;
	int* ret = printNumbers(2, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d ", ret[i]);
	}
	return 0;
}