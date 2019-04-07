#include <iostream>
#include <string>
#include <iomanip>
#include "Country.h"
using namespace std;

int Country::country_num = 0;

Country::Country()
{
    country_name = "";
	country_pop = 0.0;
	country_num++;
}

Country::Country(string para_name, long para_pop)
{
    country_name = para_name;
	country_pop = para_pop;
	country_num++;
}

Country::~Country()
{
	country_num--;
}

string Country::getName()
{
	return country_name;
}

long Country::getPopulation()
{
	return country_pop;
}

void Country::setName(const string& para_name)
{
	country_name = para_name;
}

void Country::setPopulation(long para_pop)
{
	country_pop = para_pop;
}

int Country::numberOfCountries()
{
	return country_num;
}