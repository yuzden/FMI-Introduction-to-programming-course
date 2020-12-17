#include<iostream>
#include<vector>
using namespace std;
/**Да се състави функция, която по дадено цяло число n и цифра k определя колко пъти в записа на числото
се среща цифрата k. Като се използва тази функция да се състави програма, 
която чете от клавиатурата цифра k и последователност от цели числа до въвеждане на отрицателно число или 0
и отпечатва броя на тези от въведените числа, които имат цифрата k в записа си поне два пъти.*/

int count(int k, vector<int>&numbers) {
	int times=0;
	for (int i = 0; i < numbers.size()-1; i++){
		int num=0;
		int counter=0;
		num = numbers[i];
		vector<int>digits;
		while (num > 0) {
			int digit = num % 10;
			digits.push_back(digit);
			num /= 10;
		}
		for (int j = 0; j < digits.size(); j++) {
			if (digits[j] == k) {
				counter++;
			}
		}
		if (counter >= 2) {
			times++;
		}
	}
	
	return times;
}

int main() {
	int num = 0;
	cin >> num;
	vector<int> numb;
	int temp = 0;
	cin >> temp;
	numb.push_back(temp);
	while (temp > 0) {
		cin >> temp;
		numb.push_back(temp);
	}
	cout << count(num, numb);
	return 0;
}