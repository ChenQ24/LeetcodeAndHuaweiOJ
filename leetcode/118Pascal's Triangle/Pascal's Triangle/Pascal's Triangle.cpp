#include"Pascal's Triangle.h"

//*********************自己解法**************************
vector<vector<int>> Solution::generate(int numRows)
{
	vector<vector<int>> a;
	if (1 == numRows)
	{
		vector<int> b{ 1 };
		a.push_back(b);
		return a;
	}
	else
	{
		a = generate(numRows - 1);
		vector<int> b;
		int m;
//		auto it = a[numRows - 1-1].begin();
		for (int i = 0; i < numRows; i++)
		{
			if (0 == i )
			{
//				auto it = a[numRows - 1 - 1].begin();
				m = a[numRows - 1 - 1][i];
				b.push_back(m);
			}
			else if ((numRows - 1) == i)
			{
				m = a[numRows - 1 - 1][numRows - 1 - 1];
				b.push_back(m);
			}
				
			else
			{
//				auto it = a[numRows - 1 - 1].begin();
				m = a[numRows - 1 - 1][i] + a[numRows - 1 - 1][i - 1];
				b.push_back(m);
			}
				
		}
		a.push_back(b);
		return a;
	}
}
//----------------------------------------------------------------------------

/*
//***************自己解法1*************
依然采用递归形式得到numRows -1行的三角，第numRows 行的数得来方式与119. Pascal's Triangle II“自己解法1”相同
代码如下(未调试）：
vector<vector<int>> Solution::generate(int numRows)
{
	vector<vector<int>> a;
	if (1 == numRows)
	{
		vector<int> b{ 1 };
		a.push_back(b);
		return a;
	}
	else
	{
		a = generate(numRows - 1);
		vector<int> b;
		b.push_back(1);
		int n=a.size();
		for(i=1;i<n;i++)
		{
			b.push_back(a[numRows - 2][i]+a[numRows - 2][i-1]);
		}
		b.push_back(1);
		a.push_back(b);
		return a;
	}
}

//-----------------------------------
*/

int main()
{
	Solution sol;
	vector<vector<int>> a = sol.generate(10);
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	system("pause");
	return 0;

}