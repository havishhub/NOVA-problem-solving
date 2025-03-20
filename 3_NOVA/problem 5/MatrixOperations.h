#ifndef MATRIXOPERATIONS_H
#define MATRIXOPERATIONS_H

#include <iostream>

const int SIZE = 3; // Fixed matrix size

class Matrix {
private:
    int data[SIZE][SIZE]; // 2D array to store matrix values

public:
    Matrix();  // Constructor to initialize the matrix
    void display() const;  // Function to print the matrix
    void transpose();  // Function to transpose the matrix
};

#endif
