#include<iostream>
using namespace std;
//�����������
int max_(int m, int n)
{
	int t = 0;
	for (int i = 1;(i <= m || i <= n);i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			t = i;
		}
	}
	return t;

}

int main()
{
	int a, b;
	cout << "�������������һ�Ϊ��������ǵ����������" << endl;
	cin >> a >> b;
	cout << "�������Ϊ��" << max_(a, b) << endl;
	return 0;
}