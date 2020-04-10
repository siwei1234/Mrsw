#include<stdio.h>
#include<string.h>
#include<malloc.h>
void reverse(char* ret, int left, int right)
{
	while (left < right)
	{
		char tmp = ret[left];
		ret[left] = ret[right];
		ret[right] = tmp;
		left++;
		right--;
	}
}
char* reverseWords(char* s) {
	int len = strlen(s);
	int k = 0;
	int left = 0;
	char* ret = (char*)calloc((len+1), sizeof(char));
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
	--k;
	while (k >= 0 && ret[k] == ' ')
	{
		ret[k] = '\0';
		k--;
	}
	return ret;
}
int main()
{
	char s[] = " ";
	char* ret = reverseWords(s);
	printf("%s", ret);
	return 0;
}