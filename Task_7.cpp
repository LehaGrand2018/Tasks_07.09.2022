#include <iostream>

using namespace std;

int main() {

	int first, second, third, four;
	cout << "Please, enter four numbers: ";
	cin >> first >> second >> third >> four;

	if (first > 5 && second > 5 && third % 6 == 0 && four % 3 > 0)
		cout << "Yes" << endl;
	else
		cout << " No" << endl;

	return 0;
}