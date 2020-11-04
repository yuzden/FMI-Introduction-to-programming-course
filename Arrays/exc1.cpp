#include <iostream>

using namespace std;

int main() {
	const int arr_size = 50;
	double arr[arr_size];
	int grades = 0;
	int counter_grades = 0;

	cin >> grades;
	for (int i = 0; i <= grades-1; i++) {
		cin >> arr[i];
		counter_grades += arr[i];
	}
	double average_grade = (double)counter_grades / grades;
	cout << average_grade;

	return 0;
}