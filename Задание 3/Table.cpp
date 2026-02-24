#include "Table.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

Table::Table(int rows, int cols) : numbers(rows, vector<int>(cols)) {}

int Table::get_value(int row, int col) const {
    return numbers[row][col];
}

void Table::set_value(int row, int col, int value) {
    numbers[row][col] = value;
}

int Table::n_cols() const {
    return numbers[0].size();
}

int Table::n_rows() const {
    return numbers.size();
}

void Table::print() const {
    for (int i = 0; i < n_rows(); i++) {
        for (int j = 0; j < n_cols(); j++) {
            cout << numbers[i][j] << " ";
        }
        cout << "\n";
    }
}

double Table::average() const {
    double sum = 0;
    for (int i = 0; i < n_rows(); i++) {
        for (int j = 0; j < n_cols(); j++) {
            sum += numbers[i][j];
        }
    }
    return sum / (n_rows() * n_cols());
}
