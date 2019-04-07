#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include <ctime>
#include <cstdlib>
#include <cmath>

#include "Randomizer.h"

Randomizer * Randomizer::rand_instance_ = NULL;

Randomizer::Randomizer()
{
    ;
}
Randomizer& Randomizer::instance()
{
    srand(time(NULL));

    //returns a reference to the sole Randomizer object
    if (!rand_instance_)
        rand_instance_ = new Randomizer();

    return * rand_instance_;
}
int Randomizer::nextInt(int high)
{
    // returns an int in the range [0..high-1)
    return (rand() % (high - 1));
}
int Randomizer::nextInt(int low, int high)
{
    // returns an int in the range [low..high)
    return ( (rand() % (high - low)) + low);
}
int Randomizer::die(int sides)
{
    // returns an int in the range [1..sides]
    return ( (rand() % sides ) + 1);
}
double Randomizer::nextDouble()
{
    // returns a double in the range [0,1)
    return ( (double) rand() / (double) RAND_MAX );
}
char Randomizer::randomChar(const string& s)
{
    // returns a char selected at random from s
    // (each character in the string is equally likely)
    int index = (rand() % (s.length()));
    return s[index];
}