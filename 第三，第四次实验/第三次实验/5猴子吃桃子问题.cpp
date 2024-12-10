#include<iostream>
using namespace std;
int eat_peach_monkey(int day)
{
	int num;
	if (day == 1)
	{
		num = 1;
	}
	else
	{
		num = (eat_peach_monkey(day - 1) + 1) * 2;
	}
	return num;
}
int main()
{
	int a = (10);
	//cin >> a;
	cout << "一开始一共有" << eat_peach_monkey(a) << "个桃子！" << endl;
	return 0;
}