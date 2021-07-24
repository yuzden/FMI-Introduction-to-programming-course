#pragma once
/*Да се напише функция на С++, която приема като параметри параметри цяло число N и двумерна числова
квадратна матрица А с размери NxN и връща като резултат транспонираната матрица на А.*/

int** MatrixT(int N, int* matrix ) {
	int** matrixT = new int* [N];
	for (int i = 0; i < N; i++) {
		matrixT[i] = new int[N];
	}

	if (matrix == nullptr) {
		return matrixT;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrixT[i][j] = matrix[j * N + i];
		}
	}
	return matrixT;
}