#include"Reverse Bits.h"

//***************leetcode�����ⷨ********************
uint32_t Solution::reverseBits(uint32_t n)
{
	uint32_t m = 0;
	for (int i = 0; i < 32; i++, n >>= 1) {
		m <<= 1;//chen:m���ڡ�m����һλ��
		m |= n & 1;//ȡ��n�����λ��m��λ��
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