#include<iostream>
#include<vector>

using namespace std;
//Да се напише рекурсивна функция, която установява, 
//дали в записа на естественото число n се съдържа цифрата k.


bool isContain(int num, int k) {
	if (num < 0) {
		return 0;
	}
	if (num % 10 == k) {
		return 1;
	}
	return isContain(num / 10, k);
}

int main() {
	int number, k;
	cin >> number >> k;
	cout << isContain(number,k);

	return 0;
}