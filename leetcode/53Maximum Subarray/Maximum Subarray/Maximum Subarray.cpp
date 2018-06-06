#include"Maximum Subarray.h"


//******************网络解法***************
int Solution::maxSubArray(vector<int>& nums) {
	int n = nums.size();
	if (n == 0)
		return 0;

	int max_ending_here = nums[0];
	int max_so_far = nums[0];
	for (int i = 1; i < n; ++i)
	{
		if (max_ending_here < 0)
			// So far we get negative values, this part has to be dropped  
			max_ending_here = nums[i];
		else
			// we can accept it, it could grow later  
			max_ending_here += nums[i];

		max_so_far = max(max_so_far, max_ending_here);//注意：max函数在头文件algorithm中
	}
	return max_so_far;
}
//-----------------------------------------------------------

int main()
{
	Solution sol;
	vector<int> num{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	cout << max(-9,80) << endl;
	cout << sol.maxSubArray(num) << endl;
	system("pause");
	return 0;
}