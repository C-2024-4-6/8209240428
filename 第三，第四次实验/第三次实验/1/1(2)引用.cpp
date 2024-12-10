#include<iostream>
using namespace std;
int big(0), small(0);

//函数体
void max_min_(int m, int n)
{
	int& t = big;
	for (int i = 1;(i <= m || i <= n);i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			t = i;
		}
	}
	for (int i = 1;!(i % m == 0 && i % n == 0);i++)
	{
		small = i;
	}
}




int main()
{
	int a, b;
	cout << "输入两个数，我会为你求出它们的最大公因数和最小公倍数！" << endl;
	cin >> a >> b;
	max_min_(a, b);
	cout << "最大公因数和最小公倍数分别为为：" << big << "与" << small << endl;

	return 0;
}