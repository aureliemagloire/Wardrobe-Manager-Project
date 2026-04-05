#ifndef GARMENT_H
#define GARMENT_H
#include <iostream>
#include <string>
#include <iostream>
#include <string>
using namespace std;

class Garment {
    private:
        int id;
        string name;
        string type;
        string color;
        bool isClean;

    public:
    // constructor
        Garment(int id = 0, string name = "", string type = "", string color = "", bool isClean = true){
            this -> id = id;
            this -> name = name;
            this -> type = type;
            this -> color = color;
            this -> isClean = isClean;
        }
    // getters and setters
        int getId() const {
            return id;
        }
        void setId(int num){
            id = num;
        }

        string getName() const {
            return name;
        }
        void setName(string str){
            name = str;
        }

        string getType() const {
            return type;
        }
        void setType(string t){
            type = t;
        }

        string getColor() const {
            return color;
        }
        void setColor(string c){
            color = c;
        }

        bool getIsClean() const {
            return isClean;
        }
        void setIsClean(bool clean){
            isClean = clean;
        }

};

#endif