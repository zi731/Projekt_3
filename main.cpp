#include "merge.h"
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<int> a;
    mergesort t;
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        a.push_back((rand() % 201) - 100);
    }
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl << std::endl;
    t.sort(a, 0, a.size() - 1);
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    system("pause");
}