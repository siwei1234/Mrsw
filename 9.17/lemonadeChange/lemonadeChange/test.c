#include<stdio.h>
int lemonadeChange(int* bills, int billsSize) {
	int count5 = 0;
	int count10 = 0;
	for (int i = 0; i < billsSize; i++)
	{
		if (count5 < 0)
			break;
		switch (bills[i]) {
		case 5:count5++;
			break;
		case 10:count5--, count10++;
			break;
		case 20:count5 -= 3 - 2 * (count10 > 0);
			count10 -= (count10 > 0);
			break;
		}
	}
	return count5 >= 0;
}
int main()
{
	int arr[] = { 5,5,5,10,20 };
	printf("%d", lemonadeChange(arr, 5));
	return 0;
}