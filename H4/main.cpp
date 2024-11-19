#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car kiesi = Car("Corolla", "Toyota");
    kiesi.setEngine();
    kiesi.setWheels();
    kiesi.printDetails();

    return 0;
}
