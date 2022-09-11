#include <iostream>

using namespace std;

int main() {
	int first, second;
	cout << "Please, enter two numbers: ";
	cin >> first >> second;
	if (first > second)
		cout << first << " > " << second;
	else
		cout << second << " > " << first;
	return 0;
}