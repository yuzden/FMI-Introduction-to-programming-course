#include <iostream>

using namespace std;

int main() {
	const int array_size = 100;

	int arr[array_size];
	int x;

	for (int i = 0; i < array_size; i++) {
		if (arr[i] == x) {
			cout << "yes";
			break;
		}
	}
	return 0;
}