#pragma once

/*Да се напише функция на С++, със сигнатура void Revert(char []), която преобразува
подадения като параметър символен низ, като замества всички малки букви от
латинската азбука с главни и обратно. Да не се използва вградената библиотека
string.*/

size_t my_strlen(char arr[]) {
	int counter = 0;
	while (arr[counter] != '\0') {
		counter++;
	}
	return counter;
}

void Revert(char str[]) {
	int size = my_strlen(str);

	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		} 
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}
