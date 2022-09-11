#include <iostream>

using namespace std;

int main() {

	int first, second, third;
	cout << "Please, enter three numbers: ";
	cin >> first >> second >> third;

	if (first + second == third || second + third == first || first + third == second)
		cout << "Yes" << endl;
	else
		cout << " Not founded" << endl;

	return 0;
}