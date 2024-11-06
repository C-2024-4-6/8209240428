//三角形三边关系
//可以不必比较三边大小，采用最简单的方法判断构成关系
//使用数学中常用的遍历法：
#include<iostream>
using namespace std;
static int Triangle(double a, double b, double c)
{
	int test = 0;
	if (a + b > c) {
		test++;
	}
	if (a + c > b) {
		test++;
	}
	if (b + c > a) {
		test++;
	}
	if (test == 3) {
		test = 1;
	}
	else {
		test = 0;
	}
	return test;
}
int main()
{
	int a, b, c;
	cout << "请输入三角形三边长度" << endl;
	cout << "我会为你判断能否构成三角形" << endl;
	cout << "(输出1为能，输出0为不能)" << endl;
	cin >> a >> b >> c;
	cout << "结果为" << Triangle(a, b, c) << endl;

	system("pause");
	return 0;
}
