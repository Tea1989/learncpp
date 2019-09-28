#include <iostream>
#include <string>
#include "animal.h"
#include "address.h"

using namespace std;

int main(int argc, char **argv) {
    Animal fred("Fred", "Nate");
    fred.setAddress("BYUH");
    fred.printInfo();
    
    Animal *bob = new Animal("Bob", "Chance");
    bob->printInfo();
    
    delete bob;
    cout << "Hello Class" << endl;
}