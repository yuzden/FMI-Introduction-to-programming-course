#include <iostream>

using namespace std;

int main() {
	const int array_size = 50;

	int arr[array_size];

	for (int i = 0; i < array_size; i++) {
		for(int j = 1; j < array_size;j++){
			if (arr[i] == arr[j]) {
				cout << "No, there are identical elements";
				return 0;
			}
		}
	}
	cout << "yes";
	return 0;
}