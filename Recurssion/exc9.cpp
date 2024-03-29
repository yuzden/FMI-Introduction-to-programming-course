﻿#include<iostream>

using namespace std;
//Съставете рекурсивна подпрограма, 
//която намира броя на цифрите на дадено цяло положително число.


int count_digits(int num) {
	if (num <= 0) {
		return 0;
	}
	return 1 + count_digits(num/ 10);
}

int main() {
	int number;
	cin >> number;
	cout << count_digits(number);
	return 0;
}