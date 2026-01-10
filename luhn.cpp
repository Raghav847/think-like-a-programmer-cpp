#include <iostream>
using namespace std;

int doubleDigitValue(int digit) {
    int doubleDigit = digit * 2;
    int sum;
    if (doubleDigit > 10) sum = 1 + doubleDigit % 10;
    else sum = doubleDigit;
    return sum;
}

int main() {
    int digit;
    cout << "Enter a single digit number, 0-9: ";
    cin >> digit;
    int doubleDigit = digit * 2;
    int sum;
    if (doubleDigit >= 10) sum = 1 + doubleDigit % 10;
    else sum = doubleDigit;
    cout << "Sum: " << sum << "\n";
    return 0; 
}
