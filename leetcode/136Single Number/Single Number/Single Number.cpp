#include"Single Number.h"

//***************ÍøÂç½â·¨*********************
int Solution::singleNumber(vector<int>& nums)
{
	
			// Note: The Solution object is instantiated only once and is reused by each test case.
			if ( nums.size() == 0){
				return 0;
			}
			int result = nums[0];

			for (int i = 1; i < nums.size(); i++){
				result = result ^ nums[i];
			}
			return result;
		
	
}
//-----------------------------------------


int main()
{
	vector<int> num{ 1, 2, 3, 4, 5, 4, 3, 2, 1,5,100 };
	Solution sol;
	cout << sol.singleNumber(num) << endl;
	system("pause");
	return 0;
}