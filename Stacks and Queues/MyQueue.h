//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_MYQUEUE_H
#define CRACKINGTHECODINGINTERVIEW_MYQUEUE_H


#include <stack>

class MyQueue {
    std::stack<int> input;
    std::stack<int> output;

    void moveToOutput();

public:
    int dequeue();

    int peek();

    void enqueue(int data);

    bool isEmpty() const;
};


#endif //CRACKINGTHECODINGINTERVIEW_MYQUEUE_H
