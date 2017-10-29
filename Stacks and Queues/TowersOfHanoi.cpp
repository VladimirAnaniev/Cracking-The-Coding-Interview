//
// Created by vladimir on 29/10/17.
//

#include <stdexcept>
#include "TowersOfHanoi.h"
#include "Stack.h"

bool TowersOfHanoi::solve(int n) {
    Stack start;
    Stack temp;
    Stack dest;

    fill(start, n);

    move(start, temp, dest, n);

    return test(dest, n);
}

void TowersOfHanoi::move(Stack &from, Stack &temp, Stack &dest, int n) {
    if(n == 0) {
        return;
    }

    move(from, dest, temp, n - 1);
    dest.push(from.pop());
    move(temp, from, dest, n - 1);
}

bool TowersOfHanoi::test(Stack &result, int n) {
    for(int i = 1; i < n; i++) {
        try{
            if (result.pop() != i) {
                return false;
            }
        }
        catch (std::logic_error &err) {
            // Dest's size is lower than n
            return false;
        }
    }

    return true;
}

void TowersOfHanoi::fill(Stack &start, int n) {
    for(int i = n; i > 0; i--) {
        start.push(i);
    }
}