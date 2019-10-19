#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//  char* ret=dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//  return ret;
//}
//int main()
//{
//	char arr[20] = "********";
//	char arr1[] = "world";
//	my_strcpy(arr, arr1);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	const int* p = &a;
//	p = &b;
//	printf("%d", *p);
//	return 0;
//}
int my_strlen(const char*dest)
{
	int count = 0;
	assert(dest != NULL);
	while(*dest++) 
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}