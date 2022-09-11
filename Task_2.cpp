#include <iostream>

using namespace std;

int main() {
	int first, second, third;
	cout << "Please, enter three numbers: ";
	cin >> first >> second >> third;

	if (first > second && first > third)
		cout << first;
	else
		if (second > third)
			cout << second;
		else
			cout << third;

	return 0;
}