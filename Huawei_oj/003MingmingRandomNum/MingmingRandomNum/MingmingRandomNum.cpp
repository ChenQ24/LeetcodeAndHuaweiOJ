#include<iostream>
#include<vector>
using namespace std;


void Qsort(vector<int> &a, int left, int right){
	int l = left, r = right;
	if (l >= r) return;
	int  key = a[l];
	while (l<r){
		while (a[r] >= key && l<r) r--;//�ҵ���ǰ�ұߵ�һ����keyС��ֵ  
		a[l] = a[r];//�������keyС��ֵ��ֵ����ǰa[l]��ʹ��keyֵ��߶���keyС  
		while (a[l] <= key && l<r) l++;//�ҵ���ǰ��ߵ�һ����key���ֵ  
		a[r] = a[l];//�������key���ֵ��ֵ����ǰa[r]��ʹ��keyֵ�ұ߶���key��  
	}
	a[l] = key;//��keyֵ��ֵ���ٽ��l||r  
	//��ǰ��l��߶���keyС���ұ߶���key��  ֻ��Ҫ����[left,l-1]��[l+1,right]  
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