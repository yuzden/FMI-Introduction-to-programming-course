#pragma once
#include <iostream>
/*Да се напише функция на С++, която отпечатва в конзолата запълнен правоъгълник с размерност NxM, 
където N, M и символът за отпечатване на правоъгълника се предават като параметри на функцията. 
Правоъгълникът да е центриран (приема се, че конзолата има 25 реда и 80 символа на ред).*/

void printRectangle(int N, int M, char str) {
	const int N_max = 25;
	const int M_max = 80;

	int X = (N_max - N) / 2;
	int Y = (M_max - M) / 2;
	for (int i = 0; i < X; i++) {
		std::cout << '\n';
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < Y; j++) {
			std::cout << ' ';
		}
		for (int k = 0; k < M; k++) {
			std::cout << str;
		}
		std::cout << '\n';
	}
	for (int i = 0; i < X; i++) {
		std::cout << '\n';
	}
}