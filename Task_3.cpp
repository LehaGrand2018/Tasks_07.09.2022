#include <iostream>

using namespace std;

int main() {

	int first, second, third;

	cout << "Please, enter tree numbers: ";
	cin >> first >> second >> third;
	
	if (second > third) {
		cout << second << " ";
		if (first < third)
			cout << third;
		else
			cout << first;
	}
	else {
		cout << third << " ";
		if (first > second) {
			cout << first;
		}
		else {
			cout << second;
		}
	}


	return 0;
}


