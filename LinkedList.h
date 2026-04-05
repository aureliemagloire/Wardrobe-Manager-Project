#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Garment.h"
#include <iostream>
#include <string>
using namespace std;

struct Node {
    Garment data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
        // constructor
        LinkedList(){
            head = nullptr;
            tail = nullptr;
        }

        // insert new node
        void Insert(Node* newNode, Node* currNode){
            // if head points to null, new node will be head and tail
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            // if current node is at the end, new node will be new tail
            else if(currNode = tail){
                tail -> next = newNode;
                tail = newNode;
            }
            // current node will point to new node
            else {
            newNode -> next = currNode -> next;
            currNode -> next = newNode;
            }
        }

        // remove node

        // traverse 

        // copy}

};
#endif