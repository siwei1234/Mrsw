#include<stdio.h>
#include<malloc.h>
#include<string.h>
int minimumLengthEncoding(char ** words, int wordsSize) {
	if (words == NULL || wordsSize == 0)
		return 0;
	int* tmp = (int*)malloc(sizeof(int)*wordsSize);
	int ret = 0;
	for (int i = 0; i < wordsSize; i++)
	{
		tmp[i] = strlen(words[i]);
		ret += tmp[i];
	}
	ret += wordsSize;
	for (int i = 0; i < wordsSize; i++)
	{
		for (int j = 0; j < wordsSize; j++)
		{
			if (i != j && (tmp[i] >= tmp[j]))
			{
				if (strcmp(words[j], words[i] + tmp[i] - tmp[j]) == 0)
				{
					ret -= (tmp[j] + 1);
					tmp[j] = 0;
					break;
				}
			}
		}
	}
	free(tmp);
	return ret;
}
int main()
{
	char* words[3] = { "time", "me", "bell" };
	printf("%d\n", minimumLengthEncoding(words, 3));
	return 0;
}