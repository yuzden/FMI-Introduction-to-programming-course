#include<iostream>
#include<vector>
using namespace std;
//Да се състави програма, която по зададен интервал [K,L] отпечатва всички числа в интервала [K,L], 
//които имат две съседни еднакви цифри в записа си.

void find_nums(int K,int L) {
	
	for (int i = 1; i < L-K; i++) {
		int num;
		num = K + i;
		vector<int>digits;
		while (num > 0) {
			int digit = num % 10;
			digits.push_back(digit);
			num /= 10;
		}
		for (int j = 0; j < digits.size()-1; j++) {
			if (digits[j] == digits[j + 1] ) {
				cout << K+i << endl;
				break;
			}
		}
	}
	return;
}

int main() {
	int K, L;
	cin >> K >> L;
	find_nums(K, L);
	
	return 0;
}