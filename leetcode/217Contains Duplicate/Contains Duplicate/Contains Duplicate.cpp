#include"Contains Duplicate.h"


//****************leetcode����***********************
bool Solution::containsDuplicate(vector<int>& nums)
{
	return nums.size() > set<int> (nums.begin(), nums.end()).size();
//	return nums.size() > set<int> iset(nums.begin(), nums.end()).size();//ע�⣺д��һ�仰��������iset,Ҫ��iset����д���±�2��
	/*
	set<int> iset(nums.begin(), nums.end());
	return nums.size() > iset.size();
	*/
}
//---------------------------------------------
//�Լ��뷨��ʹ��mapȻ��Ҳ�Ƚ���������С����������setʡ�£�����Ƿ���

int main()
{
	Solution sol;
	vector<int> nums{ 1, 2, 3, 4, 5, 6, 7, 9,7 };
	cout << sol.containsDuplicate(nums) << endl;
	system("pause");
	return 0;

}