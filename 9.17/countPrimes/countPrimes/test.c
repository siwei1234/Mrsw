#include<stdio.h>
#include<malloc.h>
int countPrimes(int n) 
{
	int i, j, count = 0;
	int *isPrime = (int*)calloc(n, sizeof(int));
	for (i = 2; i < n; ++i)
	{
		if (!isPrime[i])
		{
			++count;
			for (j = 2; i * j < n; ++j)
				isPrime[i * j] = 1;
		}
	}
	return count;
}
int main()
{
	printf("%d", countPrimes(1500000));
	return 0;
}