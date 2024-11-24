/// @file pch.h Plik deklaruj¹cy klasê algorytmu MergeSort

#pragma once
#include "gtest/gtest.h"
#include <vector>

/// @brief Deklaracja klasy i jej metod
class mergesort {
public:
    mergesort(std::vector<int> &tab);
    void dziel(std::vector<int> &tab, int po, int ko);
    void sort(std::vector<int> &tab, int po, int sr, int ko);
};