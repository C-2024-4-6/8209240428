//getchar����������
#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters(0), space(0), digit(0), other(0);
	cout << "������һ���ַ����ҽ�Ϊ��ͳ���ַ�������Ŀ��" << endl;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letters++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	cout << "��ĸ����" << letters << "	�ո�����" << space << "		��������" << digit << "		�����ַ�����" << other << endl;

	system("pause");
	return 0;
}
