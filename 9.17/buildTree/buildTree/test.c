#include<stdio.h>
#include<malloc.h>


struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };
 


struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
	if (preorderSize <= 0)
		return NULL;
	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->val = preorder[0];
	int index = 0;
	while (index < preorderSize && inorder[index] != preorder[0])
		++index;
	root->left = buildTree(preorder + 1, index, inorder, index);
	root->right = buildTree(preorder + 1 + index, preorderSize - 1 - index, inorder + index + 1, preorderSize - 1 - index);
	return root;
}

int main()
{
	return 0;
}