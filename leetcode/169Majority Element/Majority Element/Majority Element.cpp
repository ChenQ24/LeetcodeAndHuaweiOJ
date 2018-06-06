#include"Majority Element.h"

//******************����ⷨ1*******************
//Moore's voting algorithm--ÿ�ҳ�������ͬ��element���ͳɶ�ɾ����count--������ʣ�µ�һ����������ġ�ʱ�临�Ӷȣ�O(n).   ��Robert S.Boyer ��J Strother Moore��1980�귢����������ʱ�临�Ӷȡ�
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
//******************����ⷨ2(����ı���)*******************
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