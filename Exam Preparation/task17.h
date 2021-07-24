#pragma once
/*Да се напише функция на C++, със сигнатура bool doExist(char* symbols, char*
word), която проверява дали думата word, се среща в символният низ
symbols, прочетен наобратно*/

size_t my_strlen(char tmp[]) {
	int counter = 0;
	while (tmp[counter] != '\0') {
		counter++;
	}
	return counter;
}

bool doExist(char* symbols, char* word) {
	int size_symbols = my_strlen(symbols);
	int size_word = my_strlen(word);
	

	for (int i = size_symbols- 1; i >= 0; i--) {
		int j = 0;
		while (word[j] == symbols[i] && word[j] != '\0') {
			j++;
			i--;
		}
		if (word[j] == '\0') {
			return true;
		}
	}
	return false;
}