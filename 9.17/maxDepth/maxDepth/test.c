#include<stdio.h>
#include<malloc.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	int leftmaxDepth = maxDepth(root->left);
	int rightmaxDepth = maxDepth(root->right);
	return leftmaxDepth > rightmaxDepth ? leftmaxDepth + 1 : rightmaxDepth + 1;
}
int main()
{
	return 0;
}