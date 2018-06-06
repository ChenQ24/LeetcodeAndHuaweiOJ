#include"Add Binary.h"

//****************************ÍøÂç½â·¨************
string Solution::addBinary(string a, string b) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		int flag = 0;

		int aIndex = a.size() - 1;
		int bIndex = b.size() - 1;

		string c;

		while (aIndex >= 0 && bIndex >= 0)
		{
			int num = a[aIndex] - '0' + (b[bIndex] - '0') + flag;
			flag = num / 2;
			num %= 2;

			c = (char)(num + '0') + c;

			aIndex--;
			bIndex--;
		}

		while (aIndex >= 0)
		{
			int num = a[aIndex] - '0' + flag;
			flag = num / 2;
			num %= 2;

			c = (char)(num + '0') + c;

			aIndex--;
		}

		while (bIndex >= 0)
		{
			int num = b[bIndex] - '0' + flag;
			flag = num / 2;
			num %= 2;

			c = (char)(num + '0') + c;

			bIndex--;
		}

		if (flag > 0)
			c = (char)(flag + '0') + c;

		return c;
	}
//------------------------------------------------

int main()
{
	Solution sol;
	string a = "0101";
	string b = "1011";
	string c = sol.addBinary(a, b);
	for (char &ch : c)
		cout << ch;
	cout << endl;
	system("pause");
	return 0;
}
