//
// Created by vladimir on 10/11/17.
//

#include "Parentheses.h"


std::vector<std::string> Parentheses::generateCombinations(int n) {
    return generatorRec("(", n - 1, n);
}

std::vector<std::string> Parentheses::generatorRec(std::string current, int opening, int closing) {
    std::vector<std::string> combinations;

    if (opening > closing || opening < 0 || closing < 0 ) {
        return combinations;
    }

    if(closing == 0 && opening == 0) {
        combinations.push_back(current);
        return combinations;
    }

    std::vector<std::string> withOpening = generatorRec(current + "(", opening - 1, closing);
    std::vector<std::string> withClosing = generatorRec(current + ")", opening, closing - 1);

    combinations.insert(combinations.end(), withOpening.begin(), withOpening.end());
    combinations.insert(combinations.end(), withClosing.begin(), withClosing.end());

    return combinations;
}