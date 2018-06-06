#include"Remove Element.h"


//****************网络解法***************
int Solution::removeElement(vector<int>& nums, int val) {
	int ex = -1;//ex为负值表示没有等于val的，永远不执行else if中语句（即永远不向前搬移），一旦有等于val的，ex被赋值为下标，下标必不为负，则必执行else if中的语句（进行向前搬移）
	int n = nums.size();
	int len = n;
	for (int i = 0; i < n; i++) {
		if (nums[i] == val) {
			len--;
			if (ex < 0)
				ex = i;
		}
		else if (ex >= 0) {			//表示有等于val的值，要将数组中等于val的后面的数依次向前搬移
			nums[ex] = nums[i];
			ex++;
		}
	}
	return len;
}
//----------------------------------------

int main()
{
	Solution sol;
	vector<int> nums{ 1, 2, 3, 4, 5, 6, 3, 3, 3, 9, 3, 10, 11, 12, 13, 14, 3, 15, 3 };
	int val = 3;
	cout << sol.removeElement(nums, val)<<endl;
	system("pause");
	return 0;
}