
#include "TwoSum.h"


//----------------------------来自网络----------------------------

vector<int> Solution::twoSum(vector<int> &nums, int target) {
			             int n = nums.size();
			             vector<int> result;
			             map<int, int> index;
			             for (int i = 0; i < n; i++) {
				                 if (index.count(nums[i]) != 0) {
					                     // if exists
						                 result.push_back(index[nums[i]] );
					                     result.push_back(i );
					                     break;
					
								 }
				                 index[target - nums[i]] = i;
				
						 }
			             return result;
			
}
		

//------------------------------------------------------------------------------------



//-----------------------------------------自己编的------------------------------
vector<int> Solution::twoSum(vector<int> &nums, int target) {
	int n = nums.size();//注意 ：必要时将vector.size的结果转化为int
	vector<int> result;
	for (int i = 0; i < n - 1;i++)
		for (int j = i + 1; nums.begin() + j != nums.end();++j)
		if (target == *(nums.begin() + i) + *(nums.begin() + j))
		{
			result.push_back(i);
			result.push_back(j);
		}
		return result;



}

//-------------------------------------------------------------------------------

int main()
{
	vector<int> nums{ 2, 7, 11, 15 };
	int target =19;
	Solution a;
	vector<int>s=a.twoSum(nums, target);
	for (auto i : s)
		cout << i << " ";
	cout << endl;
	system("pause");
}