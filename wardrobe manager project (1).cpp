// Aurelie Magloire & Micah Burnett

// Deliverable 1: Design + Linked List

/* 
- Implement Garment object with required attributes.
- Implement Section storing garments using your linked list.
- Deliverables: Garment + Section code, demo showing add/list/remove.
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

    // create garments
Garment g1;
    g1.setId(1);
    g1.setName("jacket");
    g1.setType("top");
    g1.setColor("blue");
    g1.setIsClean(true);

Garment g2;
    g2.setId(2);
    g2.setName("leggings");
    g2.setType("bottoms");
    g2.setColor("black");
    g2.setIsClean(false);

Garment g3;
    g3.setId(3);
    g3.setName("tank top");
    g3.setType("top");
    g3.setColor("pink");
    g3.setIsClean(true);

    //create nodes 

    // test push back
    list.PushBack(g1);
    list.PushBack(g2);
    list.PushBack(g3);

    // test size traverse and find
    cout << "Size: " << list.size() << endl;
    cout << "List: " << endl;
    list.Traverse();
    cout << endl;
    cout << "Find ID 2: " << list.FindById(2)->getName() << endl;
    cout << endl;

    // test remove
    cout << "Removing ID 3: " << (list.RemoveById(2)) << endl;

    cout << "List: " << list.size() << endl;
    list.Traverse();

    return 0;
}
