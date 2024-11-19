#include "car.h"

string Car::getModel() const { return model; }

void Car::setModel(const string &newModel) { model = newModel; }

string Car::getBrand() const { return brand; }

void Car::setBrand(const string &newBrand) { brand = newBrand; }

void Car::printDetails() {
  cout << "Auto: " << this->getModel() << " " << this->getBrand() << endl;
  cout << "Moottori: " << this->objEngine.getHorsepower() << "hp, "
       << this->objEngine.getDisplacement() << " L" << endl;
  cout << "Rengas 1: " << this->objWheel1.getSize() << " tuumaa, "
       << this->objWheel1.getType() << endl;
  cout << "Rengas 2: " << this->objWheel2.getSize() << " tuumaa, "
       << this->objWheel2.getType() << endl;
  cout << "Rengas 3: " << this->objWheel3.getSize() << " tuumaa, "
       << this->objWheel3.getType() << endl;
  cout << "Rengas 4: " << this->objWheel4.getSize() << " tuumaa, "
       << this->objWheel4.getType() << endl;
}

Car::Car() {
}

Car::~Car() {
//    cout << "CAR tuhottu" << endl;
}

Car::Car(string malli, string merkki) {

//  cout << "CAR luotu" << endl;
  this->setModel(malli);
  this->setBrand(merkki);
}

void Car::setEngine() {

  objEngine.setHorsepower(150);
  objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
  objWheel1.setSize(17);
  objWheel1.setType("kesarengas");

  objWheel2.setSize(17);
  objWheel2.setType("kesarengas");

  objWheel3.setSize(17);
  objWheel3.setType("kesarengas");

  objWheel4.setSize(17);
  objWheel4.setType("kesarengas");
}
