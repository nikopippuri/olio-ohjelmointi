#include "myfunctions.h"


void calcSum(int a, int b){
    int summa = a+b;
    cout << summa << endl;
}

void calcDiv(int a, int b){

    if(b == 0){
        throw runtime_error("Jakaja ei voi olla nolla");
    }

    else {

    int osamaara = a/b;
        cout << osamaara << endl;
    }
}

int retSum(int a, int b)
{
    int summa = a+b;
    return summa;

}

float retDiv(int a, int b)
{
    if(b == 0){
        throw runtime_error("Jakaja ei voi taaskaan olla nolla");
    }

    float osamaara = static_cast<float>(a)/b; // muunnetaan a ennen jakolaskua..
    return osamaara;

}
