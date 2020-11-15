#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> vector1(n);
	double sum = 0;
	vector<int> index(0);

	for (int i = 0; i < n; i++) {
		cin >> vector1[i];
		sum += vector1[i];
	}
	double average = sum / n;
	for (int i = 0; i < n; i++) {
		if (vector1[i] > average) {
			index.push_back(i);
		}
	}
	return 0;
}