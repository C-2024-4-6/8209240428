#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	Point(int x = 60, int y = 80)
	{
		this->x = x;
		this->y = y;
	}
};
int main()
{
	Point p1(60, 80);
	cout << "move the point :";
	int i(0), j(0);
	cin >> i >> j;

	p1.setPoint(i, j);
	p1.display();
	return 0;
}