#include "MatrixOperations.h"
#include <iostream>

// Constructor to initialize the matrix with values
Matrix::Matrix() {
    std::cout << "Enter 9 elements for the 3x3 matrix:" << std::endl;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            std::cin >> data[row][col];
        }
    }
}

// Function to display the matrix
void Matrix::display() const {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            std::cout << data[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to transpose the matrix
void Matrix::transpose() {
    for (int row = 0; row < SIZE; row++) {
        for (int col = row + 1; col < SIZE; col++) {
            std::swap(data[row][col], data[col][row]);
        }
    }
}
