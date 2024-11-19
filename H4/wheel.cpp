#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

Wheel::Wheel() {
//    cout << "RENGAS luotu" << endl;
}

Wheel::Wheel(int koko, string tyyppi)
{

    this->setSize(koko);
    this->setType(tyyppi);
}

Wheel::~Wheel()
{
//    cout << "RENGAS tuhottu" << endl;
}
