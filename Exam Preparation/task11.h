#pragma once
/* Да се напише функция на С++, със сигнатура int CheckTimeStr(char []), която
да проверява дали входния параметър е коректно изписан час във формат
HH:MM:SS(HH - ча е във формат 0-24, ММ - минути, SS - секунди).
Функцията да връща -1, при некоректни входни данни.
*/

size_t my_strlen(const char tmp[]) {
	int counter = 0;
	while (tmp[counter] != '\0') {
		counter++;
	}
	return counter;
}

bool isDigit(char tmp) {
	if (tmp < '0' || tmp > '9') {
		return 0;
	}
	return 1;
}

int CheckTimeStr(char date[]) {
	int size = my_strlen(date);
	if (size != 8) {
		return -1;
	}

	if (date[2] != ':' || date[5] != ':') {
		return -1;
	}

	for (int i = 0; i < 8; i++) {
		if (i != 2 && i != 5) {
			if (isDigit(date[i]) == false) {
				return -1;
			}
		}
	}
	if (date[0] != '0' && date[0] != '1' && date[0] != '2') {
		return -1;
	}

	if (date[0] == '2' && date[1] > '4') {
		return -1;
	}

	if (date[3] > '6' || date[6] > '6') {
		return -1;
	}

	if (date[3] == '6' && date[4] != '0') {
		return -1;
	}

	if (date[6] == '6' && date[4] != '0') {
		return -1;
	}

	return 1;
}
