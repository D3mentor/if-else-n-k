#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float n;
	int k;

	cout << "������� ��������� ��� ����������: ";
	cin >> n;

	if (n < 10) {
		cout << "��� ����� ������ 10" << endl;
		k = 0;
	}
	else if (n == 10) {
		cout << "��� ����� 10" << endl;
		k = 10;
	}
	else {
		cout << "��� ����� ������ 10" << endl;
		k = 1;
	}

	cout << "k = " << k << endl;
	exit(1);
	return 0;

}