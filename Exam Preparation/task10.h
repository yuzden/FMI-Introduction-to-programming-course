#pragma once
/*. Да се напише функция на С++, със сигнатура char* CheckStr(char[]), която
връща масив, който съдържа всички повтарящи се символи във входящия
масив.
например: CheckStr("aif8sLtt8f") = f8t
*/

size_t my_strlen(const char tmp[]) {
	int counter = 0;
	while (tmp[counter] != '\0') {
		counter++;
	}
	return counter;
}

char* CheckStr(char str[]) {
	int size = my_strlen(str);

	char* dublicates = new char[size];

	int counter = 0;
	int k = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (str[i] == str[j]) {
				dublicates[k] = str[i];
				k++;
				counter++;
			}
		}
	}
	dublicates[counter] = '\0';
	return dublicates;
}