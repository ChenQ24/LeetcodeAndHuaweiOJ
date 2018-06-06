#include"Excel Sheet Column Title.h"


//****************自己解法**********************
string Solution::convertToTitle(int n)
{
	string s;
	int b;
	char c;
	while (n > 0)
	{
		 b = (n - 1) % 26;
		 c = b + 65;
		 s = c+s ;
		 n = (n-1) / 26;
	}
	
	
	
		return s;
}
//-----------------------------------------
int main()
{
	Solution sol;
	cout << sol.convertToTitle(30) << endl;
	system("pause");
	return 0;
}