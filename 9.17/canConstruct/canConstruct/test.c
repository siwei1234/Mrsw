#include<stdio.h>
int canConstruct(char * ransomNote, char * magazine) {
	int s = strlen(ransomNote);
	int count = 0;
	while (*ransomNote != '\0')
	{
		int cur = 0;
		while (*magazine != '\0')
		{
			if (*ransomNote == *magazine)
			{
				count++;
				*magazine = '0';
				break;
			}
			cur++;
			magazine++;
		}
		magazine = magazine - cur;
		ransomNote++;
	}
	if (count == s)
		return 1;
	return 0;
}
int main()
{
	char s[] = "siwei";
	char s1[] = "swsdadedasdidai";
	printf("%d", canConstruct(s, s1));
	return 0;
}