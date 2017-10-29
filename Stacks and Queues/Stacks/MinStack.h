//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_MINSTACK_H
#define CRACKINGTHECODINGINTERVIEW_MINSTACK_H


#include "Stack.h"

class MinStack : public Stack {
    Stack mins;

public:
    int pop() override;

    void push(int num) override;

    int min();
};


#endif //CRACKINGTHECODINGINTERVIEW_MINSTACK_H
