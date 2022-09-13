#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RUS");

	int k;
	cout << "Введите число K: ";
	cin >> k;
	cout << "Мы нашли " << k << " ";
	if (k >= 11 && k <= 15) {
		cout << "грибов";
	}
	else {
		if (k == 1) {
			cout << "гриб";
		}
		else {
			if (k % 10 == 1)
				cout << "гриб";
			if ((k % 10 == 2) || (k % 10 == 3) || (k % 10 == 4))
				cout << "гриба";
			if ((k % 10 >= 5 && k % 10 < 10) || (k % 10 == 0))
				cout << "грибов";
		}
		
	}
	cout << "." << endl;


	return 0;
}