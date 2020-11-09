#include <iostream>

using namespace std;

int main() {
	const int array_size = 48;

	int arr[array_size];
	int counter = 0;
	int x;

	for (int i = 0; i < array_size; i++) {
		if (arr[i] == x) {
			counter++;
		}
	}
	cout << counter;
	return 0;
}