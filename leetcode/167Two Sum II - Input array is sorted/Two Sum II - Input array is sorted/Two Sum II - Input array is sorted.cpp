#include"Two Sum II - Input array is sorted.h"


//******************网络解法***********
//--双指针问题--
vector<int> Solution::twoSum(vector<int>& numbers, int target)
{
	vector<int> ret(2, -1);
	int left = 0;
	int right = numbers.size() - 1;
	while (left < right)
	{
		int tmp = numbers[left] + numbers[right];
		if (tmp == target)
		{
			ret[0] = left + 1;
			ret[1] = right + 1;
			return ret;
		}
		else if (tmp < target)
			//make tmp larger
			left++;
		else
			//make tmp smaller
			right--;
	}
}

int main()
{
	Solution s;
	int A[4] = { 2, 7, 11, 15 };
	vector<int> numbers1(A, A + 4);//chen：此处A,A+4分别代表首尾迭代器，将其间的值赋给numbers
	for (auto dd : numbers1)
		cout << dd << '\t';
	cout << endl;
	vector<int> ret = s.twoSum(numbers1, 9);
	cout << ret[0] << ", " << ret[1] << endl;
	system("pause");


	int B[2] = { 1, 1 };
	vector<int> numbers2(B, B + 2);
	for (auto dd : numbers2)
		cout << dd << '\t';
	cout << endl;
	ret = s.twoSum(numbers2, 2);
	cout << ret[0] << ", " << ret[1] << endl;
	system("pause");

	int C[3] = { 1, 2, 3 };
	vector<int> numbers3(C, C + 3);
	for (auto dd : numbers3)
		cout << dd << '\t';
	cout << endl;
	ret = s.twoSum(numbers3, 5);
	cout << ret[0] << ", " << ret[1] << endl;
	system("pause");

	return 0;
}
//--------------------------------------------------