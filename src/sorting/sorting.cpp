#include "sorting.h"

namespace sorting {
    // Explicit instantiation of binarySearch for required types
    template int binarySearch(const std::vector<int>& arr, int target);
    template int binarySearch(const std::vector<double>& arr, double target);

    // Explicit instantiation of bubbleSort for required types
    template void bubbleSort(std::vector<int>& arr);
    template void bubbleSort(std::vector<double>& arr);

    template<typename T>
    int binarySearch(const std::vector<T>& arr, T target) {
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

    template<typename T>
    void bubbleSort(std::vector<T>& arr) {
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
