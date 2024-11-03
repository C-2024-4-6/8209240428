#include<iostream>
using namespace std;
int main()
{
	int a(20), b(30), c(40);
	if (a > b) a = b, b = c;c = a;
	cout << "a=" << a << ",b=" << b << ",c=" << c;

	return 0;

}