#ifndef SORTING_H
#define SORTING_H

#include <vector>

namespace sorting {
    // Declaration of binarySearch function
    template<typename T>
    int binarySearch(const std::vector<T>& arr, T target);

    // Declaration of bubbleSort function
    template<typename T>
    void bubbleSort(std::vector<T>& arr);

    template<typename T>
    void insertionSort(std::vector<T>& arr);
}

#endif // SORTING_H
