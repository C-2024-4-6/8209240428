#include<iostream>
#include<cmath>

using namespace std;

int parseHex(const char* const hexString)
{
	int x = strlen(hexString);//16����λ��
	int sum = 0;
	for (int i = 0;i < strlen(hexString);i++)
	{
		int t = 0;//�����洢��
		if (hexString[i] >= 65 && hexString[i] <= 69)//��д��ĸת��
		{
			t = hexString[i] - 65 + 10;
		}
		else if (hexString[i] >= 97 && hexString[i] <= 102)//Сд��ĸת��
		{
			t = hexString[i] - 97 + 10;
		}
		else if (hexString[i] >= 48 && hexString[i] <= 57)
		{
			t = (hexString[i] - 48);
		}
		else
		{
			cout << "�����˴����16�����ַ�" << endl;
			t = 0;
			break;
		}
		sum += (pow(16, x - i - 1) * t);
	}
	return sum;
}
int main()
{
	char hexstring[1000]{ 0 };

	cout << "������һ��16���Ƶ������ҽ�Ϊ��ת��Ϊʮ���ƣ�" << endl;
	cin >> hexstring;
	cout << "ת������ǣ�" << parseHex(hexstring) << endl;
	return 0;
}