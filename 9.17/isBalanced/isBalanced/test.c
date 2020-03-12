//判断是否是平衡二叉树
#include<stdio.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;	
};
int depth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	int leftdepth = depth(root->left);
	int rightdepth = depth(root->right);
	return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
}
int isBalanced(struct TreeNode* root) {
	if (root == NULL)
		return 1;
	int leftdepth = depth(root->left);
	int rightdepth = depth(root->right);
	if (abs(leftdepth - rightdepth) > 1)
		return 0;
	return isBalanced(root->left) && isBalanced(root->right);
}
int main()
{
	return 0;
}