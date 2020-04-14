#include<stdio.h>
#include<string.h>
int canPermutePalindrome(char* s) {
	int len = strlen(s);
	int flag = 0;
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		flag = 0;
		if (s[i] != ' ')
		{
			for (int j = i + 1; j < len; j++)
			{
				if (s[i] == s[j])
				{
					s[j] = ' ';
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				count++;
		}
	}
	if (count > 1)
		return 0;
	return 1;
}

int main()
{
	char s[] = "tactcoa";
	printf("%d\n", canPermutePalindrome(s));
	return 0;
}