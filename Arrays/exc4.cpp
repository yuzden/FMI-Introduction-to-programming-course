#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int number = 0;
	int max_value = INT16_MIN;
	int min_value = INT16_MAX;
	
	for (int i = 0; i < n; i++) {
		cin >> number; 

		if (number > max_value) {
			max_value = number;
		}
		if (number < min_value) {
			min_value = number;
		}
	}
	cout << max_value

	return 0;
}