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
	cin.getline(s1, 1000);//�����ַ����飻

	count(s1, counts);
	return 0;
	//�����к���ܱ���
	// 	   ԭ�����£�
		//C �����ַ�������ʹ��ʱ������׳���Խ��ȴ���
		//���ұ�������ʱ������޷���ǰ��������Ǳ�ڵ�����
		//������ʱ�ű�¶��ջ���ƻ������Ĵ���
		//������������ĿҪ��ʹ��char[]��Ϊ�β�...��
}