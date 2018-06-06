#include"Binary Tree Level Order Traversal II.h"

//*********************网络解法******************************
void Solution::levelTra(TreeNode *root, int level)
{
	if (root == NULL)
		return;
	if (level == result.size())//如果result大小不>=level,无法用下标引用（即if后语句会出错）,只能先push_back一个新元素
	{
		vector<int> v;
		result.push_back(v);
	}
	result[level].push_back(root->val);
	levelTra(root->left, level + 1);
	levelTra(root->right, level + 1);
}

vector<vector<int>> Solution::levelOrderBottom(TreeNode* root)
{
	levelTra(root, 0);
	return vector<vector<int> >(result.rbegin(), result.rend());
}
//---------------------------------------------------------------

int main()
{
	Solution sol;
	vector<vector<int> > result;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6;
	TreeNode *root;
	node = new TreeNode(7);
	root = node;
	node1 = new TreeNode(5);
	node->left = node1;
	node2 = new TreeNode(6);
	node->right = node2;
	node3 = new TreeNode(3);
	node->left->left = node3;
	node4 = new TreeNode(4);
	node->left->right = node4;
	node5 = new TreeNode(2);
	node->left->left->left = node5;
	node6 = new TreeNode(1);
	node->left->left->left->left = node6;
	result = sol.levelOrderBottom(root);
	for (auto a:result)
		for (auto b : a)
			cout << b << '\t';
	cout << endl;
	system("pause");
	return 0;
}