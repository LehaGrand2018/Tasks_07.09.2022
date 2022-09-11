#include <iostream>

using namespace std;

int main() {

	int number;
	cout << "Please, enter a number: ";
	cin >> number;

	if (number == 12 || number == 1 || number == 2)
		cout << "Winter";
	if (number == 3 || number == 4 || number == 5)
		cout << "Spring";
	if (number == 6 || number == 7 || number == 8)
		cout << "Summer";
	if (number == 9 || number == 10 || number == 11)
		cout << "Autumn";

	return 0;
}