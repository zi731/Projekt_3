#include "merge.h"
#include <iostream>
#include <vector>

void mergesort::sort(std::vector<int> tab, int po, int ko) {
    if (po < ko) {
        int sr = (po + ko) / 2;
        sort(tab, po, sr);
        sort(tab, sr + 1, ko);
        scal(tab, po, sr, ko);
    }
}

void mergesort::scal(std::vector<int> tab, int po, int sr, int ko) {
    std::cout << "u";
}