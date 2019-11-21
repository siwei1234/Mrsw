#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* des, const char* src, size_t num)
{
	assert(des && src);
	int i = strlen(src);
	int m = (int)num - i;
	while (num != 0)
	{
		if (m < num || m < 0)
		{
			*des = *src;
			des++;
			src++;
			num--;
		}
		else
		{
			*des = '0';
			des++;
			num--;
		}
	}
	*des = '\0';
	return des;
}
int main()
{
	char a[10] = "abcd";
	char b[] = "efgh";
	my_strncpy(a, b, 3);
	printf("%s", a);
	return 0;
}