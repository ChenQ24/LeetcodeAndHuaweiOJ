#include"Count and Say.h"


	string revolution(string s)
	{
		string ret;
		char pre = s[0];
		int count = 1;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == pre)
			{
				count++;
			}
			else{

				char tmp = count + '0';
				ret = ret + tmp + pre;
				pre = s[i];
				count = 1;
			}
		}
		char tmp = count + '0';
		ret = ret + tmp + pre;
		return   ret;
	}
	string Solution::countAndSay(int n) {
		// Start typing your C/C++ solution below  
		// DO NOT write int main() function  
		string ret = "1";
		int j = 1;
		while (j< n){
			ret = revolution(ret);
			j++;
		}
		return ret;
	}




int main()
{
	Solution sol;
	cout << sol.countAndSay(5) << endl;
	system("pause");
	return 0;
}