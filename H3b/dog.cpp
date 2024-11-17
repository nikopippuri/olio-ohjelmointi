#include "dog.h"

Dog::Dog() {
     cout << "Dog construktori." << endl;
}

Dog::~Dog()
{
    cout << "Dog destruktori." << endl;
}

void Dog::callOut()
{
    cout << "Koira haukkuu." << endl;
}
