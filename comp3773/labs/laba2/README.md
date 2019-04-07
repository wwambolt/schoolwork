Lab Assignment 2

Create a Country class that implements this interface:

•Country(string name, long population) •string getName() •long getPopulation() •void setName(const string&) •void setPopulation(long) •static int numberOfCountries()

The numberOfCountries method should return the current number of countries, so that it will rise as Country objects are created and fall as they are destroyed. Make copying and assigning Countries illegal (so, for example, Country copy = original; should give a compile-time error). Make a driver program that shows that all requirements are met (except the non-compiling code is commented out).

Hand in a tar'red file containing:

•header and implementation files for the Country class •the driver program source code •typescript of compiling the source code files and running the driver
