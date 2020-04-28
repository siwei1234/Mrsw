#include<stdio.h>
#include<malloc.h>

char** getValidT9Words(char* num, char** words, int wordsSize, int* returnSize) {
	char tmp[27] = "22233344455566677778889999";
	int flag;
	*returnSize = 0;
	char** ret = (char**)malloc(sizeof(char*)*wordsSize);
	int len = strlen(num);
	for (int i = 0; i < wordsSize; i++)
	{
		flag = 1;
		for (int j = 0; j < len; j++)
		{
			int t = words[i][j] - 'a';
			if (tmp[t] != num[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			ret[(*returnSize)] = (char*)malloc(sizeof(char)*len);
			ret[(*returnSize)++] = words[i];
		}
	}
	return ret;
}

int main()
{
	return 0;
}