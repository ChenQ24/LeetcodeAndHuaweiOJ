#include"Rotate Array.h"



//*************leetcode¹ÙÍø½â·¨********************
void Solution::rotate(vector<int>& nums, int k)
{
	int n = nums.size();
	if ((n == 0) || (k <= 0))
	{
		return;
	}

	// Make a copy of nums
	vector<int> numsCopy(n);
	for (int i = 0; i < n; i++)
	{
		numsCopy[i] = nums[i];
	}

	// Rotate the elements.
	for (int i = 0; i < n; i++)
	{
		nums[(i + k) % n] = numsCopy[i];
	}
}

void Solution::rotate1(vector<int>& nums, int k)
{
	int n = nums.size();
	auto iter = nums.begin();
	k = k%n;

	// Reverse the first n - k numbers.
	// Index i (0 <= i < n - k) becomes n - k - i.
	reverse(iter, iter + n - k);

	// Reverse tha last k numbers.
	// Index n - k + i (0 <= i < k) becomes n - i.
	reverse(iter + n - k, iter + n);

	// Reverse all the numbers.
	// Index i (0 <= i < n - k) becomes n - (n - k - i) = i + k.
	// Index n - k + i (0 <= i < k) becomes n - (n - i) = i.
	reverse(iter, iter + n);
}

void Solution::rotate2(vector<int>& nums, int k)
{
	int n = nums.size();
	auto iter = nums.begin();
	for (; k = k%n; n -= k, iter += k)
	{
		// Swap the last k elements with the first k elements. 
		// The last k elements will be in the correct positions
		// but we need to rotate the remaining (n - k) elements 
		// to the right by k steps.
		for (int i = 0; i < k; i++)
		{
			swap(iter[i], iter[n - k + i]);
		}
	}
}

int main()
{
	Solution sol;
	vector < int> nums{ 1, 2, 3, 4, 5, 6, 7 };
	sol.rotate(nums, 3);
	for (auto a : nums)
		cout << a << '\t';
	cout << endl;
	vector < int> nums1{ 1, 2, 3, 4, 5, 6, 7 };
	sol.rotate1(nums1, 3);
	for (auto a1 : nums1)
		cout << a1 << '\t';
	cout << endl;
	vector < int> nums2{ 1, 2, 3, 4, 5, 6, 7 };
	sol.rotate2(nums2, 3);
	for (auto a2 : nums2)
		cout << a2 << '\t';
	cout << endl;
	system("pause");
	return 0;
}