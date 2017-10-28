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

LinkedNode *LinkedLists::nthToLast(LinkedNode *&list, int &n) {
    LinkedNode *result = nullptr;

    if (list->next != nullptr) {
        result = nthToLast(list->next, n);
    }

    if (n == 0) {
        result = list;
    }

    n--;

    return result;
}

void LinkedLists::deleteInPlace(LinkedNode *&elem) {
    if (elem == nullptr || elem->next == nullptr) {
        return;
    }

    elem->data = elem->next->data;
    elem->next = elem->next->next;
}

LinkedNode *LinkedLists::addNumbers(LinkedNode *num1, LinkedNode *num2) {
    LinkedNode *result = nullptr;

    // We now have numbers with equal lengths
    int remainder = 0;

    while(num1 != nullptr || num2 != nullptr) {
        int next = remainder;

        if(num1 != nullptr) {
            next += num1->data;
            num1 = num1->next;
        }

        if (num2 != nullptr) {
            next += num2->data;
            num2 = num2->next;
        }

        int digit = next % 10;

        if(result == nullptr) {
            result = new LinkedNode(digit);
        } else {
            result->appendToTail(digit);
        }

        remainder = next / 10;
    }

    if(remainder != 0) {
       result->appendToTail(1);
    }

    return result;
}

int LinkedLists::getLength(LinkedNode *list) {
    int len = 0;

    while (list != nullptr) {
        len++;
        list = list->next;
    }

    return len;
}