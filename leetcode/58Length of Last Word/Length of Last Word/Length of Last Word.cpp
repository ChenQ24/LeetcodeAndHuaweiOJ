#include"Length of Last Word.h"



//*************************ÍøÂç½â·¨********************************
int Solution::lengthOfLastWord(string s)
{
	int len = s.size();
	if (len == 0) return 0;
	while (len > 0 && s[len - 1] == ' ')
	{
		len--;
	}
	int end = len;
	while (len > 0 && s[len - 1] != ' ')
	{
		len--;
	}
	int begin = len;
	int res = end - begin;
	return res;
}
//---------------------------------------------

int main()
{
	Solution sol;
	string s = "  a fff  ";
	int res = sol.lengthOfLastWord(s);
	printf("The last word length is %d.\n", res);
	system("pause");
	return 0;
}