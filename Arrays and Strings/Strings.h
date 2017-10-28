//
// Created by vladimir on 27/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_STRINGS_H
#define CRACKINGTHECODINGINTERVIEW_STRINGS_H

#include <string>

class Strings {
public:
    // No additional data structures -> O(n*log(n))
    static bool areAllCharsUnique(std::string str);

    // Swap first with last, and so on.. -> O(n)
    static char *reverseCStr(char *str);

    // Replace all spaces with "%20"
    static std::string replaceSpaces(std::string str);

    // Check if 2 strings are equal when chars are rotated, but not shuffled
    static bool isRotation(std::string str1, std::string str2);

    // Sort both arrays and check equality -> O(n*log(n))
    static bool areAnagrems(std::string str1, std::string str2);

};


#endif //CRACKINGTHECODINGINTERVIEW_STRINGS_H
