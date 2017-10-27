//
// Created by vladimir on 27/10/17.
//

#include "Matrices.h"

void Matrices::transpone(int **&matrix, int n) {
    // TODO -> Not working properly
    for(int row = 0; row < n; row++) {
        for(int col = row; col < n; col++) {
            int first = matrix[row][col];
            matrix[row][col] = matrix[n - 1 - col][n - 1 - row];
            matrix[n - 1 - col][row] = matrix[n - 1 - row][n - 1 - col];
            matrix[n - 1 - row][n - 1 - col] = matrix[col][n - 1 - row];
            matrix[col][n - 1 - row] = first;
        }
    }
}