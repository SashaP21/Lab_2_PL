#ifndef _2_ODDEVENSEPARATOR_H
#define _2_ODDEVENSEPARATOR_H

#include <vector>

class OddEvenSeparator {
    std::vector<int> even_list;
    std::vector<int> odd_list;
public:
    void add_number(int);
    void even() const;
    void odd() const;
};

#endif //_2_ODDEVENSEPARATOR_H