#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* des, const void* src, size_t num)
{
	assert(des && src);
	char* desi = (char*)des;
	char* srci = (char*)src;
	for (size_t i = 0; i < num; i++)
	{
		*(desi + i) = *(srci + i);
	}
	return des;
}
void* my_memmove(void* des, const void* src, size_t num)
{
	assert(des && src);
	char* desi = (char*)des;
	char* srci = (char*)src;
	if (desi <= srci || desi >= (srci + num))
	{
		for (size_t i = 0; i < num; i++)
		{
			*(desi + i) = *(srci + i);
		}
	}
	else
	{
		desi = desi + num - 1;
		srci = srci + num - 1;
		for (size_t i = 0; i < num; i++)
		{
			*(desi - i) = *(srci - i);
		}
	}
	return des;
}
int main()
{
	int a1[5] = {1,2,3,4,5};
	int a2[5];
	int a3[5];
	my_memcpy(a2, a1, 5 * sizeof(int));
	my_memmove(a3, a1, 5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		printf("%d	", a2[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d	", a3[i]);
	}
	return 0;
}