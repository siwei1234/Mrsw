#include<stdio.h>
#include<malloc.h>
#include<string.h>
char * addStrings(char * num1, char * num2) {
	char* ret = (char*)malloc(5101);
	int i = strlen(num1) - 1;
	int j = strlen(num2) - 1;
	int carry = 0, k = 0;
	while (i >= 0 || j >= 0 || carry != 0)
	{
		if (i >= 0)
			carry += num1[i--] - '0';
		if (j >= 0)
			carry += num2[j--] - '0';
		ret[k++] = carry % 10 + '0';
		carry /= 10;
	}
	ret[k] = '\0';
	i = 0, j = k - 1;
	while (i < j)
	{
		char tmp = ret[i];
		ret[i] = ret[j];
		ret[j] = tmp;
		i++, j--;
	}
	return ret;
}
int main()
{
	char* s1 = "954213";
	char* s2 = "889965";
	char* ret = addStrings(s1, s2);
	printf("%s", ret);
	return 0;
}