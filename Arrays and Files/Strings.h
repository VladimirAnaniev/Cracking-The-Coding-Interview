//
// Created by vladimir on 27/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_STRINGS_H
#define CRACKINGTHECODINGINTERVIEW_STRINGS_H

#include <string>

class Strings {
public:
    // No additional data structures -> O(n*log(n))
    bool areAllCharsUnique(std::string str) const;

    // Swap first with last, and so on.. -> O(n)
    char *reverseCStr(char *str) const;

    std::string removeDuplicates(std::string str) const;

};


#endif //CRACKINGTHECODINGINTERVIEW_STRINGS_H
