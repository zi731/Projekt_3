//
// pch.cpp
//

#include "pch.h"
#include <iostream>
#include <vector>

void mergesort::sort(std::vector<int> &tab, int po, int ko) {
    if (po < ko) {
        int sr = (po + ko) / 2;
        sort(tab, po, sr);
        sort(tab, sr + 1, ko);
        scal(tab, po, sr, ko);
    }
}

void mergesort::scal(std::vector<int> &tab, int po, int sr, int ko) {
    std::vector<int> lewa;
    std::vector<int> prawa;
    for (int i = 0; i < sr - po + 1; i++) {
        lewa.push_back(tab[po + i]);
    }
    for (int i = 0; i < ko - sr; i++) {
        prawa.push_back(tab[sr + 1 + i]);
    }
    int wt = po;
    int wl = 0;
    int wp = 0;
    while (wl < lewa.size() || wp < prawa.size()) {
        if (wl > lewa.size() - 1) {
            tab[wt] = prawa[wp];
            wp++;
        }
        else if (wp > prawa.size() - 1) {
            tab[wt] = lewa[wl];
            wl++;
        }
        else if (lewa[wl] <= prawa[wp]) {
            tab[wt] = lewa[wl];
            wl++;
        }
        else {
            tab[wt] = prawa[wp];
            wp++;
        }
        wt++;
    }
}