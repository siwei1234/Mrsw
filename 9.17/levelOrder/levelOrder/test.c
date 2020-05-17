#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct TreeNode {
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };

int* levelOrder(struct TreeNode* root, int* returnSize) {
	int ret[10000];
	struct TreeNode* Queue[10000];
	*returnSize = 0;
	if (root == NULL)
		return ret;
	int rear = 0, back = 0;
	Queue[back++] = root;
	while (rear != back)
	{
		struct TreeNode* front = Queue[rear];
		rear++;
		ret[(*returnSize)++] = front->val;
		if (front->left)
			Queue[back++] = front->left;
		if (front->right)
			Queue[back++] = front->right;
	}
	int* res = (int*)malloc(sizeof(int)*(*returnSize));
	memcpy(res, ret, sizeof(int)*(*returnSize));
	return res;
}

int main()
{

	return 0;
}