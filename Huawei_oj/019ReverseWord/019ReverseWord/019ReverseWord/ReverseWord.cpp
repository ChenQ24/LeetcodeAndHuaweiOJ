#include <iostream>
#include<string>
using namespace std;

int main(){
	string str; 
	int n = 0;

	getline(cin, str);
	n = str.size();
	string res = str;//���ﲻ����"string res;"��Ϊ���÷�������һ���յ��ַ�������res�����±�"res[i] = str[n - 1 - i];"�Կյ��ַ���resִ���±�����������±����ڴ����ַ��������𲻿�Ԥ֪�Ĵ���C++ primer p84: Note����
	for (int i = 0; i < n; i++){
		res[i] = str[n - 1 - i];
	}
	cout << res << endl;
	system("pause");
	return 0;
}