#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

Animal::Animal(string name, string owner) {
    Animal::name = name;
    Animal::owner = owner;
    add = NULL;
}

void Animal::setAddress(string addressString) {
    add = new Address(addressString);
}

void Animal::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
    if (add != NULL) {
        add->printAddress();
    }
}

Animal::~Animal() {
    cout << "BYE BYE " << name << endl;
    if (add != NULL) {
        delete add;
    }
}