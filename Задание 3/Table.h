#ifndef _3_TABLE_H
#define _3_TABLE_H

#include <vector>

class Table {
    std::vector<std::vector<int>> numbers;
public:
    Table(int rows, int cols);
    int get_value(int row, int col) const;
    void set_value(int row, int col, int value);
    int n_rows() const;
    int n_cols() const;
    void print() const;
    double average() const;
};

#endif //_3_TABLE_H