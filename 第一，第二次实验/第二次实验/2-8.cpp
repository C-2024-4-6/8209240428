//ƽ�����ĵ�������
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float radical(float a)
{
	//cout <<setprecicsion(n);(����nΪλ����ʾ)
	float k = a;
	if (a > 0)
	{
		for (int i = 1;!(fabs(k - 0.5 * (k + a / k) <= 1e-5));i++)
		{
			k = 0.5 * (k + a / k);
		}
	}
	else if (a < 0)
	{
		k = radical(-a);
		cout << �� "������Ϊ������Ϊ��ת��Ϊ������ʽʡ����������λi��" ��
	}
	else {
		k = 0;
	}
	return k;
}
int main()
{
	cout << radical(2) << endl;
	cout << radical(-2) << endl;
	cout << radical(0) << endl;


	system("pause");
	return 0;
}
//��ͨ���޸�fabs������ֵ���������1e-5��nֵ����������