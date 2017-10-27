#include <iostream>
#include "Arrays and Strings/Strings.h"
#include "Arrays and Strings/Matrices.h"

int main() {
//    std::cout<<Strings::isRotation("kvostaadiv", "divkvostaa");

    int ** matrix = new int*[4];
    for(int i=0; i < 4; i++) {
        int * row = new int[4] {1, 2, 3, 4};
        matrix[i] = row;
    }

    Matrices::transpone(matrix, 4);

    for(int r = 0; r< 4; r++) {
        for(int c = 0; c < 4; c++) {
            std::cout<<matrix[r][c]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}