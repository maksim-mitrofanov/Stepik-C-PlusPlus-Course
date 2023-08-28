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
    int lastValueIndex = 0;
    int** resultingMatrix = new int* [rows];
    resultingMatrix[0] = new int [rows * cols];
    
    for (size_t columnIndex = 0; columnIndex < cols; ++columnIndex) {
        for (int rowIndex = 0; rowIndex < rows; ++rowIndex) {
            resultingMatrix[0][lastValueIndex] = matrix[rowIndex][columnIndex];
            lastValueIndex += 1;
        }
    }
    
    for (size_t rowIndex = 1; rowIndex < cols; ++rowIndex) {
        resultingMatrix[rowIndex] = resultingMatrix[rowIndex - 1] + rows;
    }
    
    // Result in console
    for (size_t rowIndex = 0; rowIndex < cols; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < rows; ++columnIndex) {
            cout << resultingMatrix[rowIndex][columnIndex] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return resultingMatrix;
}


int main(int argc, const char * argv[]) {
    int rowsCount = 4;
    int columnsCount = 3;
    int originalMatrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};
    
    cout << "Original matrix:" << endl;
    printMatrix(originalMatrix, rowsCount, columnsCount);
    
    
    cout << "Transposed matrix:" << endl;
    transposeCustomMatrix(originalMatrix, rowsCount, columnsCount);
    
    return 0;
}
