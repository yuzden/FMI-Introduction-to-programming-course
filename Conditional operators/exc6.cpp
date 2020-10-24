#include <iostream>

using namespace std; 

int main() {
	double number;
	cin >> number;

	if ((int)number == number) {
		if ((int)number % 2 == 0) {
			cout << "Even integer" << endl;
		}
		else {
			cout << "Odd integer" << endl;
		}
	}else {
		if (number > 0) {
			cout << "Positive rational" << endl;
		}
		else {
			cout << "Negative rational" << endl;
		}
	}
	return 0;
}