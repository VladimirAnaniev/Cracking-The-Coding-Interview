//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_STACK_H
#define CRACKINGTHECODINGINTERVIEW_STACK_H


#include "../../LinkedLists/LinkedLists.h"

class Stack {
protected:
    LinkedNode *top = nullptr;

public:
    // TODO: Big Four

    virtual int pop();

    virtual void push(int num);

    virtual int peek();

    virtual bool empty();
};


#endif //CRACKINGTHECODINGINTERVIEW_STACK_H
