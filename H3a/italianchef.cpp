#include "italianchef.h"

ItalianChef::ItalianChef(string nimi) : Chef(nimi) {
  this->name = name;
  cout << "Chef " << name << " italian konstruktori" << endl;
}

string ItalianChef::getName() {
  string nimi = this->name;
  cout << "Nimi on " << nimi << endl;
  return nimi;
}

ItalianChef::~ItalianChef() {

  cout << "Chef " << name << " italian dekonstruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Chef " << name << " makes pasta" << endl;
}
