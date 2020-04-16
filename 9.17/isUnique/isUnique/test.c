#include<stdio.h>
int isUnique(char* astr) {
	for (int i = 0; astr[i] != '\0'; i++)
	{
		for (int j = i + 1; astr[j] != '\0'; j++)
		{
			if (astr[i] == astr[j])
				return 0;
		}
	}
	return 1;
}
int main()
{
	char* s = "leetcode";
	printf("%d\n", isUnique(s));
	return 0;
}