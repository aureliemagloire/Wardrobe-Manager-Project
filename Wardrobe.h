#ifndef WARDROBE_H
#define WARDROBE_H
#include "GarmentList.h"
#include "Section.h"
#include "LaundryStack.h"
#include "OutfitQueue.h"
#include <iostream>
#include <string>
using namespace std;

struct SectionNode {
    Section data;
    SectionNode* next;
    SectionNode(){
        data = d;
        next = nullptr;
    }
};

class Wardrobe {
    private:
        SectionNode* head;
        LaundryStack laundry;
        OutfitQueue outfits;
        int nextId;

    public:
        Wardrobe(){
            head = nullptr;
        }

        ~Wardrobe(){
            Clear();
        }

        void addSection(string name){
            Section newSection(name);
            SectionNode* newNode = new SectionNode(newSection);

            if (!head){
                head = newNode;
            } else {
                SectionNode* temp = head;
                while (temp->next) temp = temp->next;
                temp->next = newNode;
            }
            cout << "Section " << name << "added." << endl;
        }

        void addClothestoSection(string sectionName, string name, string type, string color){
            SectionNode* temp = head;
            while (temp != nullptr){
                if (temp->data.getName() == sectionName){
                    Garment g(nextId++, name, type, color, true);
                    temp->data.add(g);
                    cout << "Added " << color << " " << name << " Id: " << g.getId() << " to " << sectionName << endl;
                    return;
                }
                temp = temp->next;
            }
            cout << "Section not found." << endl;
        }

        // laundry

        void markDirty(int id){
            laundry.Push(id);
            cout << "Garment ID " << id << " is in the hamper." << endl;
        }

        void washNext(){
            int washed = laundry.Pop();
            if (washed != -1){
                cout << "Garment ID: " << washed << " has been washed." << endl;
            }
        }

        // outfit 

        void showAll(){
            if (!head){
                cout << "Wardrobe is empty." << endl;
                return;
            }

            SectionNode* temp = head;
            while (temp != nullptr){
                cout << temp->data.getName() << " " << endl;
                temp = temp->next;
            }
            cout << "Amount of garments in the hamper: " << laundry.size() << endl;
            cout << "Outfits planned: " << outfits.size() << endl;
        }

};

#endif