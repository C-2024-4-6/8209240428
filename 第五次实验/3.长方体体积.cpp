#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int height;
public:
	Cuboid(int a, int b, int c)
	{
		this->length = a, this->width = b, this->height = c;
	}
	int ShowVolume()
	{
		return length * width * height;
	}
};
int main()
{
	int l1(0), w1(0), h1(0), l2(0), w2(0), h2(0), l3(0), w3(0), h3(0);
	cout << "��ֱ���������������ĳ���ߣ��һ�Ϊ������������" << endl;
	cout << "��һ����";
	cin >> l1 >> w1 >> h1;
	Cuboid c1(l1, w1, h1);
	cout << endl;
	cout << "�ڶ�����";
	cin >> l2 >> w2 >> h2;
	Cuboid c2(l2, w2, h2);
	cout << endl;
	cout << "��������";
	cin >> l3 >> w3 >> h3;
	Cuboid c3(l3, w3, h3);
	cout << endl;

	cout << "����ֱ�Ϊ��" << c1.ShowVolume() << "," << c2.ShowVolume() << "," << c3.ShowVolume() << endl;
	return 0;

}