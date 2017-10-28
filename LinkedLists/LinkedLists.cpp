//
// Created by vladimir on 28/10/17.
//

#include "LinkedLists.h"

LinkedNode *LinkedLists::deleteNode(LinkedNode *head, int data) {
    LinkedNode *iter = head;

    if (iter->data == data) {
        return head->next;
    }

    while (iter->next != nullptr) {
        if (iter->next->data == data) {
            iter->next = iter->next->next;
            return head;
        }
        iter = iter->next;
    }

    return head;
}

void LinkedLists::removeDuplicates(LinkedNode *&list) {
    LinkedNode *iter = list;

    while (iter->next != nullptr) {
        LinkedNode *checker = iter;

        while (checker->next != nullptr) {
            if (iter->data == checker->next->data) {
                checker->next = checker->next->next;
                continue;
            }

            checker = checker->next;

        }

        iter = iter->next;
    }
}

LinkedNode* LinkedLists::nthToLast(LinkedNode *&list, int &n) {
    LinkedNode *result = nullptr;

    if (list->next != nullptr) {
        result = nthToLast(list->next, n);
    }

    if(n == 0) {
        result = list;
    }

    n--;

    return result;
}