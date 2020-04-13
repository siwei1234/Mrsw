#include<stdio.h>
#include<stdlib.h>
int CheckPermutation(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2 || len1 == 0)
		return 0;
	int falg = 0;
	for (int i = 0; i < len1; i++)
	{
		falg = 0;
		for (int j = 0; j < len2; j++)
		{
			if (s1[i] == s2[j])
			{
				falg = 1;
				s2[j] = ' ';
				break;
			}
		}
		if (falg == 0)
			return 0;
	}
	return 1;
}

int main()
{
	char* s1 = "hello";
	char s2[6] = "ohell";
	printf("%d\n", CheckPermutation(s1, s2));
	return 0;
}