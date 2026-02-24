#include "OddEvenSeparator.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;

int main() {
    OddEvenSeparator numbers;
    int number;
    cout << "Enter numbers:\n";
    while (cin >> number) {
        numbers.add_number(number);
    }
    numbers.even();
    numbers.odd();
}