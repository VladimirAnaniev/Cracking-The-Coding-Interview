//
// Created by vladimir on 27/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_MATRICES_H
#define CRACKINGTHECODINGINTERVIEW_MATRICES_H


class Matrices {
public:
    // Transpones n*n matrix -> O(n^2)
    static void transpone(int **&matrix, int n);

    // if a cell is 0, its row and col are filled with 0s -> O(rows*cols)
    static void fillZeros(int **&matrix, int rows, int cols);
};


#endif //CRACKINGTHECODINGINTERVIEW_MATRICES_H
