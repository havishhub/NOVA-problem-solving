#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* array1, int size1, int* array2, int size2) {
    int mergedSize = size1 + size2;
    int* mergedArray = (int*)malloc(mergedSize * sizeof(int));

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (array1[i] < array2[j]) {
            mergedArray[k++] = array1[i++];
        } else {
            mergedArray[k++] = array2[j++];
        }
    }
    while (i < size1) {
        mergedArray[k++] = array1[i++];
    }
    while (j < size2) {
        mergedArray[k++] = array2[j++];
    }
    double median;
    if (mergedSize % 2 == 0) {
        median = (mergedArray[mergedSize / 2 - 1] + mergedArray[mergedSize / 2]) / 2.0;
    } else {
        median = mergedArray[mergedSize / 2];
    }

    free(mergedArray);
    return median;
}
