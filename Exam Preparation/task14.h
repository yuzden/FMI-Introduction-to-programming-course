#pragma once
/*Да се напише функция на C++, със сигнатура
int DigitPos(long num, int k), която връща като резултат k - тата цифра на числото num
или - 1, ако такава не съществува.Брои се от ляво на дясно и се започва от 1*/

int DigitPos(long num, int k) {
	int number = -1;
	int size = 0;
	int tmp = num;
	while (tmp > 0) {
		tmp /= 10;
		size++;
	}
	if (k > size) {
		return -1;
	}
	while (size >= k) {
		number = num % 10;
		size--;
		num /= 10;
	}
	return number;
}