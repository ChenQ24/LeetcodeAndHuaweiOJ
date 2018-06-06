#include"Sqrt.h"


//***************网络解法（二分法）***********
int Solution::mySqrt(int x) {
	if (x <= 1) {
		return x;
	}

	int begin = 1;
	int end = x;//注意：不可为x-1
	int middle = 0;
	while (begin <= end) {
		middle = begin + (end - begin) / 2;
		//不要写成middle*middle==x，会溢出  
		if (middle == x / middle) {
			return middle;
		}
		else {
			if (middle<x / middle) {
				begin = middle + 1;
			}
			else {
				end = middle - 1;
			}
		}

	}
	//结束条件end一定<begin，所以返回end  
	return end;
}
//-------------------------------------------------
//**************************网络解法2(牛顿迭代)（最好弄懂，但貌似不优于二分，如根号255）***********
int Solution::mySqrt1(int x) {
	// Start typing your C/C++ solution below  
	// DO NOT write int main() function  
	if (x == 0)
		return 0;
	double pre;
	double cur = 1;
	do
	{
		pre = cur;
		cur = x / (2 * pre) + pre / 2.0;
	} while (abs(cur - pre) > 0.00001);
	return int(cur);
}
//----------------------------------------------

//**************leetcode 官网*******************
int Solution::mySqrt2(int x) {

    if (x == 0)
        return 0;
    int left = 1, right = x;
    while (true) {
        int mid = left + (right - left)/2;
        if (mid > x/mid) {
            right = mid - 1;
        } else {
            if (mid + 1 > x/(mid + 1))
                return mid;
            left = mid + 1;
        }
    }
}

//----------------------------

int main()
{
	Solution sol;
	cout << sol.mySqrt(255)<<endl;
	cout << sol.mySqrt1(255) << endl;
	cout << sol.mySqrt2(256) << endl;

	system("pause");
	return 0;
}