#include "sorting.h"

namespace sorting {
    // Explicit instantiation of the binarySearch function for the int type
    template int binarySearch(const std::vector<int>& arr, int target);

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
}
