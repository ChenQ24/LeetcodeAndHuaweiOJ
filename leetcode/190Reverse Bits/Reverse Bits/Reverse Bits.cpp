#include"Reverse Bits.h"

//***************leetcode官网解法********************
uint32_t Solution::reverseBits(uint32_t n)
{
	uint32_t m = 0;
	for (int i = 0; i < 32; i++, n >>= 1) {
		m <<= 1;//chen:m等于“m左移一位”
		m |= n & 1;//取出n的最低位与m按位或
	}
	return m;
}
//-----------------------------------------------

int main()
{
	Solution sol;
	uint32_t a = 43261596;
	cout << sol.reverseBits(a)<<endl;
	system("pause");
	return 0;
}