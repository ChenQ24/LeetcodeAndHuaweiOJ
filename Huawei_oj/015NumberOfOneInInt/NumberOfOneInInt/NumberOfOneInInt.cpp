#include<iostream>
using namespace std;

int main(){
	int num;
	int cnt=0;
	cin >> num;
	while (num){
		num = (num&(num - 1));
		cnt++;
	}
	cout << cnt;
	system("pause");
	return 0;
}