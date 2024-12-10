#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形三边长，我使用海伦·秦九韶公式会为你计算其面积！" << endl;
	cin >> a >> b >> c;
	cout << area(a, b, c) << endl;
	return 0;
}
