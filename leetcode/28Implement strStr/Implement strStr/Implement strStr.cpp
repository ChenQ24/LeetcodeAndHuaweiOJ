#include"Implement strStr.h"

//**********************ÍøÂç½â·¨************
	int Solution::strStr(string haystack, string needle) {
		int m = haystack.size();
		int n = needle.size();
		for (int i = 0; i <= m - n; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (j == n)
				return i;
		}
		return -1;
	}
//-------------------------------------


	int main()
	{
		Solution sol;
		string str = "i love my family, i will make them happy! my pleasure!";
		string substr = "myd";
		cout << sol.strStr(str, substr) << endl;
		system("pause");
		return 0;
	}