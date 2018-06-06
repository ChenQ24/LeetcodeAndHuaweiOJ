#include<iostream>
#include<vector>
using namespace std;


void Qsort(vector<int> &a, int left, int right){
	int l = left, r = right;
	if (l >= r) return;
	int  key = a[l];
	while (l<r){
		while (a[r] >= key && l<r) r--;//找到当前右边第一个比key小的值  
		a[l] = a[r];//将这个比key小的值赋值给当前a[l]，使得key值左边都比key小  
		while (a[l] <= key && l<r) l++;//找到当前左边第一个比key大的值  
		a[r] = a[l];//将这个比key大的值赋值给当前a[r]，使得key值右边都比key大  
	}
	a[l] = key;//将key值赋值给临界点l||r  
	//当前的l左边都比key小，右边都比key大  只需要更新[left,l-1]和[l+1,right]  
	Qsort(a, left, l - 1);
	Qsort(a, l + 1, right);
}
int main()
{
	int n;
	cin >> n;
	int num;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (v.end() == find(v.begin(), v.end(), num))
		{
			v.push_back(num);
		}
	}
	Qsort(v, 0, v.size() - 1);
	for (int j = 0; j < v.size(); j++)
	{
		cout << v[j] << endl;
	}
//	system("pause");
	return 0;
}