//
// Created by vladimir on 10/11/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_PARENTHESES_H
#define CRACKINGTHECODINGINTERVIEW_PARENTHESES_H

#include <vector>
#include <string>

/**
 * Implement an algorithm to print all valid (e.g., properly opened and closed) combi-
 * nations of n-pairs of parentheses.
 * EXAMPLE:
 * input: 3 (e.g., 3 pairs of parentheses)
 * output: ()()(), ()(()), (())(), ((()))
 */

class Parentheses {
    static std::vector<std::string> generatorRec(std::string current, int opening, int closing);

public:
    // O(n^2)
    static std::vector<std::string> generateCombinations(int n);
};


#endif //CRACKINGTHECODINGINTERVIEW_PARENTHESES_H
