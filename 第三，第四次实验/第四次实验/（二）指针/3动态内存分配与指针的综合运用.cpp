/*ʵ����Ŀ
�������н���һ��̬���飨ʹ��new�������̣�
����Ԫ�ؼ�Ԫ�ظ����ɼ������룬���̣�
��̬���Թ۲�ָ�뼰ָ��ָ������ݣ����̣�
���һ��������������С�������򣻣��̣�
����������ָ�뷽ʽ�������Ԫ�أ����̣�
����ͷ������ڴ棨delete�������̣�
*/
#include<iostream>
using namespace std;
void taketurn(int n, int* ip)
{
	for (int i = 0;i < n;i++)
	{
		for (int t = i + 1;t < n;t++)
		{
			if (*(ip + i) >= *(ip + t))//�Ƚ���Ԫ�ش�С����С������ǰ�棡
			{
				int s = 0;//�����м������
				s = *(ip + t);
				*(ip + t) = *(ip + i);
				*(ip + i) = s;
			}
		}
	}
}
int main()
{
	int n;
	cout << "����������洢Ԫ�صĸ���" << endl;
	cin >> n;
	int* ip = new  int[n];
	cout << "��������������Ԫ��" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> *(ip + i);
	}
	cout << "������ϣ����Զ�̬����ָ��鿴����ĵ�n������(����0���Խ�������)" << endl;
	cout << endl;

	int t = 0;//���Ա���
	cin >> t;
	for (;t != 0;)
	{
		if (0 < t && t <= n)
		{
			cout << *(ip + (t - 1)) << endl;
			cout << "�ٴ���������ٴβ�ѯ��(����0���Խ�������)" << endl;
			cout << endl;
			cin >> t;
		}
		else
		{
			cout << "��ѯ��ֵ������Χ��������" << endl;
			cin >> t;
		}
	}
	cout << endl;

	cout << "ָ�������ϣ�����Ϊ����С������������Ԫ�أ�" << endl;
	cout << "������飺" << endl;
	cout << endl;
	taketurn(n, ip);//���ú�����������

	//���������ϵ�����
	for (int i = 0;i < n;i++)
	{
		cout << *(ip + i) << '\t';
		if ((i + 1) % 5 == 0)
		{
			cout << endl;
			//�������һ���У��������ۣ�
		}
	}
	delete[]ip;
	return 0;
}