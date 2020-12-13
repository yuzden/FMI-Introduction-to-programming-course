#include<iostream>
#include<vector>

using namespace std;

int fib(int x) {
	if (x == 1 || x == 0) {
		return x;
	}else {
		return fib(x - 1) + fib(x - 2);
	}
}

int main() {
	int i = 0, x;
	cin >> x;
	vector <int> numbers;
	while (i < x) {
		numbers.push_back(fib(i));
		i++;
	}
	cout << numbers[numbers.size() - 1];
	return 0;
}