#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void resver(char* arr, int left, int right)
{
	while (left < right)
	{
		char tmp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = tmp;
		left++;
		right--;
	}
}
void f(char* arr, int key, int sz)
{
	key = key % 5;
	resver(arr, key, sz - 1);
	resver(arr, 0, key - 1);
	resver(arr, 0, sz - 1);
}
int main()
{
	int a = 0;
	char arr[] = "ABBCD";
	printf("输入转置的次数：\n");
	scanf("%d", &a);
	f(arr, a, 5);
	printf("%s\n", arr);
	return 0;
}