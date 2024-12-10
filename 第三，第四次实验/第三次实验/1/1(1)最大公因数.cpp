#include<iostream>
using namespace std;
//最大公因数函数
int max_(int m, int n)
{
	int t = 0;
	for (int i = 1;(i <= m || i <= n);i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			t = i;
		}
	}
	return t;

}

int main()
{
	int a, b;
	cout << "输入两个数，我会为你求出它们的最大公因数！" << endl;
	cin >> a >> b;
	cout << "最大公因数为：" << max_(a, b) << endl;
	return 0;
}