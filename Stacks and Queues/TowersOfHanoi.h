//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_TOWERSOFHANOI_H
#define CRACKINGTHECODINGINTERVIEW_TOWERSOFHANOI_H


#include "Stack.h"

class TowersOfHanoi {
    static void move(Stack &from, Stack &temp, Stack &dest, int n);

    static bool test(Stack &result, int n);

    static void fill(Stack &start, int n);

public:
    static bool solve(int n);
};


#endif //CRACKINGTHECODINGINTERVIEW_TOWERSOFHANOI_H
