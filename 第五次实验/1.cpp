#include<iostream>
//改写后：
using namespace std;
class Time
{
private:  //(1)将数据成员改为私有的；
	int hour;
	int minute;
	int sec;
public://(2)将输入和输出的功能改为由成员函数实现；
	//(3)在类体内定义成员函数。

	void Input(int hour, int minute, int sec)
	{
		this->hour = hour, this->minute = minute, this->sec = sec;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	int a(0), b(0), c(0);
	cin >> a >> b >> c;
	t1.Input(a, b, c);
	t1.ShowTime();
	return 0;
}
