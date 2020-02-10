#include<stdio.h>
#include<malloc.h>
int* plusOne(int* digits, int digitsSize) {
	int i = digitsSize - 1;
	while (i >= 0)
	{
		if (digits[i] < 9)
		{
			digits[i] += 1;
			return digits;
		}
		else
		{
			digits[i] = 0;
			i--;
		}
	}
	int* ret = (int*)malloc(sizeof(int)*(digitsSize + 1));
	ret[0] = 1;
	for (int i = 1; i < digitsSize + 1; i++)
	{
		ret[i] = 0;
	}
	return ret;
}
int main()
{
	int arr[] = { 9,9,9 };
	int* ret = plusOne(arr, 3);
	for (int i = 0; i < 4; i++)
	{
		printf("%d", ret[i]);
	}
	return 0;
}