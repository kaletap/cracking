#include <cstddef>

#ifndef NODE_H
#define NODE_H


class Node {
    public:
    int value;
    Node* next;

    Node(int value);
    Node(int value, Node* next);
};

#endif
