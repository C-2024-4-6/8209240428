//�����������С����������
//ʹ������֪ʶ�н�ͬ�෽�̵ķ�����
#include<iostream>
using namespace std;
int main()
{
	int n(1);
	int a, b, min(0), max(0);
	cin >> a >> b;
	for (n = 1;!(n % a == 0 && n % b == 0);n++)
	{
		min = n;
	}
	for (n = 2;!(n > a || n > b);n++)
	{
		if (a % n == 0 && b % n == 0)
		{
			max = n;
		}
	}
	cout << "��С������Ϊ" << min + 1 << "	�������Ϊ" << max << endl;

	system("pause");
	return 0;
}