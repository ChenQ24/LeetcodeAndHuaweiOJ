#include"Contains Duplicate.h"


//****************leetcode官网***********************
bool Solution::containsDuplicate(vector<int>& nums)
{
	return nums.size() > set<int> (nums.begin(), nums.end()).size();
//	return nums.size() > set<int> iset(nums.begin(), nums.end()).size();//注意：写成一句话，不能用iset,要用iset，可写成下边2行
	/*
	set<int> iset(nums.begin(), nums.end());
	return nums.size() > iset.size();
	*/
}
//---------------------------------------------
//自己想法是使用map然后也比较两容器大小，不过还是set省事，能力欠火候

int main()
{
	Solution sol;
	vector<int> nums{ 1, 2, 3, 4, 5, 6, 7, 9,7 };
	cout << sol.containsDuplicate(nums) << endl;
	system("pause");
	return 0;

}