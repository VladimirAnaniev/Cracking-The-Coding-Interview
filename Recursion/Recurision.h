//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_RECURISION_H
#define CRACKINGTHECODINGINTERVIEW_RECURISION_H


#include <vector>

class Recurision {
    static std::vector<std::vector<int>> getSubsetsRec(std::vector<int> &original, int index);

public:
    static unsigned int fibonacci(unsigned int n);

    static int possiblePaths(int m, int n);

    // O(2^n) tho
    static std::vector<std::vector<int>> getAllSubsets(std::vector<int> &original);
};


#endif //CRACKINGTHECODINGINTERVIEW_RECURISION_H
