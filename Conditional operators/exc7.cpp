#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	bool is_a = b + c > a;
	bool is_b = a + c > b;
	bool is_c = a + b > c;
	if (is_a && is_b && is_c) {
		cout << "true";
	}
	else {
		cout << "false";
	}

	return 0;
}
