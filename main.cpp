#include <iostream>
#include "LinkedLists/LinkedLists.h"

int main() {

    auto *first = new LinkedNode(3);
    first->appendToTail(1);
    first->appendToTail(5);

    auto *second = new LinkedNode(5);
    second->appendToTail(9);
    second->appendToTail(2);
    second->appendToTail(3);

    LinkedNode * result = LinkedLists::addNumbers(first, second);

    while(result != nullptr) {
        std::cout<<result->data;
        result = result->next;
    }

    return 0;
}