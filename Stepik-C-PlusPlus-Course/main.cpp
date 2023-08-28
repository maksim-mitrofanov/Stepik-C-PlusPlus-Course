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
    for (int rowIndex = 0; rowIndex < cols; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < rows; ++columnIndex) {
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
    
    for (int columnIndex = 0; columnIndex < cols; ++columnIndex) {
        for (int rowIndex = 0; rowIndex < rows; ++rowIndex) {
            resultingMatrix[0][lastValueIndex] = matrix[rowIndex][columnIndex];
            lastValueIndex += 1;
        }
    }
    
    for (int rowIndex = 1; rowIndex < cols; ++rowIndex) {
        resultingMatrix[rowIndex] = resultingMatrix[rowIndex - 1] + rows;
    }
    
    // Result in console
    for (int rowIndex = 0; rowIndex < cols; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < rows; ++columnIndex) {
            cout << resultingMatrix[rowIndex][columnIndex] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return resultingMatrix;
}


int main(int argc, const char * argv[]) {
    int rowsCount = 2;
    int columnsCount = 2;
    int originalMatrix[2][2] = {{1, 2}, {3, 4}};
    
    cout << "Original matrix:" << endl;
    printMatrix(originalMatrix, rowsCount, columnsCount);

    
    cout << "Transposed matrix:" << endl;
    int **result = transposeCustomMatrix(originalMatrix, rowsCount, columnsCount);
    
    return 0;
}
