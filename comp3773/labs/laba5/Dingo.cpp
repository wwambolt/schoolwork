#include "Dingo.h"

#include <iostream>
using namespace std;

// "ProductB1" 

void Dingo::Eat(Herbivore* h)
{
  // Eat Wildebeest 
  cout << "Dingo eats " << h->Name() << endl;
}

