#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>

struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
void recall(struct TreeNode* root, int sum, int* tmp, int i, int** returnSize, int*** returnColumnSizes, int*** ret) {
	if (root == NULL)
		return;
	sum -= root->val;
	tmp[i++] = root->val;
	if (sum == 0 && root->left == NULL && root->right == NULL)
	{
		(*ret)[**returnSize] = (int*)malloc(sizeof(int)*i);
		(**returnColumnSizes)[**returnSize] = i;
		memcpy((*ret)[**returnSize], tmp, sizeof(int)*i);
		(**returnSize)++;
	}
	recall(root->left, sum, tmp, i, returnSize, returnColumnSizes, ret);
	recall(root->right, sum, tmp, i, returnSize, returnColumnSizes, ret);
}

int** pathSum(struct TreeNode* root, int sum, int* returnSize, int** returnColumnSizes) {
	int** ret = (int**)malloc(sizeof(int*) * 400);
	*returnColumnSizes = (int*)malloc(sizeof(int) * 400);
	*returnSize = 0;
	int tmp[10000];
	int i = 0;
	recall(root, sum, tmp, i, &returnSize, &returnColumnSizes, &ret);
	if (*returnSize == 0)
	{
		free(ret);
		free(*returnColumnSizes);
		ret = NULL;
		*returnColumnSizes = NULL;
		return NULL;
	}
	return ret;
}

int main()
{
	return 0;
}