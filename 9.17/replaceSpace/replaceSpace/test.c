#include<stdio.h>
#include<malloc.h>
#include<string.h>
char* replaceSpace(char* s) {
	int count = 0;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ')
			count++;
	}
	int index = len + count * 2 + 1;
	char* ret = (char*)malloc(index);
	index = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] != ' ')
		{
			ret[index++] = s[i];
		}
		else
		{
			ret[index++] = '%';
			ret[index++] = '2';
			ret[index++] = '0';
		}
	}
	ret[index] = '\0';
	return ret;
}
int main()
{
	char s[] = "We are happy.";
	char* ret = replaceSpace(s);
	printf("%s", ret);
	return 0;
}