#ifndef LAUNDRYSTACK_H
#define LAUNDRYSTACK_H
#include <iostream>
#include <string>
using namespace std;

struct StackNode {
    int id;
    StackNode* next;
    StackNode(int i){
        id = i;
        next = nullptr;
    }
};

class LaundryStack{
    StackNode * top;
    int count;

    public:
        LaundryStack(){
            top = nullptr;
            count = 0;
        }

        ~LaundryStack() {
            Clear();
        }

        // push dirty items or add to dirty pile
        void Push(int id) {
            StackNode* temp = new StackNode(id);
            temp->next = top;
            top = temp;
            count++;
        }

        // to wash dirty items, remove from top of pile
        int Pop() {
            if (top == NULL) {
                cout << "Pile is empty." << endl;
                return -1;
            }
            
            StackNode* temp = top;
            int item = temp->id; // get id
            top = top->next; // move top pointer
            // prev error: no conversion from Garment to int exists fixed: created private stack StackNode for stack that holds int
            delete temp;

            count--;
            return item;
        }

        void Clear() {
            StackNode* curr = top; 
            while (curr != nullptr) { 
                StackNode* temp = curr;
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