#include<stdio.h>
char firstUniqChar(char* s) {
	int word[26] = { 0 };
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		word[s[i] - 'a']++;
	}
	for (int i = 0; i < len; i++)
	{
		if (word[s[i] - 'a'] == 1)
		{
			return s[i];
		}
	}
	return ' ';
}

int main()
{
	char* s = "leetcode";
	firstUniqChar(s);
	return 0;
}