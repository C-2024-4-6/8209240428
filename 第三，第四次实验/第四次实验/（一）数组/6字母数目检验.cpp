#include<iostream>
#include <cstring>

using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0;s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			counts[s[i] - 97]++;
		}
		if (s[i] >= 65 && s[i] <= 90)
		{
			counts[s[i] - 65]++;
		}
	}
	for (int i = 0;i < 26;i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast <char>(97 + i) << " :" << counts[i] << " times" << endl;
		}
	}
}
int main()
{
	int counts[26] = { 0 };
	char s1[]{ 0 };

	cout << "Enter a string:";
	cin.getline(s1, 1000);//输入字符数组；

	count(s1, counts);
	return 0;
	//在运行后可能报错
	// 	   原因如下：
		//C 风格的字符数组在使用时相对容易出现越界等错误
		//而且编译器有时候可能无法提前检测出所有潜在的问题
		//到运行时才暴露出栈被破坏这样的错误。
		//（但是由于题目要求使用char[]作为形参...）
}