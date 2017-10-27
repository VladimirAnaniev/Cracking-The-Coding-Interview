#include <iostream>
#include "Arrays and Strings/Strings.h"
#include "Arrays and Strings/Matrices.h"

int main() {
//    std::cout<<Strings::isRotation("kvostaadiv", "divkvostaa");

    int ** matrix = new int*[3];
    for(int i=0; i < 3; i++) {
        int * row = new int[3] {1, 2, 3};
        matrix[i] = row;
    }

    Matrices::transpone(matrix, 3);

    for(int r = 0; r< 3; r++) {
        for(int c = 0; c < 3; c++) {
            std::cout<<matrix[r][c]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}