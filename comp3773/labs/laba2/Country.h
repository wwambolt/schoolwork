/* File foo.  */
#ifndef FILE_FOO_SEEN
#define FILE_FOO_SEEN

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Country
{
public:
    static int country_num;

    Country();
    Country(string name, long population);
    ~Country();
    
    string getName();
    long getPopulation();
    
    void setName(const string& para_name);
    void setPopulation(long para_pop);
    
    static int numberOfCountries();
    
private:
    string country_name;
    long country_pop;

    // Make assignment and copying illegal
    Country(const Country&);
    void operator = (const Country&);
};

#endif