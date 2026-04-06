// Aurelie Magloire & Micah Burnett

// Deliverable 1: Design + Linked List

/* 
Create UML design for objects (Garment, Section, Wardrobe, Linked List).
Implement singly linked list with insert, remove, traversal, and copy behavior.
Garment domain object with private fields for: id, name, type, color, cleanliness status, and getters/setters.

Todo next:
remove, traverse, copy methods for linked list
test driver for linked list
*/

#include <iostream>
#include <string>
#include "Garment.h"
#include "GarmentList.h"
#include "Section.h"
#include "Wardrobe.h"
using namespace std;

int main() {
    GarmentList list;
Garment g1;
    g1.SetID(1);
    g1.SetName("jacket");
    g1.SetType("top");
    g1.SetColor("blue");
    g1.SetIsClean(true);

Garment g2;
    g1.SetID(2);
    g1.SetName("leggings");
    g1.SetType("bottoms");
    g1.SetColor("black");
    g1.SetIsClean(false);

Garment g3;
    g1.SetID(3);
    g1.SetName("tank top");
    g1.SetType("top");
    g1.SetColor("pink");
    g1.SetIsClean(true);
    //create nodes 
    
    Node * n1 = new Node; 
    n1->data = g1;
    n1->next = nullptr;

    Node * n2 = new Node; 
    n1->data = g2;
    n1->next = nullptr;\

    Node * n3 = new Node; 
    n1->data = g3;
    n1->next = nullptr;
    

}
