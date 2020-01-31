#include<stdio.h>
int lengthOfLastWord(char * s) {
	if (!*s)
		return 0;
	int n = 0;
	while (*s)
	{
		n++;
		if (*s == ' ')
		{
			n = 0;
		}
		s++;
	}
	return n;
}
int main()
{
	char* s = "a";
	printf("%d",lengthOfLastWord(s));
}