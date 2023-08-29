//
//  main.cpp
//  Stepik-C-PlusPlus-Course
//
//  Created by Максим Митрофанов on 18.08.2023.
//

#include <iostream>
using namespace::std;

template<std::size_t ColumnCount, std::size_t RowCount >
void printMatrix(int (&matrix)[ColumnCount][RowCount], unsigned rows, unsigned cols) {
    for (size_t rowIndex = 0; rowIndex < rows; ++rowIndex) {
        for (size_t columnIndex = 0; columnIndex < cols; ++columnIndex) {
            cout << matrix[rowIndex][columnIndex] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


template<std::size_t ColumnCount, std::size_t RowCount >
int ** transposeCustomMatrix(int (&matrix)[ColumnCount][RowCount], unsigned rows, unsigned cols) {
    int ** transposedMatrix = new int* [cols];
    
    for (int rowIndex = 0; rowIndex < cols; ++rowIndex) {
        transposedMatrix[rowIndex] = new int [rows];
    }
    
    for (size_t rowIndex = 0; rowIndex < cols; ++rowIndex) {
        for (size_t columnIndex = 0; columnIndex < rows; ++columnIndex) {
            transposedMatrix[rowIndex][columnIndex] = matrix[columnIndex][rowIndex];
        }
    }
    
    for (size_t rowIndex = 0; rowIndex < cols; ++rowIndex) {
        for (size_t columnIndex = 0; columnIndex < rows; ++columnIndex) {
            cout << transposedMatrix[rowIndex][columnIndex] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return transposedMatrix;
}


int main(int argc, const char * argv[]) {
    int rowsCount = 5;
    int columnsCount = 3;
    int originalMatrix[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}, {21, 22, 23}};
    
    cout << "Original matrix:" << endl;
    printMatrix(originalMatrix, rowsCount, columnsCount);
    
    
    cout << "Transposed matrix:" << endl;
    transposeCustomMatrix(originalMatrix, rowsCount, columnsCount);
    
    return 0;
}
