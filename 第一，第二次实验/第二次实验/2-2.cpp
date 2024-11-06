//分段函数中if else语句的运用
#include<iostream>
using namespace std;
int main()
{
	cout << "输入一个0~10之间的实数，为你计算函数值" << endl;
	cout << "当然你也可以输入0~10之外的数结束运行" << endl;

	double x(0);
	do {
		cin >> x;
		if (x > 0 && x < 1)
		{
			cout << 3 - 2 * x << endl;
		}
		else if (x >= 1 && x < 5) {
			cout << 2 / (4 * x) + 1 << endl;
		}
		else if
			(x >= 5 && x < 10) {
			cout << x * x << endl;
		}
	} while (x > 0 && x < 10);
	if (x <= 0 || x >= 10) {
		cout << "finsh!" << endl;
	}
	system("pause");
	return 0;
}
