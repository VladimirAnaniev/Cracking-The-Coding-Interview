//
// Created by vladimir on 28/10/17.
//

#ifndef CRACKINGTHECODINGINTERVIEW_LINKEDLISTS_H
#define CRACKINGTHECODINGINTERVIEW_LINKEDLISTS_H

struct LinkedNode {
    int data;
    LinkedNode *next;

    explicit LinkedNode(int data): data(data), next(nullptr) {}

    void appendToTail(int data) {
        auto *end = new LinkedNode(data);

        LinkedNode *iter = this;
        while(iter->next != nullptr) {
            iter = iter->next;
        }
        iter->next = end;
    }


};


class LinkedLists {
    static int getLength(LinkedNode *list);
public:
    static LinkedNode *deleteNode(LinkedNode *head, int data);

    static void removeDuplicates(LinkedNode *&list);

    static LinkedNode *nthToLast(LinkedNode *&list, int &n);

    static void deleteInPlace(LinkedNode *&elem);

    static LinkedNode *addNumbers(LinkedNode *num1, LinkedNode *num2);

};


#endif //CRACKINGTHECODINGINTERVIEW_LINKEDLISTS_H
