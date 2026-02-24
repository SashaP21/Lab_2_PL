#include "OddEvenSeparator.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void OddEvenSeparator::add_number(int number) {
    if (number % 2 == 0)
        even_list.push_back(number);
    else
        odd_list.push_back(number);
}

void OddEvenSeparator::even() const {
    cout << "List of even numbers:\n";
    for (int number : even_list)
        cout << number << "\n";
}

void OddEvenSeparator::odd() const {
    cout << "List of odd numbers:\n";
    for (int number : odd_list)
        cout << number << "\n";
}
