#include <iostream>

using namespace std;

int main() {

	int first, second, third;
	cout << "Please, enter three numbers: ";
	cin >> first >> second >> third;

	if (first == second || second == third || first == third)
		cout << "Yes" << endl;
	else 
		cout << "Similar numbers not founded" << endl;

	return 0;
}
