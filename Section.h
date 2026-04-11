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

        // add garment to section
        void addGarment(Garment g){
            garments.PushBack(g);
        }

        // remove
        bool remove(int id){
            return garments.RemoveById(id);
        }

        Garment* find(int id){
            return garments.FindById(id);
        }
};

#endif