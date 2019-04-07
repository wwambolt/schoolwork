#include "AustraliaFactory.h"
#include "Rabbit.h"
#include "Dingo.h"

// "ConcreteFactory1" 

Herbivore* AustraliaFactory::CreateHerbivore()
{
  return new Rabbit;
}

Carnivore* AustraliaFactory::CreateCarnivore()
{
  return new Dingo;
}

