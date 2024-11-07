#include "car.h"

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}

Car::Car() {}

void Car::printData()
{
    cout <<"_____________CAR INFO_________________"<< endl;
    cout << "Merkki: " << this->getBrand() << endl;
    cout << "Malli: " << this->getModel() << endl;
    cout << "Vuosimalli: " << this->getYearModel() << endl;

}
