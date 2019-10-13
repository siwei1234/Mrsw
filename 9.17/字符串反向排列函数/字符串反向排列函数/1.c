#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char reverse_string(char* string)
{
	char tmp;
	tmp = *string;
	int sz = strlen(string) - 1;
	*string = *(string + sz);
	*(string + sz) = '\0';
	if (strlen(string) > 1)
	{
		reverse_string(string + 1);
	}
	*(string + sz) = tmp;
}
int main()
{
	char a[] = "hello";
	reverse_string(a);
	printf("%s", a);
	return 0;
}