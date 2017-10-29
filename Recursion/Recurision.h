//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_RECURISION_H
#define CRACKINGTHECODINGINTERVIEW_RECURISION_H


#include <vector>
#include <string>

class Recurision {
    static std::vector<std::vector<int>> getSubsetsRec(std::vector<int> &original, int index);

    static std::vector<std::string> getPermutationsRec(std::string str, std::vector<char> chars);

public:
    static unsigned int fibonacci(unsigned int n);

    static int possiblePaths(int m, int n);

    // O(2^n) tho
    static std::vector<std::vector<int>> getAllSubsets(std::vector<int> &original);

    // O(n!) is the shit
    static std::vector<std::string> getAllPermutations(std::string original);
};


#endif //CRACKINGTHECODINGINTERVIEW_RECURISION_H
