#include"Valid Palindrome.h"

//*******************�Լ��ⷨ**************
bool Solution::isPalindrome(string s)
{
	if (s == "")
		return true;
	auto it1 = s.begin();
	auto it2 = s.end() - 1;
	while (it1 < it2)
	{
		while (!((*it1 >= 48 && *it1 <= 57) || (*it1 >= 65 && *it1 <= 90) || (*it1 >= 97 && *it1 <= 122)))
		{
			if (it1<s.end() - 1)
				it1++;
			else
				return true;
		}
			
		while (!((*it2 >= 48 && *it2 <= 57) || (*it2 >= 65 && *it2 <= 90) || (*it2 >= 97 && *it2 <= 122)))
		{
			if (it2>s.begin())
				it2--;
			else
				return true;
		}
			
			
		if ((*it1 == *it2) || (tolower(*it1) == tolower(*it2)))
		{
			it1++;
			it2--;
		}
		else
			return false;

	}
	if (it1 >= it2)
		return true;
}
//-----------------------------------------------

/*
//*************leetcode����**************
bool Solution::isPalindrome(string s)
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumericע�⣺�ж��Ƿ�Ϊ �Ϸ��ַ��ͱȽ��Ƿ���Ȳ��ǲ����߼���ϵ�����Ⱥ�˳���߼���ϵ���ж����Ƿ�Ϸ����ܲ��Ƚ��Ƿ���ȣ�
        while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }
    
    return true;
}
//---------------------------------
*/



int main()
{
	Solution sol;
	string s;

//	cout << "input string:" << endl;
//	cin >> s;
	s = " \n   1221 !@&  (          ";
	cout << sol.isPalindrome(s) << endl;
	system("pause");
	return 0;
}