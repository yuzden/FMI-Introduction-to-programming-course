#include <iostream>

using namespace std;

int main() {
	const int N = 5;
	const int M = 7;

	int arr1[N] = { 1, 3, 6, 7, 8 };
	int arr2[M] = { 2, 4, 5, 7, 9, 11, 12 };
	int arr3[N + M];
	int counter = N; // 

	for (int i = 0; i < N; i++) {
		arr3[i] = arr1[i];
	}
	for (int m = 0; m < M; m++) {
		arr3[counter] = arr2[m];
		counter++;
	}
	for (int k = 0; k < N + M; k++) {
		cout << arr3[k] << " ";
	}
	return 0;
}