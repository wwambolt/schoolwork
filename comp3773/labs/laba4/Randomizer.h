#ifndef RAND_SEEN
#define RAND_SEEN

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Randomizer
{
    public:
        // returns a reference to the sole Randomizer object
        static Randomizer& instance();
        // returns an int in the range [0..high-1)
        int nextInt(int high);
        // returns an int in the range [low..high)
        int nextInt(int low, int high);
        // returns an int in the range [1..sides]
        int die(int sides);
        // returns a double in the range [0,1)
        double nextDouble();
        // returns a char selected at random from s
        // (each character in the string is equally likely)
        char randomChar(const string& s);
    private:
        // Make explicit constructing, assignment and copying illegal
        Randomizer();
        Randomizer(const Randomizer&);
        void operator = (const Randomizer&);
        static Randomizer * rand_instance_;
};

#endif