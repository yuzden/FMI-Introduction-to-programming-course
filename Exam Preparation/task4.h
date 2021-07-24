#pragma once
#include <iostream>

/*Да се напише функция на С++, която приема като параметри цяло число N и двумерна числова квадратна
матрица с размери NxN и връща като резултат сумата на елементите над главния ѝ диагонал.*/

int sum(int N, int* matrix) {
	if (matrix == nullptr) {
		return -1;
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			sum += matrix[i * N + j];
		}
	}
	return sum;
}