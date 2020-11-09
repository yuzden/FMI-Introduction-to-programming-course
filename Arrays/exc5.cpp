#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;
	int arr[array_size];

	int max_value = INT16_MIN;
	int max_number;

	for (int i = 0; i < array_size; i++) {
		if (arr[i] > max_value) {
			max_value = arr[i];
			max_number = i;
		}
	}
	cout << max_value << " " << max_number;
	return 0;
}