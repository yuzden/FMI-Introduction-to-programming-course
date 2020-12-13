#include<iostream>
#include<vector>

using namespace std;
/**C(0, n) = 1
C(m, 0) = 1
C(n, n) = 1
C(m, n) = C(m - 1, n - 1) + C(m - 1, n)
*/
double binom(double m, double n) {
	if (m == 0 || n == 0 || m == n) {
		return 1;
	}
	return binom(m - 1, n - 1) + binom(m - 1, n);
}

int main() {
	double m,n;
	cin >> m >> n;
	cout << binom(m, n);

	return 0;
}