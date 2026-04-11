#ifndef GARMENTLIST_H
#define GARMENTLIST_H
#include "Garment.h"
#include <iostream>
#include <string>
using namespace std;

struct Node {
    Garment data;
    Node* next;
    Node(Garment g = Garment()) {
        data = g;
        next = nullptr;
    }
};

class GarmentList {
    private:
        Node* head;
        Node* tail;
        int count; // keeps track of number of nodes in the list

    void CopyList (const GarmentList & other){
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
        GarmentList(){
            head = nullptr;
            tail = nullptr;
            count = 0;
        }

        GarmentList (const GarmentList& other) {
            head = nullptr;
            tail = nullptr;
            count = 0; // initial count to 0 before copying
            CopyList(other);
        }

        // destructor
        ~GarmentList(){
            Node* curr = head;
            while (curr != nullptr) {
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
        }


        // insert new node
// changed func name from insert to pushback, added count so it updates when a node is added
        void PushBack(Garment g){
            Node* newNode = new Node(g);
            Node* currNode = head;
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
            count ++;
        }

        // remove node
// changed this function to remove by id instead of the last node
        bool RemoveById (int id) {
            if (head == nullptr) { // check if list is empty 
                return false;
            }
    
            // if we want to remove head node
            if(head->data.getId() == id) {
                Node* temp = head;
                head = head->next;
                    // if list is empty
                if (head == nullptr){
                    tail = nullptr;
                }
                
                // delete old head node
                delete temp;
                count--; //decreases count when a node is removed
                return true;
            }
            
            // removing node (not head)
            Node* curr = head;
            // lopp until curr is at end
            while (curr->next != nullptr) { 
                // if the next node matches id, remove
                if (curr->next->data.getId() == id) { 
                    Node* temp = curr->next;
                    curr->next = temp->next;

                    // if removed tail, update new tail
                    if (temp == tail){ 
                        tail = curr;
                    }

                    delete temp;
                    count--; // decreases count when a node is removed
                    return true;
                }
                curr = curr->next; // move to next node
            }

            return false; //id not found
        }

        // find node by id
        Garment* FindById(int id) {
            Node* curr = head;
            while (curr != nullptr) {
                if (curr->data.getId() == id) {
                    return &(curr->data); // returns pointer if id foud
                }
                curr = curr->next;
            }
            return nullptr; // id not found
        }
        
        // clear list
        void Clear() {
            Node* curr = head; 
            while (curr != nullptr) { 
                Node* temp = curr;
                curr = curr->next; 
                delete temp;
            }
            head = nullptr;
            tail = nullptr;
            count = 0;
        }

        int size() const {
            return count;
        }

        // traverse 
        void Traverse() {
            Node* curr = head;
            while (curr != nullptr) {
                cout<< curr->data.getName();
                curr = curr->next;
            }
        }


};
#endif
