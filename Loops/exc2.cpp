#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n > 1) {
		for (int i = n; i >= 1; i -= 1) {
			cout << i << endl;
		}
	}
	else {
		for (int i = n; i <= 1; i += 1) {
			cout << i << endl;
		}
	}

	return 0;
}
	
	
