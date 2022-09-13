#include <iostream>

using namespace std;

int main() {

	int type;
	bool value1, value2;
	cout << "Input values: ";
	cin >> value1 >> value2;
	if (value1 > 1 || value2 > 1) {
		cout << "Error";
	}
	else {
		cout << "Choose operation: " << endl;
		cout << "1. And " << endl;
		cout << "2. Or " << endl;
		cout << "3. Implication " << endl;
		cout << "4. Equivalence " << endl;
		cout << "Your operation: ";
		cin >> type;


		switch (type)
		{
		case 1:
			if ((value1 == 1 && value2 == 1) || (value1 == 0 && value2 == 0)) {
				cout << "True";
			}
			else {
				cout << "False";
			}
			break;

		case 2:
			if (value1 == 1 || value2 == 1) {
				cout << "True";
			}
			else {
				cout << "False";
			}
			break;

		case 3:
			if ((value1 == 1 && value2 == 1) ||
				(value1 == 0 && value2 == 0) ||
				(value1 == 0 && value2 == 1)) {
				cout << "True";
			}
			else {
				cout << "False";
			}
			break;
		case 4:
			if (value1 == value2) {
				cout << "True";
			}
			else {
				cout << "False";
			}
		};
	};
	
	return 0;
}