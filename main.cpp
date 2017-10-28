#include <iostream>
#include "LinkedLists/LinkedLists.h"

int main() {

    auto *first = new LinkedNode(0);
    first->appendToTail(10);
    first->appendToTail(22);
    first->appendToTail(0);
    first->appendToTail(10);
    first->appendToTail(0);

    int n = 0;
    LinkedNode *result = LinkedLists::nthToLast(first, n);

    std::cout<<result->data;

    return 0;
}