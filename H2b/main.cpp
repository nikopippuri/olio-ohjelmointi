#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<Car> CarList;

  Car objCar1 = Car("Toyota", "Avensis", 2015);
  Car objCar2 = Car("Nissan", "Sunny", 1992);
  Car objCar3 = Car("Tesla", "Model S", 2023);

  CarList.push_back(objCar1);
  CarList.push_back(objCar2);
  CarList.push_back(objCar3);

  cout << "Listan toinen alkio: " << endl;
  CarList[1].printData();

  for (const Car &car : CarList) {
    cout << "------Auton tietoja-------------" << endl;
    cout << "Merkki: " << car.getBrand() << endl;
    cout << "Malli: " << car.getModel() << endl;
    cout << "Vuosimalli: " << car.getYearModel() << endl;
  }

  return 0;
}
