//平方根的迭代运算
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float radical(float a)
{
	//cout <<setprecicsion(n);(其中n为位数显示)
	float k = a;
	if (a > 0)
	{
		for (int i = 1;!(fabs(k - 0.5 * (k + a / k) <= 1e-5));i++)
		{
			k = 0.5 * (k + a / k);
		}
	}
	else if (a < 0)
	{
		k = radical(-a);
		cout << （ "您输入为负数，为您转化为虚数形式省略了虚数单位i）" ；
	}
	else {
		k = 0;
	}
	return k;
}
int main()
{
	cout << radical(2) << endl;
	cout << radical(-2) << endl;
	cout << radical(0) << endl;


	system("pause");
	return 0;
}
//可通过修改fabs（绝对值函数）后的1e-5和n值来调整精度