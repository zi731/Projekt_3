/// @file Plik definiujący metody klasy algorytmu MergeSort

#include "merge.h"
#include <iostream>
#include <vector>

/// @brief Konstruktor klasy
/// @param tab - tablica do posortowania
mergesort::mergesort(std::vector<int> &tab) {
    dziel(tab, 0, tab.size() - 1);
}

/// @brief Metoda dzieląca tablicę na dwie połowy
/// @param tab - tablica do dzielenia
/// @param po - wskaźnik do pierwszego elementu tablicy
/// @param ko - wskaźnik do ostatniego elementu tablicy
void mergesort::dziel(std::vector<int> &tab, int po, int ko) {
    if (po < ko) {
        int sr = (po + ko) / 2; ///< wskaźnik do środkowego elementu tablicy
        dziel(tab, po, sr);
        dziel(tab, sr + 1, ko);
        sort(tab, po, sr, ko);
    }
}

/// @brief Metoda sortująca elementy tablicy
/// @param tab - tablica do sortowania
/// @param po - wskaźnik do pierwszego elementu tablicy
/// @param sr - wskaźnik do środkowego elementu tablicy
/// @param ko - wskaźnik do ostatniego elementu tablicy
void mergesort::sort(std::vector<int> &tab, int po, int sr, int ko) {
    std::vector<int> lewa; ///< Lewa część tablicy
    std::vector<int> prawa; ///< Prawa część tablicy
    for (int i = 0; i < sr - po + 1; i++) {
        lewa.push_back(tab[po + i]);
    }
    for (int i = 0; i < ko - sr; i++) {
        prawa.push_back(tab[sr + 1 + i]);
    }
    int wt = po; ///< Wskaźnik do pierwszego elementu tablicy
    int wl = 0; ///< Wskaźnik do pierwszego elementu lewej tablicy
    int wp = 0; ///< Wskaźnik do pierwszego elementu prawej tablicy
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