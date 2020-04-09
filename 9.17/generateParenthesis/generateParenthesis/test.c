#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void generate(int left, int right, int n, char* tmp, int index, char** ret, int* returnSize)
{
	if (left == n && right == n)
	{
		ret[(*returnSize)] = (char*)calloc((2 * n + 1), sizeof(char));
		strcpy(ret[(*returnSize)], tmp);
		(*returnSize)++;
		return;
	}
	if (left < n)
	{
		tmp[index] = '(';
		generate(left + 1, right, n, tmp, index + 1, ret, returnSize);
	}
	if (left > right && right < n)
	{
		tmp[index] = ')';
		generate(left, right + 1, n, tmp, index + 1, ret, returnSize);
	}
}
char ** generateParenthesis(int n, int* returnSize) {
	char* tmp = (char*)calloc((2 * n + 1), sizeof(char));
	char** ret = (char**)malloc(sizeof(char*) * 2048);
	*returnSize = 0;
	generate(0, 0, n, tmp, 0, ret, returnSize);
	return ret;
}

int main()
{
	int returnSize;
	char** ret = generateParenthesis(3, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%s\n", ret[i]);
	}
	return 0;
}