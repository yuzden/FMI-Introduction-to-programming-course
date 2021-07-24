#include <iostream>
#include <string>
using namespace std;

/*Да се напише функция double Solve(const char* const), която приема символен низ,
който представлява просто квадратно уравнение от типа а* х ^ 2 + b * x + c = 0 и
връща възможно най - големия корен на уравнението.*/

size_t my_strlen(const char* const str) {
	int counter = 0;
	while (str[counter] != '\0') {
		counter++;
	}
	return counter;
}

bool isNumber(char tmp) {
	if (tmp >= '0' && tmp <= '9') {
		return true;
	}
	return false;
}

double Solve(const char* const string) {
	const char input[] = "a*x^2+b*x+c=0";
	int size_str = my_strlen(string);
	if (size_str != 13) {
		return 0;
	}
	for (int i = 0; i < size_str; i++) {
		if (i != 0 && i != 6 && i != 10) {
			if (string[i] != input[i]) {
				return 0;
			}
		}
		else {
			if (isNumber(string[i]) == false) {
				return 0;
			}
		}
	}

	double a = (double)string[0] - '0';
	double b = (double)string[6] - '0';
	double c = (double)string[10] - '0';
	double D = (b * b) - (4 * a * c);
	double x1 = (-b + sqrt(D)) / (2 * a);
	return x1;
}

int main() {
	char str1[100];
	cin >> str1;
	cout << Solve(str1);
}
