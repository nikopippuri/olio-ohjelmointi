#include "engine.h"

int Engine::getHorsepower() const { return horsepower; }

void Engine::setHorsepower(int newHorsepower) { horsepower = newHorsepower; }

double Engine::getDisplacement() const { return displacement; }

void Engine::setDisplacement(double newDisplacement) {
  displacement = newDisplacement;
}

Engine::Engine() {
//    cout << "ENGINE luotu" << endl;
}

Engine::Engine(int hp, double disp) {

  this->setHorsepower(hp);
  this->setDisplacement(disp);
}

Engine::~Engine() {
//    cout << "ENGINE tuhottu" << endl;
}
