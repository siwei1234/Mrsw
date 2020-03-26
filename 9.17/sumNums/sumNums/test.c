#include<stdio.h>
int sumNums(int n) {
	int ret = n;
	n && (ret += sumNums(n - 1));
	return ret;
}
int main()
{
	printf("%d", sumNums(10));
	return 0;
}