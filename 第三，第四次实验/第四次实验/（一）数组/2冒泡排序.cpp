#include<iostream>
using namespace std;
static void bubble_sort(double a[10])
{
	double b[1] = { 0 };

	for (int i = 0;i <= 9;i++)
	{
		for (int j = 0;j <= 9;j++)
		{
			if (a[j] > a[i])
			{
				b[0] = a[i];
				a[i] = a[j];
				a[j] = b[0];
			}
		}
	}
	for (int i = 0;i <= 9;i++)
	{
		cout << a[i] << '\t';
	}
}

int main()
{
	double c[10]{};
	for (int i = 0;i <= 9;i++)
	{
		cin >> c[i];
	}
	bubble_sort(c);
	return 0;

}