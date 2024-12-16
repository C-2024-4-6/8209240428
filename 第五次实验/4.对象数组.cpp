#include<iostream>
using namespace std;
class Students
{
private:
	int num[5][2];//其中一个用来存储学号，一个用来存储成绩：
	int maxstudentid;
public:
	void max()
	{
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 5;j++)
			{
				if (num[j][1] > num[i][1])
				{
					maxstudentid = num[j][0];
				}
			}

		}
		cout << "成绩最高者的学号为：" << maxstudentid << endl;

	}
	Students(int num[5][2])
	{
		for (int i = 0;i < 5;i++)
		{
			this->num[i][0] = num[i][0];
			this->num[i][1] = num[i][1];
		}
		this->maxstudentid = num[0][0];
	}
};
int main()
{
	int num[5][2];
	for (int i = 0;i < 5;i++)
	{
		cin >> num[i][0] >> num[i][1];
	}
	Students s1(num);
	s1.max();
	return 0;

}