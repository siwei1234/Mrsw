#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>

struct TreeNode {
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };
 

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
	if (root == NULL)
		return NULL;
	if (root == p || root == q)
		return root;
	struct TreeNode* left = lowestCommonAncestor(root->left, p, q);
	struct TreeNode* right = lowestCommonAncestor(root->right, p, q);
	if (left && right)
		return root;
	else if (left)
		return left;
	else if (right)
		return right;
	return NULL;
}
int main()
{
	return 0;
}