#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main() {
  // Vaihe 1: Car-luokka
  Car objCar;
  objCar.setBrand("Toyota");
  objCar.setModel("Yaris");
  objCar.setYearModel(2021);

  objCar.printData();

  // Vaihe 2: Rectangle-luokka

  Rectangle *objRectangle;
  objRectangle = new Rectangle;

  objRectangle->setHeight(10);
  objRectangle->setWidth(20);
  cout << "______SUORAKULMIA____________________" << endl;
  cout << "Suorakulman pinta-ala on: " << objRectangle->getArea() << endl;
  cout << "Suorakulman ymparysmitta on: " << objRectangle->getCircum() << endl;

  delete objRectangle;
  objRectangle = nullptr;

  // Vaihe 3: Student-luokka

  unique_ptr<Student> objStudent = make_unique<Student>();
  objStudent->setName("Olli Opiskelija");
  objStudent->setStudentNumber(1234);
  objStudent->setAvarage(9.6);

  cout << "_____________OPISKELIJA HOMMIA________" << endl;
  cout << "Opiskelijan nimi: " << objStudent->getName() << endl;
  cout << "Opislijan idnumero: " << objStudent->getStudentNumber() << endl;
  cout << "Opiskelijan keskiarvo: " << objStudent->getAvarage() << endl;

  return 0;
}
