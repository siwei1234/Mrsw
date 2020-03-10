#include<stdio.h>
#include<string.h>
#include<malloc.h>
void reverse(char* s, int left, int right)
{
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}
char* reverseWords(char* s) {
	int len = strlen(s);
	int k = 0;
	int left = 0;
	char* ret = (char*)malloc(len);
	for (int i = len - 1; i >= 0; i--)
	{
		while (i >= 0)
		{
			while (s[i] == ' ' && i >= 0)
			{
				s[i] = '\0';
				i--;
			}
			while (s[i] != ' ' && i >= 0)
			{
				ret[k] = s[i];
				k++;
				i--;
			}
			reverse(ret, left, k - 1);
			ret[k++] = ' ';
			left = k;
		}
	}
	ret[--k] = '\0';
	return ret;
}
int main()
{
	char s[] = "  the sky  is blue!  ";
	char* ret = reverseWords(s);
	printf("%s", ret);
	return 0;
}