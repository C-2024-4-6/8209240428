#include<iostream>
using namespace std;
int main()
{
	char num;
	cin >> num;
	if (num >= 97 && num <= 122) {
		cout << static_cast<char>(num - 32) << endl;
	}
	else if (num >= 65 && num <= 90) {
		cout << int(num) << endl;
	}
	return 0;
}
