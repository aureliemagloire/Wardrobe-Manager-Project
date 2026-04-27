#include "OutfitQueue.h"
//// constructor
OutfitQueue::OutfitQueue() {}

// add to back
void OutfitQueue::enqueue(const Garment& g) {
    list.PushBack(g);
}

// remove from front
void OutfitQueue::dequeue() {
    if (!list.isEmpty()) {
        list.RemoveFront();
    } else {
        cout << "Queue is empty.\n";
    }
}

// look at front
Garment OutfitQueue::peek() const {
    if (!list.isEmpty()) {
        return list.GetFront();
    } else {
        cout << "Queue is empty.\n";
        return Garment();
    }
}
// check empty
bool OutfitQueue::isEmpty() const {
    return list.isEmpty();
}

// display
void OutfitQueue::displayQueue() const {
    list.Traverse();
}