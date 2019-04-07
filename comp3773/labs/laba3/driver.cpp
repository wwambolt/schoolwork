/*
 * File:    driver.cpp   
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    Feb 11, 2019
 * Purpose: Driver for the setOper class.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include "setOper.h"
using namespace std;

int
main()
{
	// Exception handling of invalid bounds
    try
    {
        Interval * interval_1 = new Interval(5, 0);
        delete interval_1;
    }
    catch(const int& ex)
    {
    	cerr << "An error occured in the construction of an interval.\n"
    	     "Error code " << ex << " received." << endl << endl;
    }

    Interval * interval_2 = new Interval(0, 5);
    cout << "interval(5, 0) created." << endl << endl;

    cout << boolalpha;   
    cout << "Is 3 in [0, 5]?" << endl;
    cout << "  " << setOper::in_interval(3, interval_2) << endl;
    cout << "Is 7 in [0, 5]?" << endl;
    cout << "  " << setOper::in_interval(7, interval_2) << endl;
    cout << "Is -2 in [0, 5]?" << endl;
    cout << "  " << setOper::in_interval(-2, interval_2) << endl << endl;

    Interval * interval_3 = new Interval(1, 3);
    cout << "interval(1, 3) created." << endl;
    Interval * interval_4 = new Interval(5, 7);
    cout << "interval(5, 7) created." << endl << endl;

    // Exception handling of invalid intersections
    try
    {
    	cout << "Is 4 in the intersection of [1, 3] & [5, 7]?" << endl;
    	cout << setOper::in_intersection(4, interval_3, interval_4)
    	     << endl << endl;
    }
    catch(const int& ex)
    {
    	cerr << "An error occured. Intervals do not intersect.\n"
    	     "Error code " << ex << " received." << endl << endl;
    }

    Interval * interval_5 = new Interval(1, 10);
    cout << "interval(1, 10) created." << endl;
    Interval * interval_6 = new Interval(8, 13);
    cout << "interval(8, 13) created." << endl << endl;

    cout << "Is 4 in the following interval?" << endl;
	cout << setOper::in_intersection(4, interval_5, interval_6)
	     << endl << endl;
	cout << "Is 8 in the following interval?" << endl;
	cout << setOper::in_intersection(8, interval_5, interval_6)
	     << endl << endl;
	cout << "Is 10 in the following interval?" << endl;
	cout << setOper::in_intersection(10, interval_5, interval_6)
	     << endl << endl;

    cout << "Is -1 in the following interval?" << endl;
	cout << setOper::in_union(-1, interval_5, interval_6)
	     << endl << endl;
	cout << "Is 100 in the following interval?" << endl;
	cout << setOper::in_union(100, interval_5, interval_6)
	     << endl << endl;
	cout << "Is 7 in the following interval?" << endl;
	cout << setOper::in_union(7, interval_5, interval_6)
	     << endl << endl;

    return EXIT_SUCCESS;
}