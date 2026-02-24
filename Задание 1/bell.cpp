#include "bell.h"
#include <iostream>

using std::cout;

void Bell::sound() {
    cout << (is_ding_next ? "ding\n" : "dong\n");
    is_ding_next = !is_ding_next;
}