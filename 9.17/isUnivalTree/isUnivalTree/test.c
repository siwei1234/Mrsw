#include<stdio.h>
#include<malloc.h>
struct TreeNode {
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int isUnivalTree(struct TreeNode* root) {
	if (root == NULL)
		return 1;
	if (root->left && root->left->val != root->val)
		return 0;
	if (root->right && root->right->val != root->val)
		return 0;
	return isUnivalTree(root->left) && isUnivalTree(root->right);
}
int main()
{
	return 0;
}