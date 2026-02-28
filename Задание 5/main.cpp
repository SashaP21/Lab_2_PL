#include "Stock.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    Stock stock;

    stock.Add(10, 20);   // id = 0
    stock.Add(15, 25);   // id = 1
    stock.Add(10, 30);   // id = 2
    stock.Add(20, 15);   // id = 3

    cout << "GetByW(10): " << stock.GetByW(10) << endl; // 2
    cout << "GetByW(20): " << stock.GetByW(20) << endl; // 3
    cout << "GetByW(30): " << stock.GetByW(30) << endl; // -1

    stock.Add(12, 18);   // id = 4

    cout << "GetByV(18): " << stock.GetByV(18) << endl; // 4
    cout << "GetByV(25): " << stock.GetByV(25) << endl; // 1
    cout << "GetByV(30): " << stock.GetByV(30) << endl; // -1
}