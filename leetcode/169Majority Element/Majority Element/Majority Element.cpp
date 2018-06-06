#include"Majority Element.h"

//******************网络解法1*******************
//Moore's voting algorithm--每找出两个不同的element，就成对删除即count--，最终剩下的一定就是所求的。时间复杂度：O(n).   由Robert S.Boyer 和J Strother Moore于1980年发明，是线性时间复杂度。
int Solution::majorityElement(vector<int>& num)
{
		

			int elem = 0;
			int count = 0;

			for (int i = 0; i < num.size(); i++)  {

				if (count == 0)  {
					elem = num[i];
					count = 1;
				}
				else    {
					if (elem == num[i])
						count++;
					else
						count--;
				}

			}
			return elem;
		
	
}
//--------------------------
/*
//******************网络解法2(上面的变形)*******************
int Solution::majorityElement(vector<int> &num) {
	int majority;
	int cnt = 0;
	for (int i = 0; i<num.size(); i++){
		if (cnt == 0){
			majority = num[i];
			cnt++;
		}
		else{
			majority == num[i] ? cnt++ : cnt--;
			if (cnt >= num.size() / 2 + 1) return majority;
		}
	}
	return majority;
}

//-----------------------------
*/

int main()
{
	Solution sol;
	vector<int> nums{ 1, 2, 3, 4, 5, 2, 3, 2, 2, 4, 2, 2, 2 };
	cout << sol.majorityElement(nums) << endl;
	system("pause");
	return 0;
}