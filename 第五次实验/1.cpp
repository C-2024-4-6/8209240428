#include<iostream>
//��д��
using namespace std;
class Time
{
private:  //(1)�����ݳ�Ա��Ϊ˽�еģ�
	int hour;
	int minute;
	int sec;
public://(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
	//(3)�������ڶ����Ա������

	void Input(int hour, int minute, int sec)
	{
		this->hour = hour, this->minute = minute, this->sec = sec;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	int a(0), b(0), c(0);
	cin >> a >> b >> c;
	t1.Input(a, b, c);
	t1.ShowTime();
	return 0;
}
