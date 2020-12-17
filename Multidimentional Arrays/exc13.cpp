#include<iostream>
#include<vector>
using namespace std;
/**Триъгълна матрица наричаме такава квадратна матрица, която има само нули под или 
над главния или вторичния си диагонал.
Даден е двумерен масив с nxn елемента. Да се провери дали е триъгълна матрица..*/

int sum(int x) {
	if (x == 0) {
		return 0;
	}
	return x+sum(x - 1);
}
bool isTriangle(vector <vector<int>> matrix, int n) {
	int counter = 0;
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = i + 1; j < matrix.size(); j++) {
			if (matrix[i][j] == 0) {
				counter++;
			}
		}
	}
	if (sum(n) - n == counter) {
		return 1;
	}

	for (int i = matrix.size() - 1; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			if (matrix[i][j] == 0) {
				counter++;
			}
		}
	}
	if (sum(n) - n == counter) {
		return 1;
	}

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = i + 1; j < matrix.size(); j++) {
			if (matrix[j][i] == 0) {
				counter++;
			}
		}
	}
	if (sum(n) - n == counter) {
		return 1;
	}
	for (int i = matrix.size() - 1; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			if (matrix[j][i] == 0) {
				counter++;
			}
		}
	}
	if (sum(n) - n == counter) {
		return 1;
	}
}
int main() {
	int n = 0;
	cin >> n;
	vector <vector<int>> matrix(n);
	int temp;
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix.size(); j++) {
			cin >> temp;
			matrix[i].push_back(temp);
		}
	}
	if (isTriangle) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}