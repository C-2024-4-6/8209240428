#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	int max_ = (side1 > side2 ? side1 : side2)>side3? (side1 > side2 ? side1 : side2):side3;
	return (max_ < (side1 + side2 + side3 - max_)) ? 1 : 0;
}
double area(double side1, double side2, double side3)
{
	if (is_valid(double side1, double side2, double side3))
	{
		double s = (side1 + side2 + side3) / 2;
		return (sqrt(s(s - side1)(s - side2)(s - side3)))
	}
	else
	{
		cout << "(���Ϊ0������ʵ���������������������Ŷ...)";

		return 0;
	}
}