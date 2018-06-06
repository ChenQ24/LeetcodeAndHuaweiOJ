#include"Remove Duplicates from Sorted Array.h"

//*******************ÍøÂç½â·¨*********************
int Solution::removeDuplicates(vector<int>& nums) {
	int len = nums.size();
	if (len == 0)
		return 0;
	int count = 1;
	for (int i = 1; i < len; i++) {
		if (nums[i] == nums[i - 1]) {
			continue;
		}
		else{
			nums[count] = nums[i];
			count++;
		}
	}
	return count;
}
//----------------------------------------------------

int main()
{
	vector<int> num{ 1, 1, 2, 3, 3, 4, 5, 6, 7, 7, 8, 10, 11, 11, 13 };
	Solution sol;
	cout<< sol.removeDuplicates(num)<<endl;
	system("pause");
	return 0;
}