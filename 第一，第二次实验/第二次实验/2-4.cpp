#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "�ӷ�������Ϊ" << a + b << endl;
	cout << "����������Ϊ" << a - b << endl;
	cout << "�˷�������Ϊ" << a * b << endl;
	if (b == 0) {
		cout << "��������ʱ��ĸ��ӦΪ�㣡" << endl;
	}
	else {
		cout << "����������Ϊ" << a / b << endl;
	}
	cout << "ȡ��������Ϊ" << a % b << endl;

	system("pause");
	return 0;
}
