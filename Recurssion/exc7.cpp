#include<iostream>

using namespace std;
//Съставете рекурсивна подпрограма, 
//която намира сумата от цифрите на дадено цяло положително число.

int all_sum(int num) {
	if (num == 0) {
		return 0;
	}
	return(num % 10 + all_sum(num / 10));
}

int main() {
	int number;
	cin >> number;
	cout << all_sum(number);
	return 0;
}