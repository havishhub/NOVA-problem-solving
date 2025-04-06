#include <iostream>
#include <stdexcept>
#include "array.h"
using namespace std;

int main()
{
    try {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            throw invalid_argument("Invalid array size entered.");
        }

        int* arr = new(nothrow) int[size];
        if (!arr) {
            throw runtime_error("Memory allocation failed.");
        }

        cout << "Enter " << size << " elements:" << endl;
        inputArray(arr, size);

        sortArray(arr, size);

        cout << "The sorted array is:" << endl;
        printArray(arr, size);

        delete[] arr;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
