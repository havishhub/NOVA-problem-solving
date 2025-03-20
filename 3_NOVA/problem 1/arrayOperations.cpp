#include "arrayOperations.h"
#include <iostream>

int elemententry(int* arr, int size) {
    int temp = 0;
    for (int i = 0; i < size; i++) {
        std::cin >> temp;
        arr[i] = temp;
        temp = 0;
    }
    return 0;
}

int* sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minValueIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[minValueIndex] > arr[j]) {
                minValueIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minValueIndex];
        arr[minValueIndex] = temp;
    }
    return arr;
}
