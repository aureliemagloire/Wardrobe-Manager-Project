#ifndef LAUNDRYSTACK_H
#define LAUNDRYSTACK_H
#include "Garment.h"
#include "GarmentList.h"
#include "Section.h"
#include "Wardrobe.h"
#include "OutfitQueue.h"
#include <iostream>
#include <string>
using namespace std;

class LaundryStack{
    Node * top;
    int count;
    int data; 

    public:
        LaundryStack(){
            top = nullptr;
            count = 0;
        }

        // push dirty items or add to dirty pile
        void Push(int item) {
            Node* temp = new Node();
            temp->next = top;
            top = temp;
            count++;
        }

        // to wash dirty items, remove from top of pile
        int Pop(int item) {
            if (top == NULL) {
                cout << "empty" << endl;
                return -1;
            }
            
            Node* temp = top;
            top = top->next;
            item = temp->data; // error: no conversion from Garment to int exists fixed: 
            delete temp;
            return item;
             count--;
        }

        // empty pile
        void Clear() {
            Node* curr = top; 
            while (curr != nullptr) { 
                Node* temp = curr;
                curr = curr->next; 
                delete temp;
            }
            top = nullptr;
            count = 0;
        }

        // size of stack
        int size() const {
            return count;
        }

};



#endif