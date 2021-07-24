#pragma once
/*. Да се напише функция на С++, със сигнатура int AnalyzeArray(int arr[], int l),
където l е дължината на масива, която да връща 1, ако масивът може да бъде
разделен на две части, с равни суми на елементите им и 0 - в противен
слувай. Функцията да връща -1, при невалидни входни данни.
*/

int AnalyzeArray(int arr[], int l) {
	int half = l / 2;
	int sum1 = 0;
	for (int i = 0; i < half; i++) {
		sum1 += arr[i];
	}

	int sum2 = 0;
	for (int i = half + 1; i < l; i++) {
		sum2 += arr[i];
	}
	if (sum1 == sum2) {
		return 1;
	}
	return 0;
}