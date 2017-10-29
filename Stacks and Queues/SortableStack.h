//
// Created by vladimir on 29/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_SORTABLESTACK_H
#define CRACKINGTHECODINGINTERVIEW_SORTABLESTACK_H


#include <stack>
#include "Stack.h"

class SortableStack : public Stack {
    void sortRecursive();

    void pushSorted(int elem);

public:
    void sort();

};


#endif //CRACKINGTHECODINGINTERVIEW_SORTABLESTACK_H
