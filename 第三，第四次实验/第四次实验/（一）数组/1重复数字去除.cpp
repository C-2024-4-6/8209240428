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
	//����ԭ��Ϊ�Ա�ÿһ�������е�Ԫ�أ������ظ�n++,�ظ���ִ��n++
	//���ͨ���ж�n�Ĵ�С������ж��Ƿ�Ϊ�ظ�����
	int m = 0;//���ظ����ֵĸ���
	for (int i = 0;i < 10;i++)
	{
		int n = 0;//��ʼ���жϼ�������
		for (int j = 0;j < 10;j++)
		{
			if (a[i] == a[j])
				n++;
		}
		if (n == 1)
		{
			b[m] = a[i];//�����ظ���������b���飬��ʹ����������һ��
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