#include"Symmetric Tree.h"


bool Solution::isSymmetric(TreeNode *lt, TreeNode *rt)
{
	if (!lt && !rt) return true;
	if (lt && !rt || !lt && rt || lt->val != rt->val) return false;
	return isSymmetric(lt->left, rt->right) && isSymmetric(lt->right, rt->left);
}

bool Solution::isSymmetric(TreeNode *root)
{
	if (!root) return true;
	return isSymmetric(root->left, root->right);
}

int main()
{
	Solution sol;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6;
	TreeNode *root;
	node = new TreeNode(1);
	root = node;
	node1 = new TreeNode(3);
	node->left = node1;
	node2 = new TreeNode(3);
	node->right = node2;
	node3 = new TreeNode(6);
	node->left->left = node3;
	node4 = new TreeNode(8);
	node->left->right = node4;
	node5 = new TreeNode(8);
	node->right->left = node5;
	node6 = new TreeNode(6);
	node->right->right = node6;

	cout << sol.isSymmetric(root) << endl;
	system("pause");
	return 0;


}