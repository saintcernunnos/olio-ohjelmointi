#include "dog.h"

void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}
Dog::~Dog() {
    cout << "Dog destruktori" << endl;
}
