#include"Convert Sorted Array to Binary Search Tree.h"

//********************ÍøÂç½â·¨**************************
TreeNode* generateBST(int left, int right, vector<int>& num)
{
	if (left > right)
		return nullptr;
	else if (left == right)
		return new TreeNode(num[left]);
	else
	{
		int mid = (left + right) / 2;
		TreeNode* node = new TreeNode(num[mid]);
		node->left = generateBST(left, mid - 1, num);
		node->right = generateBST(mid + 1, right, num);
		return node;
	}
}

TreeNode *Solution::sortedArrayToBST(vector<int> &num) {
	return generateBST(0, num.size() - 1, num);
}
//-------------------------------------------------------------

int main()
{
	Solution sol;
	vector<int> num{ 1, 2, 3, 4, 5, 6, 7 };
	TreeNode* root = sol.sortedArrayToBST(num);
	cout << root->val << '\t' << root->left->val << '\t' << root->left->left->val << '\t' << root->left->right->val << '\t' << root->right->val << '\t' << root->right->left->val << '\t' << root->right->right->val << endl;
	system("pause");
	return 0;

}