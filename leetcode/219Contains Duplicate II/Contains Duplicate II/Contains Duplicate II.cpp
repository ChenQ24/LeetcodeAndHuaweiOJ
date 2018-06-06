#include"Contains Duplicate II.h"

//*****************网络解法（博客园：Grandyang 仰天长啸仗剑红尘，冬去春来寒暑几更）*********************
bool Solution::containsNearbyDuplicate(vector<int>& nums, int k)
{
	unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); ++i) {
		if (m.find(nums[i]) != m.end() && i - m[nums[i]] <= k) return true;
		else m[nums[i]] = i;
	}
	return false;
}
//-------------------------------------------

int main()
{
	Solution sol;
	vector<int> nums = { 7,9,8,1, 2, 3, 1, 4 };
	cout << sol.containsNearbyDuplicate(nums,3)<<endl;
	system("pause");
	return 0;
}
