#include<stdio.h>
#include<malloc.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
struct TreeNode* invertTree(struct TreeNode* root) {
	if (root != NULL)
	{
		invertTree(root->left);
		invertTree(root->right);
		struct TreeNode* tmp = root->right;
		root->right = root->left;
		root->left = tmp;
	}
	return root;
}
int main()
{
	return 0;
}