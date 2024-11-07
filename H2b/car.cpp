#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "----------Auton tiedot-----" << endl;
    cout << "Merkki: " << this->getBrand() << endl;
    cout << "Malli: " << this->getModel() << endl;
    cout << "Vuosimalli: " << this->yearModel << endl;
}

Car::Car() {}

Car::Car(string br, string mo, int ye)
{
    this->brand = br;
    this->model = mo;
    this->yearModel = ye;
}
