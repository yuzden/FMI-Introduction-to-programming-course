#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;

	char arr[array_size];
	int counter = 0;

	for (int k = 0; k < array_size; k++) {
		cin >> arr[k];
	}
	for (int i = 0; i < array_size / 2; i++) {
		for (int j = array_size; j >= array_size / 2; j--) {
			if (arr[i] == arr[j]) {
				counter++;
			}
		}
	}
	if (counter == array_size / 2) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}