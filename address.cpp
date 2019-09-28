#include <iostream>
#include <string>
#include "address.h"

using namespace std;

Address::Address(string address) {
    Address::address = address;
}

void Address::printAddress() {
    cout <<"Address: " << address << endl;
}

Address::~Address() {
    cout << "Address: " << address << "DELETED" << endl;
}