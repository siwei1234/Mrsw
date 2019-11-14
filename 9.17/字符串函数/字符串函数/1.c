#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t my_strlen(const char* s)
//{
//	assert(s != NULL);
//	int ret = 0;
//	while (*s)
//	{
//		ret++;
//		s++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "abcde";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des && src);
//	while (*des++ = *src++);
//}
//int main()
//{
//	char a[6] = "hello";
//	char b[6] = "world";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}
//char* my_strcat(char* des, const char* src)
//{
//	assert(des && src);
//	while (*des != '\0')
//	{
//		des++;
//	}
//	while (*des++ = *src++);
//}
//int main()
//{
//	char a[11] = "hello";
//	char b[6] = "world";
//	my_strcat(a, b);
//	printf("%s", a);
//	return 0;
//}
int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
	}
	return 0;
}
int main()
{
	char a[] = "abcd";
	char b[] = "abcd";
	int ret = my_strcmp(a, b);
	printf("%d", ret);
	return 0;
}