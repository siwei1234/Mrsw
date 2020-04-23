#include "Tree.h"
int main()
{
	char a[] = "abc##de#g##f###";
	int pi = 0;
	BTNode* root;
	root = BinaryTreeCreate(a, &pi);
	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	printf("%d\n", BinaryTreeSize(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	printf("%d\n", BinaryTreeLevelKSize(root, 2));
	BTNode* ret = BinaryTreeFind(root, 'a');
	printf("%c\n", ret->_data);
	BinaryTreeLevelOrder(root);
	printf("%d", BinaryTreeComplete(root));
	BinaryTreeDestory(root);
	return 0;
}