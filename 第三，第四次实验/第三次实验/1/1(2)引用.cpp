#include<iostream>
using namespace std;
int big(0), small(0);

//������
void max_min_(int m, int n)
{
	int& t = big;
	for (int i = 1;(i <= m || i <= n);i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			t = i;
		}
	}
	for (int i = 1;!(i % m == 0 && i % n == 0);i++)
	{
		small = i;
	}
}




int main()
{
	int a, b;
	cout << "�������������һ�Ϊ��������ǵ������������С��������" << endl;
	cin >> a >> b;
	max_min_(a, b);
	cout << "�����������С�������ֱ�ΪΪ��" << big << "��" << small << endl;

	return 0;
}