//getchar函数的运用
#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters(0), space(0), digit(0), other(0);
	cout << "请输入一串字符，我将为你统计字符类型数目！" << endl;
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
	cout << "字母数：" << letters << "	空格数：" << space << "		数字数：" << digit << "		其他字符数：" << other << endl;

	system("pause");
	return 0;
}
