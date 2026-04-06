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
void CopyList (const LinkedList & other){
    Node* otherCurr = other.head; //starts the copying at the head of list 
while (otherCurr != nullptr){//going through each node in the other list
    Node* newNode = new Node;
    newNode ->data =otherCurr->data;
    if (head == nullptr) { //if list is empty new node becomes head and tail 
        head = newNode;
        tail = newNode;
    }
        else {
            //put new node at the end 
            tail->next=newNode;
            tail= newNode;
        }
    otherCurr = otherCurr-> next;// moving to next node in the other list
}
}
    

    public:
        // constructor
        LinkedList(){
            head = nullptr;
            tail = nullptr;
        }
LinkedList (const LinkedList& other) {
    head = nullptr;
    tail = nullptr;
    CopyList(other);
}
};

        // insert new node
        void Insert(Node* newNode, Node* currNode){
            // if head points to null, new node will be head and tail
            if(head == nullptr){
                head = newNode;
                tail = newNode;
                newNode ->next = nullptr;
            }
            // if current node is at the end, new node will be new tail
            else if(currNode == tail){
                tail -> next = newNode;
                tail = newNode;
                newNode ->next = nullptr;
            }
            // current node will point to new node
            else {
            newNode -> next = currNode -> next;
            currNode -> next = newNode;
            }
        }

        // remove node
void RemoveTail () {
    if (head == nullptr) { // check if list is empty 
        return; }
    
    if (head == tail) { //if its only one node 
        delete head; 
        head = nullptr;
        tail = nullptr;
        return;} 
    
    Node* curr = head; //more than one node
    
    while (curr->next != tail) {//getting to the node right before the tail 
        curr = curr->next;
    }
    delete tail; //deleting old tail
    tail =curr; //new tail 
    tail ->next = nullptr; 
}
        // traverse 
void Traverse() {
    Node* curr = head;
    while (curr != nullptr) {
        cout<< curr->data.GetName();
        curr = curr->next;
    }
}


};
#endif
