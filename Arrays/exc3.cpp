#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;

	int arr1[array_size];
	int arr2[array_size];
	int sum = 0;
	int multiplication = 0;

	for (int i = 0; i < array_size; i++) {
		for (int j = 0; j < array_size; j++) {
			if (i == j) {
				multiplication = arr1[i] * arr2[j];
				sum += multiplication;
			}
		}
	}
	return 0;
}