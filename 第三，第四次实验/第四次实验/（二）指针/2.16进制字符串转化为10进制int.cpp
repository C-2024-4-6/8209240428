#include<iostream>
#include<cmath>

using namespace std;

int parseHex(const char* const hexString)
{
	int x = strlen(hexString);//16进制位数
	int sum = 0;
	for (int i = 0;i < strlen(hexString);i++)
	{
		int t = 0;//辅助存储器
		if (hexString[i] >= 65 && hexString[i] <= 69)//大写字母转化
		{
			t = hexString[i] - 65 + 10;
		}
		else if (hexString[i] >= 97 && hexString[i] <= 102)//小写字母转化
		{
			t = hexString[i] - 97 + 10;
		}
		else if (hexString[i] >= 48 && hexString[i] <= 57)
		{
			t = (hexString[i] - 48);
		}
		else
		{
			cout << "输入了错误的16进制字符" << endl;
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

	cout << "请输入一个16进制的数，我将为你转化为十进制！" << endl;
	cin >> hexstring;
	cout << "转化结果是：" << parseHex(hexstring) << endl;
	return 0;
}