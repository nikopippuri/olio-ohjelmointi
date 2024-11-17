#include "animal.h"

Animal::Animal() {
        cout << "Animal construktori." << endl;
}

Animal::~Animal()
{
    cout << "Animal destruktori." << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}
