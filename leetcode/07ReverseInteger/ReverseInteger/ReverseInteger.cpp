#include"ReverseInteger.h"


//***********自己解法1*********************
int Solution::reverse(int x)
{
	string s;
	stringstream ss;//注意：此为stringstream，非sstream
	ss << x;
	ss >> s;
	char c;
	int x2=0;
	auto it = s.begin();
	auto it2 = s.end() - 1;
//	auto n = s.size();
//	cout << typeid(*it).name();
	if (*it =='-')
		it++;
	while (it < it2)//   注意：迭代器可以>或<或<=或>=运算，不同于s.begin()!=s.end()  （此处才用不等于）
	{
		c = *it;
		*it = *it2;
		*it2 = c;
		it++; 
		it2--;
	}
	stringstream ss1;//    注意：此处必须定义一个新的stringstream，否则翻转后的s无法转换为x

	ss1 << s;
	ss1 >> x;
	return x;


}
//-----------------------

/*
//*****************自己解法2********************
//只做大致思路
if(x<0)
flag=1;
len=1;
while(x/len>10)
{len*=10;
}
y=0;
while(len>=1)
{
y+=x%10*len;
len/=10;
x/=10;
}
if(flag==1)
return -y;
else return y;


//-----------------------------
*/


int main()
{	
	int a = 1234, b = 678, c = -123456, d = -789;

	/*
	string mmm("hello");
	auto it = mmm.begin();
	cout << typeid(*it).name() << endl;
*/

	Solution sol;
	int a1 = sol.reverse(a);
	int b1 = sol.reverse(b);
	int c1 = sol.reverse(c);
	int d1 = sol.reverse(d);
	cout << a1 << endl << b1 << endl << c1 << endl << d1 << endl;
	system("pause");
	return 0;
}