// Aurelie Magloire & Micah Burnett

// Final Deliverable

#include <iostream>
#include <string>
#include "Garment.h"
#include "GarmentList.h"
#include "Section.h"
#include "Wardrobe.h"
#include "LaundryStack.h"
#include "OutfitQueue.h"

using namespace std;

int main() {
    Wardrobe myWardrobe;
    int choice = -1;

    // section demo
    myWardrobe.addSection("Tops");
    myWardrobe.addSection("Bottoms");
    myWardrobe.addClothestoSection("Tops", "tank", "shirt", "pink");
    
    while (choice != 0){
        cout << "-- Wardrobe Manager --" << endl;
        cout << " 1. Add Section. \n 2. Add Garment. \n 3. Mark Dirty. \n 4. Wash next. \n 5. Plan Outfit. \n 6. Wear Next. \n 7. Show All. \n 0. Exit. \n";

        cout << "ENTER: " << endl;
        cin >> choice;

        if (choice == 1){
            string sectionName;
            cout << "Enter a new section name: ";
            cin >> sectionName;
            myWardrobe.addSection(sectionName);

        } else if (choice == 2){
            string sectionName, name, type, color;
            cout << "Which section? ";
            cin >> sectionName;
            cout << "Garment Name: ";
            cin >> name;
            cout << "Garment Type: ";
            cin >> type;
            cout << "Garment Color: ";
            cin >> color;
            myWardrobe.addClothestoSection(sectionName, name, type, color);
        
        } else if (choice == 3){
            int id;
            cout << "Enter the Garment ID of dirty clothes: ";
            cin >> id;
            myWardrobe.markDirty(id);

        } else if (choice == 4){
            myWardrobe.washNext();
        } else if (choice == 5){
            int id;
            cout << "Enter the Garment Id of your outfit: ";
            cin >> id;
            myWardrobe.outfits(id);

        } else if (choice == 6){
            myWardrobe.wearNext();
        } else if (choice == 7){
            myWardrobe.showAll();

        } else if (choice == 0) {
            cout << "Exiting Wardrobe." << endl;
        } else {
            cout << "Invalid." << endl;
        }
    }

    // GarmentList list;
    // LaundryStack Hamper;
    // OutfitQueue outfitQueue;

    // // create garments
    // Garment g1;
    //     g1.setId(1);
    //     g1.setName(" jacket ");
    //     g1.setType("top");
    //     g1.setColor("blue");
    //     g1.setIsClean(true);

    // Garment g2;
    //     g2.setId(2);
    //     g2.setName(" leggings ");
    //     g2.setType("bottoms");
    //     g2.setColor("black");
    //     g2.setIsClean(false);

    // Garment g3;
    //     g3.setId(3);
    //     g3.setName(" tank ");
    //     g3.setType("top");
    //     g3.setColor("pink");
    //     g3.setIsClean(true);

    //     //create nodes 

    //     // test push back
    //     list.PushBack(g1);
    //     list.PushBack(g2);
    //     list.PushBack(g3);

    //     // test size traverse and find
    //     cout << "List: " << list.size() << " " << endl;
    //     list.Traverse();
    //     cout << endl;

    //     cout << "\nFind ID 2: " << list.FindById(2)->getName() << endl;
    //     cout << endl;

    //     // test remove
    //     cout << "Removing ID: " << (list.RemoveById(2)) << endl;
        
    //     cout << "List: " << list.size() << " " << endl;
    //     list.Traverse();
    //     cout << endl;


    //     // test laundry stack
    //     cout << "Putting clothes in the hamper" << endl;
    //     Hamper.Push(1); 
    //     Hamper.Push(2);
    //     Hamper.Push(3);
        
    //     cout << "Number of clothes in the hamper: " << Hamper.size() << endl;
        
    //     Hamper.Pop();

    //     cout << "ID of clothes being washed: " << Hamper.Pop() << endl;
        
    //     cout << "Garmenets: " << list.size() << " " << endl;
    //     list.Traverse();
    //     cout << endl;

    //     //tesing outfit queue 
    //     cout << "Outfit Queue Test";
    //         outfitQueue.enqueue(g1);
    //         outfitQueue.enqueue(g2);
    //         outfitQueue.enqueue(g3);

    //     cout << "Outfit Queue: "<<endl;
    //     outfitQueue.displayQueue();

    //     cout << "next item: "; << outfitQueue.peek().getName() 
    //     outfitQueue.dequeue();

    //     cout << "After that one item:"<<endl;
    //     outfitQueue.displayQueue();


        return 0;
    }