#include<iostream>
#include<string>
using namespace std;
//�����һ����������ȡs1���ַ��ĸ���
int charnumber(const char s1[])
{
	int n(0);
	for (int i = 0;s1[i] != '\0';i++)
	{
		n++;
	}
	return n;
}
//����ƺ�����ȡ�Ӵ�
int indexOf(const char s1[], const char s2[])
{
	//��ָ�����
	if (s1 == nullptr || s2 == nullptr)
	{
		return -1;
	}
	int n(0);//�ظ��ַ���������
	for (int i = 0;s2[i] != '\0';i++)
	{
		if (s1[n] == s2[i])
		{
			n++;
			if (n == charnumber(s1))
			{
				return i;
			}
		}
		else
			n = 0;

	}
	return -1;
}
