#include"Invert Binary Tree.h"

//***************×Ô¼ºËã·¨*********************
TreeNode* Solution::invertTree(TreeNode* root)
{
	if (NULL == root)
		return NULL;
	TreeNode *left, *right;
	left = invertTree(root->left);
	right = invertTree(root->right);
	root->right = left;
	root->left = right;
	return root;
}

int main()
{
	Solution sol;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6;
	TreeNode *root, *root1;
	node = new TreeNode(4);
	root = node;
	node1 = new TreeNode(2);
	node->left = node1;
	node2 = new TreeNode(7);
	node->right = node2;
	node3 = new TreeNode(1);
	node->left->left = node3;
	node4 = new TreeNode(3);
	node->left->right = node4;
	node5 = new TreeNode(6);
	node->right->left = node5;
	node6 = new TreeNode(9);
	node->right->right = node6;
	cout << root->val << '\t' << root->left->val << '\t' << root->right->val << '\t' << root->left->left->val << '\t' << root->left->right->val << '\t' << root->right->left->val << '\t' << root->right->right->val << endl;
	root = sol.invertTree(root);
	cout << root->val << '\t' << root->left->val << '\t' << root->right->val << '\t' << root->left->left->val << '\t' << root->left->right->val << '\t' << root->right->left->val << '\t' << root->right->right->val << endl;

	system("pause");
	return 0;
}
//------------------------------------------