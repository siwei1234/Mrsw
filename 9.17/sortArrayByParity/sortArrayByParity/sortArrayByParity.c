#include<stdio.h>
#include<malloc.h>
int* sortArrayByParity(int* A, int ASize) {
	int* b = (int*)malloc(sizeof(int)*ASize);
	int left = 0;
	int right = ASize - 1;
	for (int i = 0; i < ASize; i++)
	{
		if (A[i] % 2 == 0)
		{
			b[left] = A[i];
			left++;
		}
		else
		{
			b[right] = A[i];
			right--;
		}
		if (left > right)
			break;
	}
	return b;
}
int main()
{
	int arr[] = { 3,1,2,4 };
	int* ret = sortArrayByParity(arr, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%d", ret[i]);
	}
	return 0;
}