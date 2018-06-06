#include"Best Time to Buy and Sell Stock II.h"


//*********************网络解法********************
int Solution::maxProfit(vector<int>& prices)
{
	int result = 0;
	int i = 0;
	int len = prices.size();
	if (len<2)//!!!不要丢情况（然而因result=0，就算没有这个if语句，结果也正确）
		return 0;
	for (i = 1; i<len; ++i)
	{
		if (prices[i]>prices[i - 1])
		{
			result += prices[i] - prices[i - 1];
		}
	}
	return result;
	
}
//------------------------------------------

int main()
{
	Solution sol;
	vector<int> price{ 4, 5, 2, 1, 7, 10 };
	cout << sol.maxProfit(price) << endl;
	system("pause");
	return 0;
}