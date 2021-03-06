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

std::vector<std::vector<int>> Recurision::getAllSubsets(std::vector<int> &original) {
    auto subsets = getSubsetsRec(original, original.size() - 1);

    return subsets;
}

std::vector<std::vector<int>> Recurision::getSubsetsRec(std::vector<int> &original, int index) {
    if (index < 0) {
        // Return the set of the empty set
        std::vector<int> emptySet;
        std::vector<std::vector<int>> subsets;
        subsets.push_back(emptySet);
        return subsets;
    }

    // Get all smaller subsets
    auto subsets = getSubsetsRec(original, index - 1);

    int currentElem = original[index];
    std::vector<std::vector<int>> newSubsets;

    // Add the current element to all previous subsets
    for(auto subset : subsets) {
        subset.push_back(currentElem);
        newSubsets.push_back(subset);
    }

    // Insert the newly created sets
    subsets.insert(subsets.end(), newSubsets.begin(), newSubsets.end());

    return subsets;
}

std::vector<std::string> Recurision::getAllPermutations(std::string original) {
    std::vector<char> characters(original.begin(), original.end());

    auto permutations = getPermutationsRec("", characters);

    return permutations;
}

std::vector<std::string> Recurision::getPermutationsRec(std::string str, std::vector<char> chars) {
    std::vector<std::string> permutations;

    if(chars.size() == 0) {
        // We have the whole permutated string
        permutations.push_back(str);
        return permutations;
    }

    // Copy of the remaining characters
    auto remaining = chars;

    for(int i = 0; i < chars.size(); i++) {
        auto newStr = str + chars[i];

        // Remove current char
        remaining.erase(remaining.begin() + i);

        auto newPermutations = getPermutationsRec(newStr, remaining);
        permutations.insert(permutations.end(), newPermutations.begin(), newPermutations.end());

        // put current char back
        remaining.push_back(chars[i]);
    }

    return permutations;
}