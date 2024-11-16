#include "chef.h"

Chef::Chef(string name) {
  this->name = name;
  cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() { cout << "Chef " << name << " dekonstruktori" << endl; }

void Chef::makeSalad() { cout << "Chef " << name << " makes salad" << endl; }

void Chef::makeSoup() { cout << "Chef " << name << " makes soup" << endl; }
