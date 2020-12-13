#include<iostream>
#include<vector>

using namespace std;

double my_pow(double x, double n) {
	if (n == 0) {
		return 1;
	}
	if (n > 0) {
		return x*my_pow(x,n-1);
	}
	return 1/my_pow(x,-n);
}

int main() {
	double x,n;
	cin >> x >> n;
	cout << my_pow(x, n);

	return 0;
}