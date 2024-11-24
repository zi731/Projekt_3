/// @file pch.cpp Plik definiuj�cy metody klasy algorytmu MergeSort

#include "pch.h"
#include <iostream>
#include <vector>

/// @brief Konstruktor klasy
/// @param tab - tablica do posortowania
mergesort::mergesort(std::vector<int> &tab) {
    dziel(tab, 0, tab.size() - 1);
}

/// @brief Metoda dziel�ca tablic� na dwie po�owy
/// @param tab - tablica do dzielenia
/// @param po - wska�nik do pierwszego elementu tablicy
/// @param ko - wska�nik do ostatniego elementu tablicy
void mergesort::dziel(std::vector<int> &tab, int po, int ko) {
    if (po < ko) {
        int sr = (po + ko) / 2; /// @param sr - wska�nik do �rodkowego elementu tablicy
        dziel(tab, po, sr);
        dziel(tab, sr + 1, ko);
        sort(tab, po, sr, ko);
    }
}

/// @brief Metoda sortuj�ca elementy tablicy
/// @param tab - tablica do sortowania
/// @param po - wska�nik do pierwszego elementu tablicy
/// @param sr - wska�nik do �rodkowego elementu tablicy
/// @param ko - wska�nik do ostatniego elementu tablicy
void mergesort::sort(std::vector<int> &tab, int po, int sr, int ko) {
    std::vector<int> lewa; /// @param lewa - Lewa cz�� tablicy
    std::vector<int> prawa; /// @param prawa - Prawa cz�� tablicy
    for (int i = 0; i < sr - po + 1; i++) {
        lewa.push_back(tab[po + i]);
    }
    for (int i = 0; i < ko - sr; i++) {
        prawa.push_back(tab[sr + 1 + i]);
    }
    int wt = po; /// @param wt - Wska�nik do pierwszego elementu tablicy
    int wl = 0; /// @param wl - Wska�nik do pierwszego elementu lewej tablicy
    int wp = 0; /// @param wp - Wska�nik do pierwszego elementu prawej tablicy
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