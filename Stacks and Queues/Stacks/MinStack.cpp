//
// Created by vladimir on 29/10/17.
//

#include "MinStack.h"

int MinStack::pop() {
    int popped =  Stack::pop();

    if(mins.empty() || mins.peek() == popped) {
        mins.pop();
    }

    return popped;
}

void MinStack::push(int num) {
    if (mins.empty() || mins.peek() >= num) {
        mins.push(num);
    }

    Stack::push(num);
}

int MinStack::min() {
    return mins.peek();
}
