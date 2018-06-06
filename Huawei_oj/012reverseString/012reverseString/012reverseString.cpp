#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	getline(cin, input);
	string output(input.rbegin(), input.rend());
	cout << output;
	system("pause");
	return 0;
}