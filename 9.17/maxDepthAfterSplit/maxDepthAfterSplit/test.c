#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* maxDepthAfterSplit(char * seq, int* returnSize) {
	int len = strlen(seq);
	int* ret = (int*)malloc(sizeof(int)*len);
	*returnSize = len;
	int flag = 0;
	for (int i = 0; i < len; i++)
	{
		if (i != 0 && (seq[i] == seq[i - 1]))
		{
			flag = 1 - flag;
		}
		ret[i] = flag;
	}
	return ret;
}
int main()
{
	char* seq = "(()())";
	int returnSize;
	int* ret = maxDepthAfterSplit(seq, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d	", ret[i]);
	}
	return 0;
}