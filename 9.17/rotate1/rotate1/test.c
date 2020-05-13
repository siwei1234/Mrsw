#include<stdio.h>
void rotate(int matrix[][3], int matrixSize) {
	int n = matrixSize - 1;
	int i = n;
	int j = 0;
	while (j <= i)
	{
		for (int k = j; k < i; k++)
		{
			int tmp = matrix[j][k];
			matrix[j][k] = matrix[n - k][j];
			matrix[n - k][j] = matrix[n - j][n - k];
			matrix[n - j][n - k] = matrix[k][n - j];
			matrix[k][n - j] = tmp;
		}
		j++;
		i--;
	}
}
int main()
{
	int ret[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };
	rotate(ret, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d	", ret[i][j]);
		}
		printf("\n");
	}
	return 0;
}