#include <iostream>
#include "Recursion/Recurision.h"
#include "Recursion/Parentheses.h"

int main() {
    auto combinations = Parentheses::generateCombinations(3);

    for(auto combination : combinations) {
        std::cout<<combination<<std::endl;
    }
    return 0;
}