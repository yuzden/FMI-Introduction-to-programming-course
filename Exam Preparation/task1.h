#pragma once

/*Да се напише функция на C++, която приема като параметър два едномерни сортирани целочислени масива с елементи от тип int 
и връща като резултат трети масив (който съдържа всички елементи на двата масива и само тях), който също е сортиран. 
Предполага се, че входните масиви са сортирани преди да се извика написаната от вас функция.*/

int* sortTwoArrays(const int arr1[], int size1, const int arr2[], int size2) {
	int size3 = size1 + size2;
	int* arr3 = new int[size3];
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2) {
		if (arr1[i] < arr2[j]) {
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else {
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < size1) {
		arr3[k] = arr1[i];
		k++;
		i++;
	}
	while (j < size2) {
		arr3[k] = arr2[j];
		k++;
		j++;
	}
	return arr3;
}