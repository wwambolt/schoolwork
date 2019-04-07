Lab Assignment 4
Create a singleton class Randomizer with the following methods:

•static Randomizer& instance() -- returns a reference to the sole Randomizer object •nextInt(int high) -- returns an int in the range [0..high-1) •nextInt(int low, int high) -- returns an int in the range [low..high) •die(int sides) -- returns an int in the range [1..sides] •nextDouble() -- returns a double in the range [0,1) •randomChar(const string& s) -- returns a char selected at random from s (each character in the string is equally likely) Allow or forbid constructors and operators as appropriate for a singleton class.

In the implementation you may use the c functions rand() and srand(), and use the time() function to seed srand -- as in srand(time(NULL)).  You will need to include ctime and cstdlib to get those functions.

Pass in a tar file containing (and containing only) the files:

•Randomizer.h •Randomizer.cpp Your tar file should NOT be compressed at all.  It should NOT have the required files embedded in a folder.  It should not be a tar of a zipped file.  When you execute tar -tf, only the two files shown should appear. 

Name your tar file with your student number followed by "-lab4" (e.g. 100000666-lab4.tar). 
