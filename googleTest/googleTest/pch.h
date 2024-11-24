//
// pch.h
//

#pragma once
#include "gtest/gtest.h"
#include <vector>

class mergesort {
public:
    mergesort(std::vector<int> &tab);
    void sort(std::vector<int> &tab, int po, int ko);
    void scal(std::vector<int> &tab, int po, int sr, int ko);
};