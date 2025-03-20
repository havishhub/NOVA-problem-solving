#include "MatrixOperations.h"
#include <iostream>

int main() {
    Matrix matrixObj; // Creating object of Matrix class

    std::cout << "\nOriginal Matrix:" << std::endl;
    matrixObj.display();

    matrixObj.transpose(); // Calling transpose function

    std::cout << "\nTransposed Matrix:" << std::endl;
    matrixObj.display();

    return 0;
}
