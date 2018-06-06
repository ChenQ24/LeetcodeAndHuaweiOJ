#include"Excel Sheet Column Number.h"

//*****************自己解法****************
int Solution::titleToNumber(string s)
{
	if (s == "")
		return 0;
	int n = s.size();
	int result=0, cnt=0;
	for (int i = n - 1; i >= 0; i--)
	{
		result +=((s[i] - 65) + 1)*pow(26,cnt);
		cnt++;
	}
	return result;
}


int main()
{
	Solution sol;
	string s = "AB";
	cout << sol.titleToNumber(s) << endl;
	system("pause");
	return 0;
}
//----------------------------------------------