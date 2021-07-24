#pragma once
/*Да се напише функция на С++, със сигнатура
bool CheckDate(char []), която да проверява дали входния параметър е коректна дата
във формат DD.MM . Да не се използва вградената библиотека string.*/

size_t my_strlen(char arr[]){
	int counter = 0;
	while (arr[counter] != '\0') {
		counter++;
	}
	return counter;
}
	
bool CheckDate(char str[]) {
	int size = my_strlen(str);
	const int max_size = 5;
	char numbers[10] = { '0','1','2','3','4','5','6','7','8','9' };
	char months_30days[3] = {'4','6','9'};

	if (size > max_size) {
		return false;
	}
	if (str[2] != '.') {
		return false;
	}
	bool flag = false;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			if (str[i] == numbers[j]) {
				flag = true;
			}
		}
	}
	bool flag1 = false;
	for (int i = 3; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (str[i] == numbers[j]) {
				flag1 = true;
			}
		}
	}

	if (flag == false || flag1 == false) {
		return false;
	}

	if (str[0] != '1' && str[0] != '2' && str[0] != '3') {
		return false;
	}

	if (str[0] == '0' && str[1] == '0') {
		return false;
	}

	if (str[3] != '0' && str[3] != '1') {
		return false;
	}

	if (str[3] == '0' && str[4] == '0') {
		return false;
	}

	if (str[3] == '0') {
		for (int i = 0; i < 3; i++) {
			if (str[4] == months_30days[i]) {
				if (str[0] == '3' && str[1] == '1') {
					return false;
				}
			}
		}
		if (str[4] == '2' && str[0] == '3' ) {
			return false;
		}
	}

	if (str[3] == '1' && str[4] == '1') {
		if (str[0] == '3' && str[1] == '1') {
			return false;
		}
	}

	if (str[3] == '1' && (str[4] != '1' && str[4] != '0' && str[4] != '2')) {
		return false;
	}

	if (str[0] == '3' && (str[1] != '0' && str[1] != '1')) {
		return false;
	}

	return true;
}