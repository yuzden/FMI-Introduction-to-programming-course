#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> vector(n);
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> vector[i];
		sum += vector[i];
	}
	cout << (double)sum / n << endl;

	return 0;
}