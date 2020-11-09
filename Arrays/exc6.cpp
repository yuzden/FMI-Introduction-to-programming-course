#include <iostream>

using namespace std;

int main() {
	const int array_size = 100;

	int arr1[array_size];
	int arr2[array_size];
	int counter = 0;

	for (int i = 0; i < array_size; i++) {
		for (int j = 0; j < array_size; j++) {
			if (arr1[i] == arr2[j]) {
				counter++;
			}
		}
	}
	return 0;
}