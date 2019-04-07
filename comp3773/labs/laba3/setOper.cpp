/*
 * File:    setOper.cpp    
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    Feb 11, 2019
 * Purpose: To write a class providing several set operations.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include <algorithm>
#include "setOper.h"
using namespace std;

// arbitrary error code numbers
#define EXCEPTION_INVALID_BOUNDS 47
#define EXCEPTION_EMPTY_SET 53

Interval::Interval()
{
	upper = 0;
	lower = 0;
}
Interval::Interval(double low_bound, double upp_bound)
{
    if (low_bound < upp_bound)
    {
        lower = low_bound;
        upper = upp_bound;
    }
    else
    {
        throw EXCEPTION_INVALID_BOUNDS;
    }
}

//Check if the value x belongs to the given interval.
bool setOper::in_interval(double x, Interval * interval)
{
    if ( (interval->lower <= x) && (x <= interval->upper) )
    	return true;
    else
    	return false;
}
//Check if the value x belongs to the intersection of two intervals.
bool setOper::in_intersection(double x, Interval * a, Interval * b)
{
	Interval * temp = new Interval();
    if (b->lower > a->upper || a->lower > b->upper)
    	throw EXCEPTION_EMPTY_SET;
    else
    {
    	temp->lower = max(a->lower, b->lower);
    	temp->upper = min(a->upper, b->upper);
    }

    cout << "Intersection of [" << a->lower << ", " << a->upper << "] and "
          << "[" << b->lower << ", " << b->upper << "] is "
          << "[" << temp->lower << ", " << temp->upper << "]." << endl;

     if (setOper::in_interval(x, temp))
     	return true;
     else
     	return false;

}
//Check if the value x belongs to the union of two intervals.
bool setOper::in_union(double x, Interval * a, Interval * b)
{
	Interval * temp = new Interval();

	if (b->lower > a->upper || a->lower > b->upper)
    	throw EXCEPTION_EMPTY_SET;
    else
    {
    	temp->lower = min(a->lower, b->lower);
    	temp->upper = max(a->upper, b->upper);
    }

    cout << "Union of [" << a->lower << ", " << a->upper << "] and "
          << "[" << b->lower << ", " << b->upper << "] is "
          << "[" << temp->lower << ", " << temp->upper << "]." << endl;

    if (setOper::in_interval(x, temp))
     	return true;
    else
     	return false;
}
