#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* des, const char* src, size_t num)
{
	assert(des && src);
	while (*des != '\0')
	{
		des++;
	}
	while (num)
	{
		*des++ = *src++;
		num--;
	}
	des++;
	*des = '\0';
}
int main()
{
	char str1[20] = "hello";
	char str2[] = "world";
	my_strncat(str1, str2, 3);
	printf("%s", str1);
	return 0;
}