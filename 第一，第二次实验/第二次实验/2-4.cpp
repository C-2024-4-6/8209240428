#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "加法运算结果为" << a + b << endl;
	cout << "减法运算结果为" << a - b << endl;
	cout << "乘法运算结果为" << a * b << endl;
	if (b == 0) {
		cout << "除法运算时分母不应为零！" << endl;
	}
	else {
		cout << "除法运算结果为" << a / b << endl;
	}
	cout << "取余运算结果为" << a % b << endl;

	system("pause");
	return 0;
}
