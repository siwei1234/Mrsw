#include<stdio.h>
int minArray(int* numbers, int numbersSize) {
	int left = 0;
	int right = numbersSize - 1;
	while (left < right)
	{
		int mid = (left + right) >> 1;
		if (numbers[right] > numbers[mid])
			right = mid;
		else if (numbers[right] < numbers[mid])
			left = mid + 1;
		else
			right--;
	}
	return numbers[right];
}

int main()
{
	int arr[] = { 5,6,7,1,2,3 };
	printf("%d\n", minArray(arr, 6));
	return 0;
}