//�ж�һ���������ǲ�����һ��������������
#include<stdio.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };
 

int compare(struct TreeNode* s, struct TreeNode* t)
{
	if (s == NULL && t == NULL)
		return 1;
	if (s == NULL || t == NULL)
		return 0;
	if (s->val == t->val)
		return compare(s->left, t->left) && compare(s->right, t->right);
	return 0;
}
int isSubtree(struct TreeNode* s, struct TreeNode* t) {
	if (s == NULL && t == NULL)
		return 1;
	if (s == NULL || t == NULL)
		return 0;
	return compare(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
}
int main()
{
	return 0;
}