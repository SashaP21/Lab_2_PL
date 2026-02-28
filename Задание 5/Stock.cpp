#include "Stock.h"

void Stock::Add(int w, int v) {
    Box box = {w, v , current_id};
    boxes.push_back(box);
    current_id += 1;
}

int Stock::GetByV(int min_v) {
    int min_id = -1;
    int best_index = 0;
    for (int i = 0; i < boxes.size(); i++) {
        if (boxes[i].v >= min_v) {
            if (min_id == -1 || boxes[i].v <= boxes[best_index].v) {
                min_id = boxes[i].id;
                best_index = i;
            }
        }
    }
    if (min_id != -1) {
        boxes.erase(boxes.begin() + best_index);
    }
    return min_id;
}

int Stock::GetByW(int min_w) {
    int min_id = -1;
    int best_index = 0;
    for (int i = 0; i < boxes.size(); i++) {
        if (boxes[i].w >= min_w) {
            if (min_id == -1 || boxes[i].w <= boxes[best_index].w) {
                min_id = boxes[i].id;
                best_index = i;
            }
        }
    }
    if (min_id != -1) {
        boxes.erase(boxes.begin() + best_index);
    }
    return min_id;
}