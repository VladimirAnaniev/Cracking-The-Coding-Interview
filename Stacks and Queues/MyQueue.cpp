//
// Created by vladimir on 29/10/17.
//

#include <stdexcept>
#include "MyQueue.h"


int MyQueue::peek() {
    if(isEmpty()) {
        throw std::logic_error("Peeking empty queue");
    }

    if(output.empty()) {
        moveToOutput();
    }

    return output.top();
}

bool MyQueue::isEmpty() const {
    return input.empty() && output.empty();
}

void MyQueue::moveToOutput() {
    while(!input.empty()) {
        int top = output.top();
        output.push(top);
        output.pop();
    }
}

void MyQueue::enqueue(int data) {
    input.push(data);
}

int MyQueue::dequeue() {
    if(isEmpty()) {
        throw std::logic_error("Dequeueing empty queue");
    }

    if(output.empty()) {
        moveToOutput();
    }

    int top = output.top();
    output.pop();
    return top;

}