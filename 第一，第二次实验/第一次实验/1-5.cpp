//参考公式：华氏度到摄氏度：摄氏度 = (华氏度 - 32) × 5/9
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f(0), c(0);
	cout << "Fahrenheit degree and Celsius degree transform tool!" << endl;
	cout << "enter the Fahrenheit degree:" << endl;
	cin >> f;
	c = (f - 32) * 5.00 / 9.00;
	cout << fixed << setprecision(2);
	cout << "the Celsius degree is" << "'" << c << "'" << endl;
	system("pause");
	return 0;
}
