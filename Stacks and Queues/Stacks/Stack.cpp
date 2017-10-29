//
// Created by vladimir on 29/10/17.
//

#include <stdexcept>
#include "Stack.h"

int Stack::pop() {
    if (empty()) {
        throw std::logic_error("popping empty stack");
    }

    int popped = top->data;
    top = top->next;
    return popped;
}

void Stack::push(int num) {
    auto *newItem = new LinkedNode(num);
    newItem->next = top;
    top = newItem;
}

int Stack::peek() {
    if (empty()) {
        throw std::logic_error("peeking empty stack");
    }

    return top->data;
}

bool Stack::empty() {
    return top == nullptr;
}