//������Ŀ������������ѡ���˸���������ʵ�������
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const int MAX = 100;
	int n = 2;
	int sum = 0;
	int i = 1;
	for (i = 1;n <= MAX;i++)
	{
		sum += n;
		n *= 2;
	}
	cout << "ƽ��ÿ�컨�ѣ�" << sum / i * 0.8 << endl;

	system("pause");
	return 0;
}
