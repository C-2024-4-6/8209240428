//���������߹�ϵ
//���Բ��رȽ����ߴ�С��������򵥵ķ����жϹ��ɹ�ϵ
//ʹ����ѧ�г��õı�������
#include<iostream>
using namespace std;
static int Triangle(double a, double b, double c)
{
	int test = 0;
	if (a + b > c) {
		test++;
	}
	if (a + c > b) {
		test++;
	}
	if (b + c > a) {
		test++;
	}
	if (test == 3) {
		test = 1;
	}
	else {
		test = 0;
	}
	return test;
}
int main()
{
	int a, b, c;
	cout << "���������������߳���" << endl;
	cout << "�һ�Ϊ���ж��ܷ񹹳�������" << endl;
	cout << "(���1Ϊ�ܣ����0Ϊ����)" << endl;
	cin >> a >> b >> c;
	cout << "���Ϊ" << Triangle(a, b, c) << endl;

	system("pause");
	return 0;
}
