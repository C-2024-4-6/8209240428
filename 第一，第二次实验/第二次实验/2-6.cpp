//最大共因数与最小公倍数问题
//使用数论知识中解同余方程的方法：
#include<iostream>
using namespace std;
int main()
{
	int n(1);
	int a, b, min(0), max(0);
	cin >> a >> b;
	for (n = 1;!(n % a == 0 && n % b == 0);n++)
	{
		min = n;
	}
	for (n = 2;!(n > a || n > b);n++)
	{
		if (a % n == 0 && b % n == 0)
		{
			max = n;
		}
	}
	cout << "最小公倍数为" << min + 1 << "	最大公因数为" << max << endl;

	system("pause");
	return 0;
}