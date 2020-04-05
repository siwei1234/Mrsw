#include<stdio.h>
int lastRemaining(int n, int m) {
	int ret;
	if (n <= 1) {
		ret = 0;
	}
	else {
		ret = (m + lastRemaining(n - 1, m)) % n;
	}
	return ret;
}
int main()
{
	printf("%d\n", lastRemaining(5, 3));
	return 0;
}