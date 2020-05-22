#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 


 /**
  * Return an array of arrays of size *returnSize.
  * The sizes of the arrays are returned as *returnColumnSizes array.
  * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
  */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
	int** ret = (int**)malloc(sizeof(int*) * 1000);
	*returnColumnSizes = (int*)malloc(sizeof(int) * 1000);
	int* tmp = (int*)malloc(sizeof(int) * 10000);
	*returnSize = 0;
	struct TreeNode* Queue[10000];
	int front = 0, rear = 0, last = 0, cnt = 0, n = 0;
	if (root != NULL)
		Queue[rear++] = root;
	last = rear;
	while (front < rear)
	{
		struct TreeNode* cur = Queue[front++];
		tmp[n++] = cur->val;
		cnt++;
		if (cur->left)
			Queue[rear++] = cur->left;
		if (cur->right)
			Queue[rear++] = cur->right;
		if (front == last)
		{
			ret[(*returnSize)] = (int*)malloc(sizeof(int)*cnt);
			ret[(*returnSize)] = tmp + n - cnt;
			(*returnColumnSizes)[(*returnSize)++] = cnt;
			cnt = 0;
			last = rear;
		}
	}
	return ret;
}

int main()
{
	return 0;
}