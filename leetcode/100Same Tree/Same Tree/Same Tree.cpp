#include"Same Tree.h"


//****************ÍøÂç½â·¨***********************
bool Solution::isSameTree(TreeNode *p, TreeNode *q) {
	if (!p && !q)
		return true;
	else if (!p && q)
		return false;
	else if (p && !q)
		return false;
	else
	{
		if (p->val != q->val)
			return false;
		else
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
}
//--------------------------------------------------

int main()
{
	Solution sol;
	TreeNode *node,*node1,*node2,*node3,*node4,*node5,*node6;
	TreeNode *_node, *_node1, *_node2, *_node3, *_node4, *_node5, *_node6;
	TreeNode *root,*root1;
	node = new TreeNode(1);
	root = node;
	node1 = new TreeNode(3);
	node->left = node1;
	node2 = new TreeNode(4);
	node->right = node2;
	node3 = new TreeNode(6);
	node->left->left = node3;
	node4 = new TreeNode(8);
	node->left->right = node4;
	node5 = new TreeNode(9);
	node->right->left = node5;
	node6 = new TreeNode(110);
	node->right->right = node6;


	_node = new TreeNode(1);
	root1 = _node;
	_node1 = new TreeNode(3);
	_node->left = _node1;
	_node2 = new TreeNode(4);
	_node->right = _node2;
	_node3 = new TreeNode(6);
	_node->left->left = _node3;
	_node4 = new TreeNode(8);
	_node->left->right = _node4;
	_node5 = new TreeNode(9);
	_node->right->left = _node5;
	_node6 = new TreeNode(110);
	_node->right->right = _node6;

	cout << sol.isSameTree(root, root1) << endl;
	system("pause");
	return 0;


	

}