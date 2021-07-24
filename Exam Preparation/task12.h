#pragma once

/*Да се напише функция на С++, със сигнатура int NumCalc(long num, int k, int l),
която връща като резултат сумата на k-тата и l-тата цифра на num, или -1 при
некоректни входни данни.*/

int sizeNum(long num) {
	int counter = 0;
	do {
		num /= 10;
		counter++;
	} while (num != 0);
	return counter;
}

int NumCalc(long num, int k, int l) {
	int size = sizeNum(num);
	if (k > size || l > size) {
		return -1;
	}

	int counter = 0;
	int k_num = 0;
	int temp = num;
	int temp_size = size;
	while (temp_size >= k) {
		k_num = temp % 10;
		temp_size--;
		temp /= 10;
	}

	int l_num = 0;
	while (size >= l) {
		l_num = num % 10;
		size--;
		num /= 10;
	}
	return k_num + l_num;
}