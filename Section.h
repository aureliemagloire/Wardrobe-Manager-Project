#ifndef SECTION_H
#define SECTION_H
#include "Garment.h"
#include "GarmentList.h"
#include <iostream>
#include <string>
using namespace std;


class Section {
    private:
        string sectionName;
        GarmentList garments;
    public:
        // constructor
        Section(string name = ""){
            sectionName = name;
        }
};

#endif