#include"Search Insert Position.h"

//***************ÍøÂç½â·¨*********
int Solution::searchInsert(vector<int>& nums, int target)
{
	int n = nums.size();

	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (target == nums[mid])
			return mid;
		else if (target < nums[mid])
			high = mid - 1;
		else
			low = mid + 1;


	}
	return low;
}
//---------------------------------------------

int main()
{
	Solution sol;
	vector<int> num{ 1, 2, 3, 4,  6, 7, 8, 9};
	int tar = 12;
	cout << sol.searchInsert(num, tar) << endl;
	system("pause");
	return 0;

}