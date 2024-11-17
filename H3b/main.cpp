#include "animal.h"
#include "dog.h"


#include <iostream>

using namespace std;

int main()
{

    Animal elukka = Animal();
    elukka.callOut();

    Dog koira = Dog();
    koira.callOut();


    return 0;
}
