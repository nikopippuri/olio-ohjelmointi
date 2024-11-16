#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {
  ItalianChef anttoni = ItalianChef("Anthony Bourdain");

  anttoni.makeSalad();
  anttoni.makeSoup();
  anttoni.makePasta();
  anttoni.getName();

  return 0;
}
