#include <iostream>

using namespace std;

int main() {
    int number = 0;
    cin >> number;

    int reverse_number = 0;
    int current_digit = 0;
    int current_number = number;

    while (current_number != 0) {
        current_digit = current_number % 10;
        reverse_number = reverse_number * 10 + current_digit;
        current_number /= 10;
    }

    if (reverse_number == number){
        cout << "yes";
    }
    else {
        cout<< "no" ;
    }
    return 0;
}