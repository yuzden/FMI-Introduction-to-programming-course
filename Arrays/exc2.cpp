#include <iostream>

using namespace std;

int main() {
	const int array_size = 24;

	int arr1[array_size];
	int sum_positive = 0;
	int counter_negative;

	for (int i = 0; i < array_size; i++) {
		if (arr1[i] > 0) {
			sum_positive += arr1[i];
		}
		else {
			counter_negative++;
		}
	}
	return 0;
}