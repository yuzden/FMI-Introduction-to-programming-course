#include<iostream>
#include<vector>

using namespace std;

int sum(int x) {
	if (x == 0) {
		return 0;
	}
	return x +=sum(x - 1);
}

int main() {
	int x;
	cin >> x;
	cout << sum(x);

	return 0;
}