#include"Plus One.h"


//***************************ÍøÂç½â·¨******************
vector<int> Solution::plusOne(vector<int> &digits) {
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i) {
		if (digits[i] == 9) digits[i] = 0;
		else {
			digits[i] += 1;
			return digits;
		}
	}
	if (digits.front() == 0) digits.insert(digits.begin(), 1);
	return digits;
}
//---------------------------------------------------

int main()
{
	vector<int> dig{ 9,7,9,9 };
	Solution sol;
	vector<int> result;
	result = sol.plusOne(dig);
	for (int &a : result)
		cout << a;
	cout << endl;
	system("pause");
	return 0;
}