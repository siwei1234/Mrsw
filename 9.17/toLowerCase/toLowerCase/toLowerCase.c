#include<stdio.h>
char * toLowerCase(char * str) {
	int count = 0;
	while (*str != NULL)
	{
		str++;
		count++;
	}
	str = str - count;
	while (*str != NULL)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return str - count;
}
int main()
{
	char str[] = "Hello";
	char* s = toLowerCase(str);
	printf("%s", s);
}