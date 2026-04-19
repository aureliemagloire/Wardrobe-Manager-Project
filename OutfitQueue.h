#ifndef OUTFITQUEUE
#define OUTFITQUEUE
#include "Garment.h"
#include "GarmentList.h"
#include "Section.h"
#include "Wardrobe.h"
#include "LaundryStack.h"
#include <iostream>
#include <string>
using namespace std;

class OutfitQueue{
    private:
        GarmentList list; //queue linked list

    public:
        OutfitQueue();
        void enqueue (const Garment& g); // adding to the back
        void dequeue ();
        Garment peek () const;
        bool isEmpty() const;
        void displayQueue () const;
}; 
#endif 








};

#endif