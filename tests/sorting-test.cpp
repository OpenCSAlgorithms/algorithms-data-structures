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
    
    return 0;
}