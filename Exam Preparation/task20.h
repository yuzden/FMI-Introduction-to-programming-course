#pragma once
/*Да се напише функция на С++, със сигнатура long ConvertNum(long&), която
преобразува подаденото като параметър число в същото число, но
прочетено наобратно.*/

long ConvertNum(long& num) {
	long reverse_number = 0;
	while (num != 0) {
		long digit = num % 10;
		reverse_number = reverse_number * 10 + digit;
		num /= 10;
	}
	num = reverse_number;
	return num;
}
