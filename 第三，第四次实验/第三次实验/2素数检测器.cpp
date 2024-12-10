#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i = 1;
	do { i++; } while (!(num % i == 0));
	if (i == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	cout << "请输入一个数字，我会为你判断是否为素数！" << endl;
	cin >> a;
	if (is_prime(a))
	{
		cout << a << "是素数！" << endl;
	}
	else {
		cout << a << "不是素数！" << endl;
	}

	cout << "我会为你列出100以内的素数哦！" << endl;

	int t(0);
	for (int i(2);i <= 100/*可以换成别的数*/;i++)
	{
		if (is_prime(i))
		{
			cout << i << '\t';
			t++;
		}
		if (t % 10 == 0)
		{
			cout << endl;
		}

	}
	return 0;


}