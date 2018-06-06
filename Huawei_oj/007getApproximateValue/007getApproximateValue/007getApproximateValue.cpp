#include<iostream>
using namespace std;

int main(){
	float a;
	cin >> a;
//-----------------from internet-------------
	if (a > 0)
		cout << (int)(a + 0.5);
	else
		cout << (int)(a - 0.5);
//----------------------------------------
//	system("pause");
	return 0;
}