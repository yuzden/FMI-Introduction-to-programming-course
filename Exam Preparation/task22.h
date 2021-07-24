#pragma once
/*В даден масив от цели числа, фиксиран се нарича такъв елемент, стойността
на който е равна на индекса му. Да се напише функция на С++, със сигнатура
bool AnalyzeArr(int arr[], int length), която проверява дали в масива arr
съществуват поне два фиксирани елемента. Функцията да връща false също и
при некоректни данни.*/

bool AnalyzeArr(int arr[], int length) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == i) {
			counter++;
		}
	}
	if (counter >= 2) {
		return true;
	}
	return false;
}