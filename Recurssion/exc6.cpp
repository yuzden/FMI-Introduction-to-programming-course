#include<iostream>
#include<vector>

using namespace std;

// Да се напише рекурсивна функция, която отпечатва в обратен ред цифрите
//на дадено цяло положително число.

int reverse(int num) {
	static int temp = 0;
	if (num == 0) {
		return 0;
	}
	temp = temp * 10;
	temp = temp + num % 10;
	reverse(num/10);
	return temp;
}

int main() {
	int number;
	cin >> number;
	cout << reverse (number);
	return 0;
}