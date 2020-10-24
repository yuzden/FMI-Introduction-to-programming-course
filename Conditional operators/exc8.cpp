#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	if (num1 == 0 && num2 == 0 && num3 == 0) {
		cout << num1;
	}
	else {
		if (num1 >= num2 && num1 >= num3 && num2 >= num3) {
			cout << num1 << num2 << num3;
		}
		else if (num1 >= num2 && num1 >= num3 && num2 <= num3) {
			cout << num1 << num3 << num2;
		}
		else if (num2 >= num1 && num2 >= num3 && num1 >= num3) {
			cout << num2 << num1 << num3;
		}
		else if (num2 >= num1 && num2 >= num3 && num1 <= num3) {
			cout << num2 << num3 << num1;
		}
		else if (num3 >= num1 && num3 >= num2 && num1 >= num2) {
			cout << num3 << num1 << num2;
		}
		else if (num3 >= num1 && num3 >= num2 && num1 <= num2) {
			cout << num3 << num2 << num1;
		}
	}
	return 0;
}

	
