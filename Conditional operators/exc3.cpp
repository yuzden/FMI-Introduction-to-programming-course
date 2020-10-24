#include <iostream>

using namespace std;

int main() {
	int number1, number2;
	cin >> number1 >> number2;
	int subtraction = 0;
	int division = 0;
	int addition = number1 + number2;
	int multiply = number1 * number2;
	if (number1 > number2) {
		subtraction = number1 - number2;
		division = number1 / number2;
	}
	else {
		subtraction = number2 - number1;
		division = number2 / number1;
	}

	if (addition > multiply && addition > subtraction && addition > division) {
		cout << addition;
	}
	else if (multiply > addition && multiply > subtraction && multiply > division) {
		cout << multiply;
	}
	else if (subtraction > addition && subtraction > multiply && subtraction > division) {
		cout << subtraction;
	}
	else if (division > addition && division > multiply && division > subtraction) {
		cout << division;
	}
	return 0;
}
