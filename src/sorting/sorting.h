#ifndef SORTING_H
#define SORTING_H

#include <vector>

namespace sorting {
    // Declaration of binarySearch function
    template<typename T>
    int binarySearch(const std::vector<T>& arr, T target){
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if target is present at mid
            if (arr[mid] == target)
                return mid;

            // If target is greater, ignore left half
            if (arr[mid] < target)
                left = mid + 1;
            // If target is smaller, ignore right half
            else
                right = mid - 1;
        }

        // If target is not found in the array
        return -1;
    }

    // Declaration of bubbleSort function
    template<typename T>
    void bubbleSort(std::vector<T>& arr){
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

    }
}

#endif // SORTING_H
