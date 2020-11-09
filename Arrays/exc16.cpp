#include <iostream>

using namespace std;

int main() {
	int a = 0;
	cin >> a;

	const int array_size = 20;
	int arr[array_size];

	for (int i = 0; i < array_size; i++) {
		if (a % 2 == 0) {
			arr[i] = 0;
			a = a / 2;
		}
		else {
			arr[i] = 1;
			a = a / 2;
		}
	}
	for (int j = array_size-1; j >= 0; j--) {
		cout << arr[j];
	}
	return 0;
}