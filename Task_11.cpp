#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RUS");

	int k;
	cout << "������� ����� K: ";
	cin >> k;
	cout << "�� ����� " << k << " ";
	if (k >= 11 && k <= 15) {
		cout << "������";
	}
	else {
		if (k == 1) {
			cout << "����";
		}
		else {
			if (k % 10 == 1)
				cout << "����";
			if ((k % 10 == 2) || (k % 10 == 3) || (k % 10 == 4))
				cout << "�����";
			if ((k % 10 >= 5 && k % 10 < 10) || (k % 10 == 0))
				cout << "������";
		}
		
	}
	cout << "." << endl;


	return 0;
}