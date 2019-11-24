#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strncpy(const char* des, const char* src, size_t num)
{
	assert(des && src);
	while(num)
	{
		if (*des > *src)
		{
			return 1;
		}
		else if (*des < *src)
		{
			return -1;
		}
		des++;
		src++;     
		num--;
	}
	return 0;
}
int main()
{
	char a[11] = "helloworld";
	char b[6] = "hello";
	printf("%d", my_strncpy(a, b, 8));
	return 0;
}