#include"Climbing Stairs.h"

//************************网络解法(动态规划)*********
int Solution::climbStairs(int n) {
	// Start typing your C/C++ solution below  
	// DO NOT write int main() function  

	if (n <= 2)
	{
		return n;
	}
	else
	{
		int* step = new int[n];//注意：不开辟vector，开辟int数组即可！！

		step[0] = 1;
		step[1] = 2;

		for (int i = 2; i < n; i++)
		{
			step[i] = step[i - 1] + step[i - 2];
		}
		return step[n - 1];
	}
}
//---------------------------------------------------
/*

//*********************网络解法2（递归用熟了就要节省空间）************
    int climbStairs(int n)  
    {  
        if (n < 4) return n;  
        int a = 2, b = 3, c = 5;  //a、b、c分别对应n=2、3、4时的爬楼梯方法数量
        for (int i = 5; i <= n; i++)  
        {  
            a = c;  
            c = b+c;  
            b = a;  
        }  
        return c;  
    }  
//--------------------------
*/


int main()
{
	Solution sol;
	cout << sol.climbStairs(13) << endl;
	system("pause");
	return 0;
}