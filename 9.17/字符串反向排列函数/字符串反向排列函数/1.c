#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char reverse_string(char* string)
{
	if (*string != '\0')
	{
		reverse_string(string+1);
	}
	printf("%c", *string);
}
int main()
{
	char a[] = "hello";
	reverse_string(a);
	return 0;
}