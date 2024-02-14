#include <vector>
#include "sorting.h"
#include <iostream>

int main() {
    std::vector<int> arr = {2, 5, 7, 12, 17, 21, 23, 27, 30};
    int target = 17;
    int result = sorting::binarySearch(arr, target);
    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found in the array" << std::endl;
    
    std::vector<int> intArr = {64, 34, 25, 12, 22, 11, 90};
    std::vector<double> doubleArr = {3.14, 2.71, 1.618, 0.0, -1.0};

    std::cout << "Original integer array: ";
    for (int num : intArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    sorting::bubbleSort(intArr);
    
    std::cout << "Sorted integer array: ";
    for (int num : intArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Original double array: ";
    for (double num : doubleArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    sorting::bubbleSort(doubleArr);
    
    std::cout << "Sorted double array: ";
    for (double num : doubleArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
