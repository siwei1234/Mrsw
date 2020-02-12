#include<stdio.h>
int myAtoi(char * str) {
	long long count = 0;
	int flag = 1;
	while (*str == ' ')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		count = count * 10 + (*str - '0');
		str++;
	}
	if (count > 2147483647)
		return flag * 2147483648;
	return count * flag;
}
int main()
{
	char* s = "+-2";
	printf("%d", myAtoi(s));
	return 0;
}