#include"House Robber.h"

/*
//***********网络解法*************
int Solution::rob(vector<int>& num)
{
	int n = num.size();
	if (n == 0)
		return 0;
	else if (n == 1)
		return num[0];
	else
	{
		vector<int> maxV(n, 0);
		maxV[0] = num[0];
		maxV[1] = max(num[0], num[1]);
		for (int i = 2; i < n; i++)
			maxV[i] = max(maxV[i - 2] + num[i], maxV[i - 1]);
		return maxV[n - 1];
	}
}
//--------------------------------------------
*/

//**********************leetcode官网解法(比上面方法占用空间更小)******************
int Solution::rob(vector<int>& num) {
	int n = num.size();
	int a = 0;
	int b = 0;

	for (int i = 0; i<n; i++)
	{
		if (i % 2 == 0)
		{
			a = max(a + num[i], b);
		}
		else
		{
			b = max(a, b + num[i]);
		}
	}

	return max(a, b);
}
//--------------------------------------



int main()
{
	clock_t start,finish;
	start = clock();
	Solution sol;
	vector<int> num{ 1, 2, 3, 4, 5, 6, 7, 8, 6 };
	cout << sol.rob(num) << endl;
	finish = clock();
	cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
	system("pause");
	finish = clock();
	cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
	return 0;
}