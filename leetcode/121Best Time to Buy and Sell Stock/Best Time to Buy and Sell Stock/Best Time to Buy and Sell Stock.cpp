#include"Best Time to Buy and Sell Stock.h"

//*****************ÍøÂç½â·¨*****************8
int Solution::maxProfit(vector<int>& prices)
{
	if (prices.size() == 0) return 0;
	int low = prices[0];
	int ans = 0;
	for (int i = 1; i<prices.size(); i++){
		if (prices[i] < low) low = prices[i];
		else if (prices[i] - low > ans) ans = prices[i] - low;
	}
	return ans;
}
//---------------------------------

int main()
{
	Solution sol;
	//	vector<int> price{ 7, 1, 5, 3, 6, 4 };
	//	vector<int> price{ 7, 6, 4, 3, 1 };
	//	vector<int> price{ 2, 7, 3, 4, 1, 5 };
	vector<int>price{ 1, 5, 3, 4, 2, 10 };
	cout << sol.maxProfit(price) << endl;
	system("pause");
	return 0;
}