//
// Created by vladimir on 27/10/17.
//

#include <algorithm>
#include <cstring>
#include "Strings.h"


bool Strings::areAllCharsUnique(std::string str) {
    // Sort the string -> O(n*log(n))
    std::sort(str.begin(), str.end());

    // if two successive chars are the same-> string is not unique
    char last;
    for (char c : str) {
        if (c == last) {
            return false;
        }
        last = c;
    }

    return true;
}

char *Strings::reverseCStr(char *str) {
    auto length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    return str;
}

std::string Strings::replaceSpaces(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(i, 1, "%20", 3);
        }
    }

    return str;
}

bool Strings::isRotation(std::string str1, std::string str2) {
    if (str1.length() == str2.length()) {
        // Different length, cannot be the same
        return false;
    }

    // Concatenating 1 string to itself means that each rotation without shuffling
    // will be included in the result
    std::string newstr = str1 + str1;
    return newstr.find(str2) != std::string::npos;
}

bool Strings::areAnagrems(std::string str1, std::string str2) {
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
}