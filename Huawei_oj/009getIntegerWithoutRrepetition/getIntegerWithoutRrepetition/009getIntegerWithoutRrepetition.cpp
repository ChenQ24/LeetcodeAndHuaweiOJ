#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	int num;
	unordered_set<int> iset;//ע��Ҫ��unordered_set����Ϊset�ᰴ�ؼ�������
	cin >> num;
	int a=0,b;
	while (num){
		b = num % 10;
		iset.insert( b );
		num /= 10;
	}
	for ( auto n : iset){
		a *= 10;
		a += n;
	}
	cout << a;
//	system("pause");
	return 0;
}