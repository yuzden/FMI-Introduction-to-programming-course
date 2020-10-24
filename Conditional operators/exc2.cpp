#include <iostream>

using namespace std;

int main() {
	int number1, number2, number3;
	cin >> number1 >> number2 >> number3;
	
	if (number1 > number2 && number1 > number3) {
		cout << number1;
	}
	else if (number2 > number1 && number2 > number3) {
		cout << number2;
	}
	else if (number3 > number2 && number3 > number1) {
		cout << number3;
	}

	return 0;
}