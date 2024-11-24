/// @file Plik deklarujący klasę algorytmu MergeSort

#include <vector>

/// @brief Deklaracja klasy i jej metod
class mergesort {
public:
    mergesort(std::vector<int> &tab);
    void dziel(std::vector<int> &tab, int po, int ko);
    void sort(std::vector<int> &tab, int po, int sr, int ko);
};