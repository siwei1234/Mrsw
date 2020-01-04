int* sortedSquares(int* A, int ASize) {
	int i = 0, j = ASize - 1;
	int k = ASize - 1;
	int* b = (int*)malloc(sizeof(int)*ASize);
	while (i <= j)
	{
		if (abs(A[i]) > abs(A[j]))
		{
			b[k] = A[i] * A[i];
			k--;
			i++;
		}
		else
		{
			b[k] = A[j] * A[j];
			k--;
			j--;
		}
	}
	return b;
}
int main()
{
	int arr[] = { -5,-2,0,1,5,9 };
	sortedSquares(arr, 6);
	return 0;
}