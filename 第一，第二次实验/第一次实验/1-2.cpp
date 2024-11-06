#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	float r(0), h(0);
	cout << "Please enter the radius and height of the cylinder," << endl;
	cout << "and I will find its volume for you!" << endl;
	cout << "(radius first and height next!)" << endl;
	cin >> r >> h;
	float v = (r * r) * PI * h;
	cout << "the volume is:" << v << "!" << endl;

	return 0;
}
