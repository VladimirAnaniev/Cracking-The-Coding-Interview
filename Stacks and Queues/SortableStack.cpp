//
// Created by vladimir on 29/10/17.
//

#include "SortableStack.h"

void SortableStack::sort() {
    sortRecursive();
}

void SortableStack::sortRecursive() {
    if(Stack::empty()) {
        return;
    }

    int top = Stack::pop();

    sortRecursive();

    pushSorted(top);
}

void SortableStack::pushSorted(int elem) {
    if(Stack::empty() || Stack::peek() > elem) {
        Stack::push(elem);
        return;
    }

    int top = Stack::pop();
    pushSorted(elem);
    Stack::push(top);
}