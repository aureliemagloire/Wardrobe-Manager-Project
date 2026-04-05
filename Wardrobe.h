#ifndef WARDROBE_H
#define WARDROBE_H
#include "Garment.h"
#include "GarmentList.h"
#include "Section.h"
#include <iostream>
#include <string>
using namespace std;

class Wardrobe {
    private:
        string wardrobeName;
        Section* sections;
    public:
        // constructor
        Wardrobe(string name = ""){
            wardrobeName = name;
            sections = nullptr;
        }
};

#endif