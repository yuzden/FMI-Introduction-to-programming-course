#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;

	int arr1[array_size];
	int arr2[array_size];
	int sum = 0;

	for (int i = 0; i < array_size; i++) {
		sum += arr1[i] * arr2[2];
	}
	return 0;
}