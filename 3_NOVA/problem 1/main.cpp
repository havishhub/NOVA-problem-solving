#include <iostream>
#include "arrayOperations.h"
#include "memoryAllocate.h"

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int* arr = new int[size];
    elemententry(arr, size);
    sortArray(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
