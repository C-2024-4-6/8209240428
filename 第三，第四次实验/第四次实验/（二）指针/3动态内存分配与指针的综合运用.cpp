/*实验题目
主程序中建立一动态数组（使用new），（√）
数组元素及元素个数由键盘输入，（√）
动态调试观察指针及指针指向的内容；（√）
设计一个函数对数组由小到大排序；（√）
主程序中用指针方式输出数组元素；（√）
最后释放数组内存（delete）。（√）
*/
#include<iostream>
using namespace std;
void taketurn(int n, int* ip)
{
	for (int i = 0;i < n;i++)
	{
		for (int t = i + 1;t < n;t++)
		{
			if (*(ip + i) >= *(ip + t))//比较两元素大小，将小的排在前面！
			{
				int s = 0;//交换中间变量；
				s = *(ip + t);
				*(ip + t) = *(ip + i);
				*(ip + i) = s;
			}
		}
	}
}
int main()
{
	int n;
	cout << "请输入数组存储元素的个数" << endl;
	cin >> n;
	int* ip = new  int[n];
	cout << "请依次输入数组元素" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> *(ip + i);
	}
	cout << "输入完毕，可以动态调试指针查看输入的第n个数字(输入0可以结束调试)" << endl;
	cout << endl;

	int t = 0;//调试变量
	cin >> t;
	for (;t != 0;)
	{
		if (0 < t && t <= n)
		{
			cout << *(ip + (t - 1)) << endl;
			cout << "再次输入可以再次查询：(输入0可以结束调试)" << endl;
			cout << endl;
			cin >> t;
		}
		else
		{
			cout << "查询的值超出范围，请重试" << endl;
			cin >> t;
		}
	}
	cout << endl;

	cout << "指针调试完毕，正在为您从小到大排序数组元素！" << endl;
	cout << "输出数组：" << endl;
	cout << endl;
	taketurn(n, ip);//调用函数进行排序

	//输出排列完毕的数组
	for (int i = 0;i < n;i++)
	{
		cout << *(ip + i) << '\t';
		if ((i + 1) % 5 == 0)
		{
			cout << endl;
			//五个数据一换行，保持美观；
		}
	}
	delete[]ip;
	return 0;
}