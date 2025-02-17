#include<iostream>
#include<cstring>
using namespace std;
//先设计一个函数，读取s1中字符的个数
int charnumber(const char* s1)
{
	int n(0);
	for (int i = 0;s1[i] != '\0';i++)
	{
		n++;
	}
	return n;
}
//再设计函数读取子串
int indexOf(const char* s1, const char* s2)
{
	//空指针检验
	if (s1 == nullptr || s2 == nullptr)
	{
		return -1;
	}
	int n(0);//重复字符数计数：
	for (int i = 0;s2[i] != '\0';i++)
	{
		if (s1[n] == s2[i])
		{
			n++;
			if (n == charnumber(s1))
			{
				return (i - n + 1);
			}
		}
		else
			n = 0;

	}
	return -1;
}
int main()
{
	char s1[1000]{ 0 };
	char s2[1000]{ 0 };
	cout << "Enter the first string:";
	cin.getline(s1, 1000);

	cout << "Enter the second string: ";
	cin.getline(s2, 1000);

	cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is:" << indexOf(s1, s2);
}
