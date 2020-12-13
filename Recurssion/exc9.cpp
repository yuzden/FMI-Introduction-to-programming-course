#include<iostream>
#include<vector>

using namespace std;
//Съставете рекурсивна подпрограма, 
//която намира броя на цифрите на дадено цяло положително число.


int count_nums(int num) {
	static int counter = 0;
	if (num == 0) {
		return 0;
	}
	counter++;
	count_nums(num / 10);
	return counter;
}

int main() {
	int number;
	cin >> number;
	cout << count_nums(number);
	return 0;
}