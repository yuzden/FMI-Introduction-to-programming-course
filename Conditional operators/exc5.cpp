#include <iostream>

using namespace std; 

int main() {
	int number;
	cin >> number;
	int third = number % 10;
	int number1 = number / 10;
	int second = number1 % 10;
	int first = number1 / 10;

	if (first == second || first == third || second == third) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;

}