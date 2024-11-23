#include "merge.h"
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<int> a;
    mergesort t;
    for (int i = 0; i < 10; i++) {
        a.push_back((rand() % 21) - 10);
    }
    t.sort(a, 0, a.size() - 1);
}