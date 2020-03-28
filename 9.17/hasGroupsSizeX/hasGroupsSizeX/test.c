#include<stdio.h>
#include<malloc.h>
int gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int hasGroupsSizeX(int* deck, int deckSize) {
	if (deckSize <= 1)
		return 0;
	int a[10000] = { 0 };
	int min = deck[0];
	int max = deck[0];
	for (int i = 0; i < deckSize; i++)
	{
		a[deck[i]]++;
		if (deck[i] > max)
			max = deck[i];
		if (deck[i] < min)
			min = deck[i];
	}
	int j = 0;
	for (int i = min; i <= max; i++)
	{
		if (a[i] != 0 && a[i] < 2)
			return 0;
		if (a[i] != 0)
		{
			a[j++] = a[i];
		}
	}

	for (int i = 0; i < j - 1; i++)
	{
		if (gcd(a[i], a[i + 1]) == 1)
			return 0;
	}
	return 1;
}
int main()
{
	int arr[] = { 1,1,1,2,2,2,3,3, };
	int ret = hasGroupsSizeX(arr, 8);
	printf("%d\n", ret);
	return 0;
}