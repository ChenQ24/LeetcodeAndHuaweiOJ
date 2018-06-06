#include"Pascal's Triangle II.h"

//****************自己解法********************
vector<int> Solution::getRow(int rowIndex)
{
	vector<int> a;
	if (1 == rowIndex)
	{
		a.push_back(1);
		return a;
	}
	else
	{
		a = getRow(rowIndex - 1);
		int mid = 0;
		int b;
		if (rowIndex % 2 == 1)
			mid = rowIndex / 2;
		else
			mid = rowIndex / 2 - 1;
		for (int i = mid; i > 0; i--)
		{
			a[i] = a[i] + a[i - 1];
		}
		a[0] = 1;
		if (rowIndex % 2 == 1)
			for (int i = 1; i <= rowIndex / 2; i++)
			{
				if (mid + i<a.size())
					a[mid + i] = a[mid - i];
				else
				{
					b = a[mid - i];
					a.push_back(b);
				}
				
			}
		else
			for (int i = 1; i <= rowIndex / 2; i++)
			{
				if (mid+i<a.size())
					a[mid + i] = a[mid + 1 - i];
				else
				{
					b = a[mid + 1 - i];
					a.push_back(b);
				}
				
			}
	}
	return a;

}
//----------------------------------

//*****************自己解法1***************
/*每一行都比上一行多一个，所以下一行一直可以等于上一行两个数之和（即a[i] = a[i] + a[i - 1];a[0]除外，a[0]=1;再在最后，a.push_back(1)，即比上一行多一个数了，下一行构造完毕）
代码如下（未调试）：
vector<int> Solution::getRow(int rowIndex)
{
	vector<int> a;
	vector<int> b;
	if(rowIndex==0)
	{
a.push_back(1);          
		return a;
	}
	else
	{
		b=getRow(int rowIndex-1);
		a=getRow(int rowIndex-1);
		for(i=1;i<b.size();i++)
		{
			a[i]=b[i]+b[i-1];
		}
		a.push_back(1);
		return a;
}



//------------------------------------
*/

int main()
{
	Solution sol;
	vector<int> a;
	int k;
	int TiaoShi = 11;
	while (TiaoShi--)
	{
	
	cout << "请输入需要输出的杨辉三角的序号（k th）";
	cin >> k;
	a = sol.getRow(k+1);
	for (auto v : a)
		cout << v << '\t';
	cout << endl;
	}
	system("pause");
	return 0;
}