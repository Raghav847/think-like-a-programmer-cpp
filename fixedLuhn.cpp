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
    char digit;
    int checksum = 0;
    int position = 1;
    cout << "Enter a number with even number of digits: ";
    digit = cin.get();
    while (digit != 10) {
        if (position % 2 == 0) checksum += digit - '0';
        else checksum += 2 * (digit - '0');
        digit = cin.get();
        position++;
    }
    cout << "checksum is " << checksum << ". \n";
    if (checksum % 10 == 0) {
        cout << "Valid. \n";
    } else {
        cout << "InValid. \n";
    }
}
