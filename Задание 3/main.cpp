#include "Table.h"
#include <iostream>

using std::cout;

int main() {
    Table table(3, 4);
    cout << "Initial table:\n";
    table.print();

    table.set_value(0, 0, 5);
    table.set_value(1, 2, 10);
    table.set_value(2, 3, 7);
    table.set_value(0, 3, 3);

    cout << "\nTable after setting some values:\n";
    table.print();

    int val = table.get_value(1, 2);
    cout << "\nValue at (1,2): " << val << "\n";

    cout << "Number of rows: " << table.n_rows() << "\n";
    cout << "Number of columns: " << table.n_cols() << "\n";

    double avg = table.average();
    cout << "Average of all values: " << avg << "\n";
}