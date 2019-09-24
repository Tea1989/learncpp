#include <iostream>
#include <string>

using namespace std;

class Animal {
    
    public:
        Animal(string n, string o);
        void printInfo();
        ~Animal(); //deconstructor method
        
    private:
        string name;
        string owner;
};

Animal::Animal(string n, string o) {
    name = n;
    owner = o;
}

void Animal::printInfo() {
    cout <<"Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}

Animal::~Animal() {
    cout << "BYE BYE " << name << endl;
}

int main(int argc, char **argv) {
    
    Animal fred("Fred", "Nate");
    fred.printInfo();
    Animal *bob = new Animal("Bob", "Chance");
    bob->printInfo();
    delete bob;
    
    cout << "Hello Class" << endl;
}