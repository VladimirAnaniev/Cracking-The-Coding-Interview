//
// Created by vladimir on 27/10/17.
//

#include <vector>
#include "Matrices.h"

void Matrices::transpone(int **&matrix, int n) {
    for (int row = 0; row < n / 2; row++) {
        for (int col = row; col < n - row - 1; col++) {
            int first = matrix[row][col];
            matrix[row][col] = matrix[n - 1 - col][row];
            matrix[n - 1 - col][row] = matrix[n - 1 - row][n - 1 - col];
            matrix[n - 1 - row][n - 1 - col] = matrix[col][n - 1 - row];
            matrix[col][n - 1 - row] = first;
        }
    }
}

void Matrices::fillZeros(int **&matrix, int rows, int cols) {
    std::vector<bool> colsToFill(cols);
    std::vector<bool> rowsToFill(rows);

    // Mark cols and rows
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if(matrix[r][c] == 0) {
                rowsToFill[r] = true;
                colsToFill[c] = true;
            }
        }
    }

    // Fill rows and cols
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (rowsToFill[r] || colsToFill[c]) {
                matrix[r][c] = 0;
            }
        }
    }
}