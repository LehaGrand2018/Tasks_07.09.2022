#include <iostream>

using namespace std;

int main() {

	int first, second, third, four;
	int number1 = 0, number2 = 0, number3 = 0, number4 = 0;
	cout << "Please, enter four numbers: ";
	cin >> first >> second >> third >> four;

		
	if (first % 2 == 0)
		number1 = first;
	if (second % 2 == 0)
		number2 = second;
	if (third % 2 == 0)
		number3 = third;
	if (four % 2 == 0)
		number4 = four;
	
	if (number1 > number2 && number1 > number3 && number1 > number4)
		cout << number1;
	if (number2 > number1 && number2 > number3 && number2 > number4)
		cout << number2;
	if (number3 > number2 && number3 > number1 && number3 > number4)
		cout << number3;
	if (number4 > number2 && number4 > number3 && number4 > number1)
		cout << number4;
	if (number1 == 0 && number2 == 0 && number3 == 0 && number4 == 0)
		cout << "Number not founded";
	return 0;
}
