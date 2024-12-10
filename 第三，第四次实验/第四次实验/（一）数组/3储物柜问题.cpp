#include<iostream>
using namespace std;
/*事实上，根据实数理论，本题目题意可知
非完全平方数的因数是成对存在的，因此经过偶数次操作，
储物柜门状态必然和第一位同学操作完一致；
完全平方数的因数总是奇数个，因此处于完全平方数的储物柜
一定只受到奇数次操作！即状态与第一位同学操作完相反！
由此可以（-面向答案编程-划掉）简化代码：
（注意s2是从L2开始操作的，故要+1）
int main ()
{
	bool L[100]{1}
	for (int i=1;i<=10;i++)
	{
		L[(i*i)]=!L[(i*i)]
	}
	for (int i = 1;i <= 100;i++)
	{
		cout << L[i - 1] << " ";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}
*/
int main()
{
	bool L[100]{ 0 };
	//第一个学生打开所有储物柜
	for (int i = 0;i < 100;i++)
	{
		L[i] = 1;
	}
	//第二个学生开始对储物柜的操作：
	for (int s = 1;s < 100;s++)
	{
		for (int n = s;n < 100;n += s)
		{
			L[n] = !L[n];
		}
	}
	//输出所有柜子的状态（1代表开，0代表关，每10个换一行）
	for (int i = 1;i <= 100;i++)
	{
		cout << L[i - 1] << " ";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}