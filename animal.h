#include <iostream>
#include <string>
#include "address.h"

#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal {
public:
    Animal(string n, string o);
    void printInfo();
    void setAddress(string addressString);
    ~Animal();
private:
    string name;
    string owner;
    Address *add;
    
};

#endif