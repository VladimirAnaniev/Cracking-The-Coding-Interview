//
// Created by vladimir on 29/10/17.
//

#include "Recurision.h"

unsigned int Recurision::fibonacci(unsigned int n) {
    if(n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int Recurision::possiblePaths(int m, int n) {
    // Count pat to current position
    int paths = 1;

    if(m > 1) {
        // calc paths going down
        paths += possiblePaths(m - 1, n);
    }

    if(n > 1) {
        // calc paths going right
        paths += possiblePaths(m, n - 1);
    }

    return paths;
}