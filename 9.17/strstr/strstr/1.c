#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* src, const char* sub)
{
	assert(sub && src);
	const char* srci = src;
	const char* subi = sub;
	while (*src != '\0')
	{
		while (*srci == *subi && *subi != '\0')
		{
			srci++;
			subi++;
		}
		if (*subi == '\0')
		{
			return src;
		}
		else
		{
			subi = sub;
			src++;
			srci = src;
		}
	}
	return NULL;
}
int main()
{
	int *a1 = "aabcd";
	int *a2 = "abc";
	if (my_strstr(a1, a2) != NULL)
	{
		printf("是子串\n");
	}
	else
	{
		printf("不是子串\n");
	}
	return 0;
}