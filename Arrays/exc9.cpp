#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;

	int arr[array_size];

	for (int i = 1; i < array_size; i++) {
		if (arr[i-1] - arr[i] < 0) {
			cout << "yes";
			break;
		}
		else {
			cout << "no";
			break;
		}
	}
	return 0;
}