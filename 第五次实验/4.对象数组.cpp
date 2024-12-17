#include<iostream>
using namespace std;
class Student
{
private:
	int id;
	int score;

public:
	Student(int id, int score)
	{
		this->id = id, this->score = score;
	}
};
int max(Student* s)
{
	int temp = 0;
	for (int i = 0;i < 5;i++)
	{
		if (s[i].score > temp)
			temp = s[i].score;
	}

	return temp;
}

int main()
{
	Student s[5];
	int id0, score0;
	for (int i = 0;i < 5;i++)
	{
		cin >> id0 >> score0;
		s[i] = Student(id0, score0);
	}

	cout << "最高成绩的学生ID为：" << max(s) << endl;
}