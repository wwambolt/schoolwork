#include <iostream>
#include <string>
#include <iomanip>
#include "Country.h"
using namespace std;

int
main()
{
    cout << "Number of countries: " << Country::numberOfCountries() 
         << endl << endl;

    // Create some countries
    // Test both constructor styles
    Country country1("Zimbabwe", 12);
    cout << "Country 1 created!\n";
    Country country2;
    cout << "Country 2 created!\n\n";

    cout << "Number of countries: " << Country::numberOfCountries()
         << endl << endl;

    // Test setters
    country2.setName("Canada");
    country2.setPopulation(30000000);

    // Test getters
    cout << "Country 1 name: " << country1.getName() << endl;
    cout << "Country 1 pop.: " << country1.getPopulation() << endl << endl;

    cout << "Country 2 name: " << country2.getName() << endl;
    cout << "Country 2 pop.: " << country2.getPopulation() << endl << endl;

    country2.setName("North American Free Trade Empire");
    cout << "Country 2 renamed!" << endl;
    cout << "Country 2 name: " << country2.getName() << endl;
    cout << "Country 2 pop.: " << country2.getPopulation() << endl << endl;

    // Test the destructor
    cout << "Loop beginning. Testing the destruction of an "
         << "out-of-scope object." << endl;
    for (int i = 0; i < 1; i++)
    {
        Country country3;
        cout << "Country 3 created" << endl;
        cout << "Number of countries: " << Country::numberOfCountries()
         << endl;
    }

    cout << "Loop ending. Country 3 out of scope!" << endl << endl;

    cout << "Number of countries: " << Country::numberOfCountries()
         << endl << endl;

    #ifdef DEBUG
        Country country3 = country2;
    #endif

    cout << "Country 1 name: " << country1.getName() << endl;
    cout << "Country 1 pop.: " << country1.getPopulation() << endl << endl;

    cout << "Country 2 name: " << country2.getName() << endl;
    cout << "Country 2 pop.: " << country2.getPopulation() << endl << endl;

    return EXIT_SUCCESS;
}