#include<iostream>
using namespace std;
int main()
{
	int a[10]{ 0 }, b[10]{ 0 };
	cout << "Enter ten numbers:";
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	//检索原理为对比每一个数组中的元素，若不重复n++,重复不执行n++
	//最后通过判断n的大小来间接判断是否为重复数字
	int m = 0;//不重复数字的个数
	for (int i = 0;i < 10;i++)
	{
		int n = 0;//初始化判断计数变量
		for (int j = 0;j < 10;j++)
		{
			if (a[i] == a[j])
				n++;
		}
		if (n == 1)
		{
			b[m] = a[i];//将不重复的数输入b数组，并使计数变量加一；
			m++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0;i < m;i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}