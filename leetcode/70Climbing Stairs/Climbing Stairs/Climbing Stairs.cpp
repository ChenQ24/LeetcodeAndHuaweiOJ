#include"Climbing Stairs.h"

//************************����ⷨ(��̬�滮)*********
int Solution::climbStairs(int n) {
	// Start typing your C/C++ solution below  
	// DO NOT write int main() function  

	if (n <= 2)
	{
		return n;
	}
	else
	{
		int* step = new int[n];//ע�⣺������vector������int���鼴�ɣ���

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

//*********************����ⷨ2���ݹ������˾�Ҫ��ʡ�ռ䣩************
    int climbStairs(int n)  
    {  
        if (n < 4) return n;  
        int a = 2, b = 3, c = 5;  //a��b��c�ֱ��Ӧn=2��3��4ʱ����¥�ݷ�������
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