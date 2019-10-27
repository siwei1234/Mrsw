#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(char* s)
{
	char tmp;
	int m = 0;
	int left = 0;
	int right = strlen(s) - 1;
	while (left < right)
	{
		tmp = *(s + left);
		*(s + left) = *(s + right);
		*(s + right) = tmp;
		left++;
		right--;
	}
	while (*(s + right) != '\0') 
	{
		right = m;
		left = m;
		while ((*(s + right) != ' ') && (*(s + right) != '\0')) 
		{
			right++;
		}
		m = right + 1;
		right--;
		while (left < right)
		{
			tmp = *(s + left);
			*(s + left) = *(s + right);
			*(s + right) = tmp;
			left++;
			right--;
		}
		right = m - 1;
	}
}
int main()
{
	char ch[50] = { 0 };
	if (gets(ch) != EOF)
	{
		f(ch);
		puts(ch);
	}
	return 0;
}