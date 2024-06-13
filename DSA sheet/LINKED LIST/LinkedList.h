#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};

#endif