#include<stdio.h>
#include<string.h>
int isFlipedString(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int j = 0;
	if (len1 != len2)
		return 0;
	if (len1 == 0)
		return 1;
	for (int i = 0; i < len1; i++)
	{
		if (s1[i] == s2[0])
		{
			for (j; j < len2; j++)
			{
				if (s1[(i + j) % len1] != s2[j])
					break;
			}
		}
		if (j == len1)
			return 1;
	}
	return 0;
}
int main()
{
	char* s1 = "hello";
	char* s2 = "ohell";
	printf("%d", isFlipedString(s1, s2));
	return 0;
}