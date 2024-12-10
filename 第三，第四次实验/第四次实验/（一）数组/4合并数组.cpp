#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int a(0), b(0);

	for (int i = 0;i < (size1 + size2);i++)//进行数组合并的循环操作：
	{
		if (list1[a] > list2[b])
		{
			list3[i] = list2[b];
			if ((b + 1) >= size2)//判断b数组是否输入完毕
			{
				i++;

				for (;i < (size1 + size2);i++)//若输入完毕，则剩下的a数组全盘输入！
				{
					list3[i] = list1[a];
					a++;
				}
			}
			else b++;
		}
		else
		{
			list3[i] = list1[a];
			if ((a + 1) >= size1)//判断a数组是否输入完毕
			{
				i++;

				for (;i < (size1 + size2);i++)//若输入完毕，则剩下的b数组全盘输入！
				{
					list3[i] = list2[b];
					b++;
				}
			}
			else a++;
		}
	}
	for (int i = 0;i < (size1 + size2);i++)//输出合并后的数组：
	{
		cout << list3[i] << " ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
}
int main()
{
	int size1, size2;
	int list1[80], list2[80], list3[160];
	cout << "Enter list1:" << endl;
	cin >> size1;
	for (int i = 0;i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:" << endl;
	cin >> size2;
	for (int i = 0;i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << "The merged list is:" << endl;
	merge(list1, size1, list2, size2, list3);
	return 0;
}