#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i = 1;
	do { i++; } while (!(num % i == 0));
	if (i == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	cout << "������һ�����֣��һ�Ϊ���ж��Ƿ�Ϊ������" << endl;
	cin >> a;
	if (is_prime(a))
	{
		cout << a << "��������" << endl;
	}
	else {
		cout << a << "����������" << endl;
	}

	cout << "�һ�Ϊ���г�100���ڵ�����Ŷ��" << endl;

	int t(0);
	for (int i(2);i <= 100/*���Ի��ɱ����*/;i++)
	{
		if (is_prime(i))
		{
			cout << i << '\t';
			t++;
		}
		if (t % 10 == 0)
		{
			cout << endl;
		}

	}
	return 0;


}