#ifndef _5_STOCK_H
#define _5_STOCK_H

#include <vector>

class Stock {
    struct Box {
        int w;
        int v;
        int id;
    };
    int current_id = 0;
    std::vector<Box> boxes;
public:
    void Add(int w, int v);
    int GetByW(int min_w);
    int GetByV(int min_v);
};

#endif //_5_STOCK_H