//�ֶκ�����if else��������
#include<iostream>
using namespace std;
int main()
{
	cout << "����һ��0~10֮���ʵ����Ϊ����㺯��ֵ" << endl;
	cout << "��Ȼ��Ҳ��������0~10֮�������������" << endl;

	double x(0);
	do {
		cin >> x;
		if (x > 0 && x < 1)
		{
			cout << 3 - 2 * x << endl;
		}
		else if (x >= 1 && x < 5) {
			cout << 2 / (4 * x) + 1 << endl;
		}
		else if
			(x >= 5 && x < 10) {
			cout << x * x << endl;
		}
	} while (x > 0 && x < 10);
	if (x <= 0 || x >= 10) {
		cout << "finsh!" << endl;
	}
	system("pause");
	return 0;
}
