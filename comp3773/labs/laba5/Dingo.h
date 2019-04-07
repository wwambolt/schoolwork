// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef DINGO_H
#define DINGO_H

#include "Carnivore.h"

// "ProductB1" 

class Dingo : public Carnivore
{
  public:
    virtual void Eat(Herbivore* h);
};

#endif
