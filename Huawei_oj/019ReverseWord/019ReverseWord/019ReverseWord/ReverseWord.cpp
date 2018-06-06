#include <iostream>
#include<string>
using namespace std;

int main(){
	string str; 
	int n = 0;

	getline(cin, str);
	n = str.size();
	string res = str;//这里不能用"string res;"因为该用法定义了一个空的字符串对象res，而下边"res[i] = str[n - 1 - i];"对空的字符串res执行下标操作，由于下标所在处无字符，会引起不可预知的错误（C++ primer p84: Note处）
	for (int i = 0; i < n; i++){
		res[i] = str[n - 1 - i];
	}
	cout << res << endl;
	system("pause");
	return 0;
}