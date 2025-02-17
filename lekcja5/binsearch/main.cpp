#include <iostream>
#include <algorithm>
//finds a number in  a soreted array and returns it
int binarySearch(int arr[], int left, int right, int target) {
    // TODO: Implement Binary Search algorithm
      //finds the middle of the array
    if(right>=left){
        int mid = left + (right-left)/2;
        
    //checks if the middle is  the target if it is the function returns it
    if(arr[mid]==target)
        return mid;
    
    //checks if the middle is smaller than the target
    if(arr[mid]<target)
        return binarySearch(arr,left,mid-1,target);
    
        // if all of the above are false the target must be bigger so that is what the function returns.
        return binarySearch(arr,mid+1,right,target);
    }
    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int unsorted[] = {10, 3, 6, 2, 8, 1, 12};
    int size = sizeof(unsorted) / sizeof(unsorted[0]);
    
    std::cout << "Before sorting: ";
    printArray(unsorted, size);
    
    std::sort(unsorted, unsorted + size);
    
    std::cout << "After sorting: ";
    printArray(unsorted, size);
    
    int target = 6;
    int expectedIndex = std::distance(unsorted, std::find(unsorted, unsorted + size, target));
    int result = binarySearch(unsorted, 0, size - 1, target);
    
    std::cout << "Searching for " << target << " in sorted array: ";
    if (result != -1) {
        std::cout << "Found at index " << result;
        if (result == expectedIndex) {
            std::cout << " (Correct)";
        } else {
            std::cout << " (Incorrect)";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    
    target = 5;
    result = binarySearch(unsorted, 0, size - 1, target);
    
    std::cout << "Searching for " << target << " in sorted array: ";
    if (result != -1) {
        std::cout << "Found at index " << result << " (Incorrect, since 5 is not in the array)" << std::endl;
    } else {
        std::cout << "Not found (Correct)" << std::endl;
    }
    
    return 0;
}
