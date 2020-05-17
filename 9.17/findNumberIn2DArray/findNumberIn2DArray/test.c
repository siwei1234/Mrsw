#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int findNumberIn2DArray(int matrix[][5], int matrixSize, int* matrixColSize, int target) {
	if (matrixSize == 0 || (*matrixColSize) == 0)
		return 0;
	int i = 0;
	int j = *matrixColSize - 1;
	while (i < matrixSize && j >= 0)
	{
		if (matrix[i][j] == target)
			return 1;
		if (matrix[i][j] < target)
			i++;
		else
			j--;
	}
	return 0;
}

int main()
{
	int ret[][5] = { {1, 4, 7, 11, 15},{2, 5, 8, 12, 19},{3, 6, 9, 16, 22 },{10, 13, 14, 17, 24 },{18, 21, 23, 26, 30 } };
	int size = 5;
	printf("%d\n", findNumberIn2DArray(ret, 5, &size, 5));
	return 0;
}
