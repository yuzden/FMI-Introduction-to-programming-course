#pragma once
/*Да се напише функция на С++, със сигнатура double calculateMatrix(int** matr,
int m), която приема като параметър квадратна матрица с размерност m и
връща като резултат сумата на елементите които са по двата и диагонала.*/

double calculateMatrix(int** matr, int m) {
	double sum1 = 0;
	for (int i = 0; i < m; i++) {
		sum1 += matr[i][i];
	}

	double sum2 = 0;
	int j = 0;
	for (int i = m - 1; i >= 0; i--) {
		sum2 += matr[i][j];
		j++;
	}
	return sum1 + sum2;
}